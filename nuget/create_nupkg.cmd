@echo off

REM TODO: Use SourceLink when generating PDBs (preferably generating PDBs through CI)
REM       See https://docs.microsoft.com/en-us/cpp/build/reference/sourcelink?view=vs-2019

set GENERATOR=Visual Studio 16 2019
set PackageRoot=%~dp0\package

REM TODO: Read out the version from xr.xml but allow caller to set 4th 'revision' field
REM       for cases where the same SDK is used but the NuGet itself has a change.
if "%1"=="" (
    echo Usage: create_nupkg.cmd ^<openxr version^>
    echo Example: create_nupkg.cmd 1.0.1.3
    exit /b 1
)
set OpenXRVersion=%1

echo Copying headers...

SET TargetIncludeRoot=%PackageRoot%\include\

if exist "%TargetIncludeRoot%" rd /q /s "%TargetIncludeRoot%"
md "%TargetIncludeRoot%"

xcopy /y /s %~dp0\..\include\*.h "%TargetIncludeRoot%"
if errorlevel 1 (
    echo Copy headers failed
    exit /b 1
)

REM
REM Build for UWP
REM
call :build_loader x64_uwp -G "%GENERATOR%" -A x64 -DCMAKE_SYSTEM_NAME=WindowsStore -DCMAKE_SYSTEM_VERSION=10.0
if errorlevel 1 exit /b 1

call :build_loader Win32_uwp -G "%GENERATOR%" -A Win32 -DCMAKE_SYSTEM_NAME=WindowsStore -DCMAKE_SYSTEM_VERSION=10.0
if errorlevel 1 exit /b 1

call :build_loader arm64_uwp -G "%GENERATOR%" -A ARM64 -DCMAKE_SYSTEM_NAME=WindowsStore -DCMAKE_SYSTEM_VERSION=10.0
if errorlevel 1 exit /b 1

call :build_loader arm_uwp -G "%GENERATOR%" -A ARM -DCMAKE_SYSTEM_NAME=WindowsStore -DCMAKE_SYSTEM_VERSION=10.0
if errorlevel 1 exit /b 1

REM
REM Build for Win32
REM
call :build_loader x64 -G "%GENERATOR%" -A x64
if errorlevel 1 exit /b 1

call :build_loader Win32 -G "%GENERATOR%" -A Win32
if errorlevel 1 exit /b 1

call :build_loader arm64 -G "%GENERATOR%" -A ARM64
if errorlevel 1 exit /b 1

call :build_loader arm -G "%GENERATOR%" -A ARM
if errorlevel 1 exit /b 1

cd %~dp0
nuget pack "%PackageRoot%" -Symbols -SymbolPackageFormat snupkg -Version "%OpenXRVersion%"
if errorlevel 1 exit /b 1

exit /b 0
echo Success!

:build_loader

set NativeFolder=%~1
SHIFT
set CMakeParams=%*

set TempBuildRoot=tempbuild_%NativeFolder%

if exist "%TempBuildRoot%" rd /q /s "%TempBuildRoot%"
md "%TempBuildRoot%"
pushd "%TempBuildRoot%"

echo Generating projects...
cmake -DDYNAMIC_LOADER=ON -DBUILD_TESTS=OFF -DBUILD_API_LAYERS=OFF -DBUILD_ALL_EXTENSIONS=ON %CMakeParams% -S ..\..
if errorlevel 1 (
    echo Failed to generate VS projects
    popd
    exit /b 1
)

echo Builing loader...

SET BuildConfiguration=RelWithDebInfo
msbuild openxr.sln /t:"Loader\openxr_loader" /p:Configuration=%BuildConfiguration%
if errorlevel 1 (
    echo Loader failed to build
    popd
    exit /b 1
)

echo Copying binaries...

SET TargetBinRoot=%PackageRoot%\native\%NativeFolder%\release

SET BinRoot=%TargetBinRoot%\bin\
SET LibRoot=%TargetBinRoot%\lib\

md "%BinRoot%"
echo Copy src\loader\%BuildConfiguration%\openxr_loader.dll %BinRoot%
copy /y src\loader\%BuildConfiguration%\openxr_loader.dll "%BinRoot%"
if errorlevel 1 (
    echo Copy DLL failed
    exit /b 1
)

echo Copy src\loader\%BuildConfiguration%\openxr_loader.pdb %BinRoot%
copy /y src\loader\%BuildConfiguration%\openxr_loader.pdb "%BinRoot%"
if errorlevel 1 (
    echo Copy PDB failed
    exit /b 1
)

md "%LibRoot%"
echo Copy src\loader\%BuildConfiguration%\openxr_loader.lib %LibRoot%
copy /y src\loader\%BuildConfiguration%\openxr_loader.lib "%LibRoot%"
if errorlevel 1 (
    echo Copy LIB failed
    exit /b 1
)

popd
rd /q /s "%TempBuildRoot%"

exit /b 0