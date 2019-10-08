// *********** THIS FILE IS GENERATED - DO NOT EDIT ***********
//     See loader_source_generator.py for modifications
// ************************************************************

// Copyright (c) 2017-2019 The Khronos Group Inc.
// Copyright (c) 2017-2019 Valve Corporation
// Copyright (c) 2017-2019 LunarG, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Author: Mark Young <marky@lunarg.com>
//

#include "xr_generated_loader.hpp"

#include "api_layer_interface.hpp"
#include "exception_handling.hpp"
#include "hex_and_handles.h"
#include "loader_instance.hpp"
#include "loader_logger.hpp"
#include "loader_platform.hpp"
#include "runtime_interface.hpp"
#include "xr_generated_dispatch_table.h"

#include "xr_dependencies.h"
#include <openxr/openxr.h>
#include <openxr/openxr_platform.h>

#include <cstring>
#include <memory>
#include <new>
#include <string>
#include <unordered_map>

#if 0 // Disabled until infrastructure is ready
// Automatically generated instance trampolines and terminators

// ---- Core 1.0 commands
XRAPI_ATTR XrResult XRAPI_CALL xrGetInstanceProperties(
    XrInstance                                  instance,
    XrInstanceProperties*                       instanceProperties) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrGetInstanceProperties-instance-parameter",
                "xrGetInstanceProperties",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->GetInstanceProperties(instance, instanceProperties);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrPollEvent(
    XrInstance                                  instance,
    XrEventDataBuffer*                          eventData) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrPollEvent-instance-parameter",
                "xrPollEvent",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->PollEvent(instance, eventData);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrResultToString(
    XrInstance                                  instance,
    XrResult                                    value,
    char                                        buffer[XR_MAX_RESULT_STRING_SIZE]) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrResultToString-instance-parameter",
                "xrResultToString",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->ResultToString(instance, value, buffer);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrStructureTypeToString(
    XrInstance                                  instance,
    XrStructureType                             value,
    char                                        buffer[XR_MAX_STRUCTURE_NAME_SIZE]) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrStructureTypeToString-instance-parameter",
                "xrStructureTypeToString",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->StructureTypeToString(instance, value, buffer);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrGetSystem(
    XrInstance                                  instance,
    const XrSystemGetInfo*                      getInfo,
    XrSystemId*                                 systemId) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrGetSystem-instance-parameter",
                "xrGetSystem",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->GetSystem(instance, getInfo, systemId);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrGetSystemProperties(
    XrInstance                                  instance,
    XrSystemId                                  systemId,
    XrSystemProperties*                         properties) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrGetSystemProperties-instance-parameter",
                "xrGetSystemProperties",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->GetSystemProperties(instance, systemId, properties);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateEnvironmentBlendModes(
    XrInstance                                  instance,
    XrSystemId                                  systemId,
    XrViewConfigurationType                     viewConfigurationType,
    uint32_t                                    environmentBlendModeCapacityInput,
    uint32_t*                                   environmentBlendModeCountOutput,
    XrEnvironmentBlendMode*                     environmentBlendModes) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrEnumerateEnvironmentBlendModes-instance-parameter",
                "xrEnumerateEnvironmentBlendModes",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->EnumerateEnvironmentBlendModes(instance, systemId, viewConfigurationType, environmentBlendModeCapacityInput, environmentBlendModeCountOutput, environmentBlendModes);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrCreateSession(
    XrInstance                                  instance,
    const XrSessionCreateInfo*                  createInfo,
    XrSession*                                  session) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrCreateSession-instance-parameter",
                "xrCreateSession",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
        XrResult result = XR_SUCCESS;
    result = dispatch_table->CreateSession(instance, createInfo, session);
        if (XR_SUCCESS == result && nullptr != session) {
            XrResult insert_result = g_session_map.Insert(*session, *loader_instance);
            if (XR_FAILED(insert_result)) {
                LoaderLogger::LogErrorMessage(
                    "xrCreateSession",
                    "Failed inserting new session into map: may be null or not unique");
            }
        }
    return result;
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySession(
    XrSession                                   session) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    // Destroy the mapping entry for this item if it was valid.
    if (nullptr != loader_instance) {
            g_session_map.Erase(session);
    }
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrDestroySession-session-parameter",
                "xrDestroySession",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
        XrResult result = XR_SUCCESS;
    result = dispatch_table->DestroySession(session);
    return result;
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateReferenceSpaces(
    XrSession                                   session,
    uint32_t                                    spaceCapacityInput,
    uint32_t*                                   spaceCountOutput,
    XrReferenceSpaceType*                       spaces) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrEnumerateReferenceSpaces-session-parameter",
                "xrEnumerateReferenceSpaces",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->EnumerateReferenceSpaces(session, spaceCapacityInput, spaceCountOutput, spaces);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrCreateReferenceSpace(
    XrSession                                   session,
    const XrReferenceSpaceCreateInfo*           createInfo,
    XrSpace*                                    space) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrCreateReferenceSpace-session-parameter",
                "xrCreateReferenceSpace",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
        XrResult result = XR_SUCCESS;
    result = dispatch_table->CreateReferenceSpace(session, createInfo, space);
        if (XR_SUCCESS == result && nullptr != space) {
            XrResult insert_result = g_space_map.Insert(*space, *loader_instance);
            if (XR_FAILED(insert_result)) {
                LoaderLogger::LogErrorMessage(
                    "xrCreateReferenceSpace",
                    "Failed inserting new space into map: may be null or not unique");
            }
        }
    return result;
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrGetReferenceSpaceBoundsRect(
    XrSession                                   session,
    XrReferenceSpaceType                        referenceSpaceType,
    XrExtent2Df*                                bounds) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrGetReferenceSpaceBoundsRect-session-parameter",
                "xrGetReferenceSpaceBoundsRect",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->GetReferenceSpaceBoundsRect(session, referenceSpaceType, bounds);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrCreateActionSpace(
    XrSession                                   session,
    const XrActionSpaceCreateInfo*              createInfo,
    XrSpace*                                    space) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrCreateActionSpace-session-parameter",
                "xrCreateActionSpace",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
        XrResult result = XR_SUCCESS;
    result = dispatch_table->CreateActionSpace(session, createInfo, space);
        if (XR_SUCCESS == result && nullptr != space) {
            XrResult insert_result = g_space_map.Insert(*space, *loader_instance);
            if (XR_FAILED(insert_result)) {
                LoaderLogger::LogErrorMessage(
                    "xrCreateActionSpace",
                    "Failed inserting new space into map: may be null or not unique");
            }
        }
    return result;
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrLocateSpace(
    XrSpace                                     space,
    XrSpace                                     baseSpace,
    XrTime                                      time,
    XrSpaceLocation*                            location) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_space_map.Get(space);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrLocateSpace-space-parameter",
                "xrLocateSpace",
                "space is not a valid XrSpace",
                {XrSdkLogObjectInfo{space, XR_OBJECT_TYPE_SPACE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->LocateSpace(space, baseSpace, time, location);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySpace(
    XrSpace                                     space) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_space_map.Get(space);
    // Destroy the mapping entry for this item if it was valid.
    if (nullptr != loader_instance) {
            g_space_map.Erase(space);
    }
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrDestroySpace-space-parameter",
                "xrDestroySpace",
                "space is not a valid XrSpace",
                {XrSdkLogObjectInfo{space, XR_OBJECT_TYPE_SPACE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
        XrResult result = XR_SUCCESS;
    result = dispatch_table->DestroySpace(space);
    return result;
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateViewConfigurations(
    XrInstance                                  instance,
    XrSystemId                                  systemId,
    uint32_t                                    viewConfigurationTypeCapacityInput,
    uint32_t*                                   viewConfigurationTypeCountOutput,
    XrViewConfigurationType*                    viewConfigurationTypes) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrEnumerateViewConfigurations-instance-parameter",
                "xrEnumerateViewConfigurations",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->EnumerateViewConfigurations(instance, systemId, viewConfigurationTypeCapacityInput, viewConfigurationTypeCountOutput, viewConfigurationTypes);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrGetViewConfigurationProperties(
    XrInstance                                  instance,
    XrSystemId                                  systemId,
    XrViewConfigurationType                     viewConfigurationType,
    XrViewConfigurationProperties*              configurationProperties) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrGetViewConfigurationProperties-instance-parameter",
                "xrGetViewConfigurationProperties",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->GetViewConfigurationProperties(instance, systemId, viewConfigurationType, configurationProperties);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateViewConfigurationViews(
    XrInstance                                  instance,
    XrSystemId                                  systemId,
    XrViewConfigurationType                     viewConfigurationType,
    uint32_t                                    viewCapacityInput,
    uint32_t*                                   viewCountOutput,
    XrViewConfigurationView*                    views) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrEnumerateViewConfigurationViews-instance-parameter",
                "xrEnumerateViewConfigurationViews",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->EnumerateViewConfigurationViews(instance, systemId, viewConfigurationType, viewCapacityInput, viewCountOutput, views);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateSwapchainFormats(
    XrSession                                   session,
    uint32_t                                    formatCapacityInput,
    uint32_t*                                   formatCountOutput,
    int64_t*                                    formats) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrEnumerateSwapchainFormats-session-parameter",
                "xrEnumerateSwapchainFormats",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->EnumerateSwapchainFormats(session, formatCapacityInput, formatCountOutput, formats);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrCreateSwapchain(
    XrSession                                   session,
    const XrSwapchainCreateInfo*                createInfo,
    XrSwapchain*                                swapchain) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrCreateSwapchain-session-parameter",
                "xrCreateSwapchain",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
        XrResult result = XR_SUCCESS;
    result = dispatch_table->CreateSwapchain(session, createInfo, swapchain);
        if (XR_SUCCESS == result && nullptr != swapchain) {
            XrResult insert_result = g_swapchain_map.Insert(*swapchain, *loader_instance);
            if (XR_FAILED(insert_result)) {
                LoaderLogger::LogErrorMessage(
                    "xrCreateSwapchain",
                    "Failed inserting new swapchain into map: may be null or not unique");
            }
        }
    return result;
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySwapchain(
    XrSwapchain                                 swapchain) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_swapchain_map.Get(swapchain);
    // Destroy the mapping entry for this item if it was valid.
    if (nullptr != loader_instance) {
            g_swapchain_map.Erase(swapchain);
    }
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrDestroySwapchain-swapchain-parameter",
                "xrDestroySwapchain",
                "swapchain is not a valid XrSwapchain",
                {XrSdkLogObjectInfo{swapchain, XR_OBJECT_TYPE_SWAPCHAIN}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
        XrResult result = XR_SUCCESS;
    result = dispatch_table->DestroySwapchain(swapchain);
    return result;
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateSwapchainImages(
    XrSwapchain                                 swapchain,
    uint32_t                                    imageCapacityInput,
    uint32_t*                                   imageCountOutput,
    XrSwapchainImageBaseHeader*                 images) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_swapchain_map.Get(swapchain);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrEnumerateSwapchainImages-swapchain-parameter",
                "xrEnumerateSwapchainImages",
                "swapchain is not a valid XrSwapchain",
                {XrSdkLogObjectInfo{swapchain, XR_OBJECT_TYPE_SWAPCHAIN}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->EnumerateSwapchainImages(swapchain, imageCapacityInput, imageCountOutput, images);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrAcquireSwapchainImage(
    XrSwapchain                                 swapchain,
    const XrSwapchainImageAcquireInfo*          acquireInfo,
    uint32_t*                                   index) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_swapchain_map.Get(swapchain);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrAcquireSwapchainImage-swapchain-parameter",
                "xrAcquireSwapchainImage",
                "swapchain is not a valid XrSwapchain",
                {XrSdkLogObjectInfo{swapchain, XR_OBJECT_TYPE_SWAPCHAIN}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->AcquireSwapchainImage(swapchain, acquireInfo, index);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrWaitSwapchainImage(
    XrSwapchain                                 swapchain,
    const XrSwapchainImageWaitInfo*             waitInfo) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_swapchain_map.Get(swapchain);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrWaitSwapchainImage-swapchain-parameter",
                "xrWaitSwapchainImage",
                "swapchain is not a valid XrSwapchain",
                {XrSdkLogObjectInfo{swapchain, XR_OBJECT_TYPE_SWAPCHAIN}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->WaitSwapchainImage(swapchain, waitInfo);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrReleaseSwapchainImage(
    XrSwapchain                                 swapchain,
    const XrSwapchainImageReleaseInfo*          releaseInfo) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_swapchain_map.Get(swapchain);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrReleaseSwapchainImage-swapchain-parameter",
                "xrReleaseSwapchainImage",
                "swapchain is not a valid XrSwapchain",
                {XrSdkLogObjectInfo{swapchain, XR_OBJECT_TYPE_SWAPCHAIN}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->ReleaseSwapchainImage(swapchain, releaseInfo);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrBeginSession(
    XrSession                                   session,
    const XrSessionBeginInfo*                   beginInfo) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrBeginSession-session-parameter",
                "xrBeginSession",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->BeginSession(session, beginInfo);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrEndSession(
    XrSession                                   session) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrEndSession-session-parameter",
                "xrEndSession",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->EndSession(session);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrRequestExitSession(
    XrSession                                   session) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrRequestExitSession-session-parameter",
                "xrRequestExitSession",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->RequestExitSession(session);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrWaitFrame(
    XrSession                                   session,
    const XrFrameWaitInfo*                      frameWaitInfo,
    XrFrameState*                               frameState) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrWaitFrame-session-parameter",
                "xrWaitFrame",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->WaitFrame(session, frameWaitInfo, frameState);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrBeginFrame(
    XrSession                                   session,
    const XrFrameBeginInfo*                     frameBeginInfo) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrBeginFrame-session-parameter",
                "xrBeginFrame",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->BeginFrame(session, frameBeginInfo);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrEndFrame(
    XrSession                                   session,
    const XrFrameEndInfo*                       frameEndInfo) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrEndFrame-session-parameter",
                "xrEndFrame",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->EndFrame(session, frameEndInfo);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrLocateViews(
    XrSession                                   session,
    const XrViewLocateInfo*                     viewLocateInfo,
    XrViewState*                                viewState,
    uint32_t                                    viewCapacityInput,
    uint32_t*                                   viewCountOutput,
    XrView*                                     views) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrLocateViews-session-parameter",
                "xrLocateViews",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->LocateViews(session, viewLocateInfo, viewState, viewCapacityInput, viewCountOutput, views);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrStringToPath(
    XrInstance                                  instance,
    const char*                                 pathString,
    XrPath*                                     path) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrStringToPath-instance-parameter",
                "xrStringToPath",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->StringToPath(instance, pathString, path);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrPathToString(
    XrInstance                                  instance,
    XrPath                                      path,
    uint32_t                                    bufferCapacityInput,
    uint32_t*                                   bufferCountOutput,
    char*                                       buffer) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrPathToString-instance-parameter",
                "xrPathToString",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->PathToString(instance, path, bufferCapacityInput, bufferCountOutput, buffer);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrCreateActionSet(
    XrInstance                                  instance,
    const XrActionSetCreateInfo*                createInfo,
    XrActionSet*                                actionSet) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrCreateActionSet-instance-parameter",
                "xrCreateActionSet",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
        XrResult result = XR_SUCCESS;
    result = dispatch_table->CreateActionSet(instance, createInfo, actionSet);
        if (XR_SUCCESS == result && nullptr != actionSet) {
            XrResult insert_result = g_actionset_map.Insert(*actionSet, *loader_instance);
            if (XR_FAILED(insert_result)) {
                LoaderLogger::LogErrorMessage(
                    "xrCreateActionSet",
                    "Failed inserting new actionset into map: may be null or not unique");
            }
        }
    return result;
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyActionSet(
    XrActionSet                                 actionSet) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_actionset_map.Get(actionSet);
    // Destroy the mapping entry for this item if it was valid.
    if (nullptr != loader_instance) {
            g_actionset_map.Erase(actionSet);
    }
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrDestroyActionSet-actionSet-parameter",
                "xrDestroyActionSet",
                "actionSet is not a valid XrActionSet",
                {XrSdkLogObjectInfo{actionSet, XR_OBJECT_TYPE_ACTION_SET}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
        XrResult result = XR_SUCCESS;
    result = dispatch_table->DestroyActionSet(actionSet);
    return result;
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrCreateAction(
    XrActionSet                                 actionSet,
    const XrActionCreateInfo*                   createInfo,
    XrAction*                                   action) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_actionset_map.Get(actionSet);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrCreateAction-actionSet-parameter",
                "xrCreateAction",
                "actionSet is not a valid XrActionSet",
                {XrSdkLogObjectInfo{actionSet, XR_OBJECT_TYPE_ACTION_SET}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
        XrResult result = XR_SUCCESS;
    result = dispatch_table->CreateAction(actionSet, createInfo, action);
        if (XR_SUCCESS == result && nullptr != action) {
            XrResult insert_result = g_action_map.Insert(*action, *loader_instance);
            if (XR_FAILED(insert_result)) {
                LoaderLogger::LogErrorMessage(
                    "xrCreateAction",
                    "Failed inserting new action into map: may be null or not unique");
            }
        }
    return result;
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyAction(
    XrAction                                    action) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_action_map.Get(action);
    // Destroy the mapping entry for this item if it was valid.
    if (nullptr != loader_instance) {
            g_action_map.Erase(action);
    }
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrDestroyAction-action-parameter",
                "xrDestroyAction",
                "action is not a valid XrAction",
                {XrSdkLogObjectInfo{action, XR_OBJECT_TYPE_ACTION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
        XrResult result = XR_SUCCESS;
    result = dispatch_table->DestroyAction(action);
    return result;
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrSuggestInteractionProfileBindings(
    XrInstance                                  instance,
    const XrInteractionProfileSuggestedBinding* suggestedBindings) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_instance_map.Get(instance);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrSuggestInteractionProfileBindings-instance-parameter",
                "xrSuggestInteractionProfileBindings",
                "instance is not a valid XrInstance",
                {XrSdkLogObjectInfo{instance, XR_OBJECT_TYPE_INSTANCE}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->SuggestInteractionProfileBindings(instance, suggestedBindings);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrAttachSessionActionSets(
    XrSession                                   session,
    const XrSessionActionSetsAttachInfo*        attachInfo) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrAttachSessionActionSets-session-parameter",
                "xrAttachSessionActionSets",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->AttachSessionActionSets(session, attachInfo);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrGetCurrentInteractionProfile(
    XrSession                                   session,
    XrPath                                      topLevelUserPath,
    XrInteractionProfileState*                  interactionProfile) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrGetCurrentInteractionProfile-session-parameter",
                "xrGetCurrentInteractionProfile",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->GetCurrentInteractionProfile(session, topLevelUserPath, interactionProfile);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrGetActionStateBoolean(
    XrSession                                   session,
    const XrActionStateGetInfo*                 getInfo,
    XrActionStateBoolean*                       state) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrGetActionStateBoolean-session-parameter",
                "xrGetActionStateBoolean",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->GetActionStateBoolean(session, getInfo, state);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrGetActionStateFloat(
    XrSession                                   session,
    const XrActionStateGetInfo*                 getInfo,
    XrActionStateFloat*                         state) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrGetActionStateFloat-session-parameter",
                "xrGetActionStateFloat",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->GetActionStateFloat(session, getInfo, state);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrGetActionStateVector2f(
    XrSession                                   session,
    const XrActionStateGetInfo*                 getInfo,
    XrActionStateVector2f*                      state) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrGetActionStateVector2f-session-parameter",
                "xrGetActionStateVector2f",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->GetActionStateVector2f(session, getInfo, state);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrGetActionStatePose(
    XrSession                                   session,
    const XrActionStateGetInfo*                 getInfo,
    XrActionStatePose*                          state) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrGetActionStatePose-session-parameter",
                "xrGetActionStatePose",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->GetActionStatePose(session, getInfo, state);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrSyncActions(
    XrSession                                   session,
    const XrActionsSyncInfo*                    syncInfo) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrSyncActions-session-parameter",
                "xrSyncActions",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->SyncActions(session, syncInfo);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateBoundSourcesForAction(
    XrSession                                   session,
    const XrBoundSourcesForActionEnumerateInfo* enumerateInfo,
    uint32_t                                    sourceCapacityInput,
    uint32_t*                                   sourceCountOutput,
    XrPath*                                     sources) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrEnumerateBoundSourcesForAction-session-parameter",
                "xrEnumerateBoundSourcesForAction",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->EnumerateBoundSourcesForAction(session, enumerateInfo, sourceCapacityInput, sourceCountOutput, sources);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrGetInputSourceLocalizedName(
    XrSession                                   session,
    const XrInputSourceLocalizedNameGetInfo*    getInfo,
    uint32_t                                    bufferCapacityInput,
    uint32_t*                                   bufferCountOutput,
    char*                                       buffer) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrGetInputSourceLocalizedName-session-parameter",
                "xrGetInputSourceLocalizedName",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->GetInputSourceLocalizedName(session, getInfo, bufferCapacityInput, bufferCountOutput, buffer);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrApplyHapticFeedback(
    XrSession                                   session,
    const XrHapticActionInfo*                   hapticActionInfo,
    const XrHapticBaseHeader*                   hapticFeedback) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrApplyHapticFeedback-session-parameter",
                "xrApplyHapticFeedback",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->ApplyHapticFeedback(session, hapticActionInfo, hapticFeedback);
}
XRLOADER_ABI_CATCH_FALLBACK


XRAPI_ATTR XrResult XRAPI_CALL xrStopHapticFeedback(
    XrSession                                   session,
    const XrHapticActionInfo*                   hapticActionInfo) XRLOADER_ABI_TRY {
    LoaderInstance *loader_instance = g_session_map.Get(session);
    if (nullptr == loader_instance) {
            LoaderLogger::LogValidationErrorMessage(
                "VUID-xrStopHapticFeedback-session-parameter",
                "xrStopHapticFeedback",
                "session is not a valid XrSession",
                {XrSdkLogObjectInfo{session, XR_OBJECT_TYPE_SESSION}});
        return XR_ERROR_HANDLE_INVALID;
    }
    const std::unique_ptr<XrGeneratedDispatchTable>& dispatch_table = loader_instance->DispatchTable();
    return dispatch_table->StopHapticFeedback(session, hapticActionInfo);
}
XRLOADER_ABI_CATCH_FALLBACK
#endif

LOADER_EXPORT XRAPI_ATTR XrResult XRAPI_CALL xrGetInstanceProcAddr(XrInstance instance, const char* name,
                                                                   PFN_xrVoidFunction* function) XRLOADER_ABI_TRY {
    if (nullptr == function) {
        LoaderLogger::LogValidationErrorMessage("VUID-xrGetInstanceProcAddr-function-parameter",
                                                "xrGetInstanceProcAddr", "Invalid Function pointer");
        return XR_ERROR_VALIDATION_FAILURE;
    }
    if (nullptr == name) {
        LoaderLogger::LogValidationErrorMessage("VUID-xrGetInstanceProcAddr-function-parameter",
                                                "xrGetInstanceProcAddr", "Invalid Name pointer");
        return XR_ERROR_VALIDATION_FAILURE;
    }

    // TODO: Assert on instance value.
    if (g_loader_instance) {
        return g_loader_instance->GetInstanceProcAddrFuncPointer()(instance, name, function);
    }
    else {
        return RuntimeInterface::GetRuntime().GetInstanceProcAddrFuncPointer()(instance, name, function);
    }
}
XRLOADER_ABI_CATCH_FALLBACK

// Loader implementation with override for special functions.
XRAPI_ATTR XrResult XRAPI_CALL LoaderGetInstanceProcAddr(PFN_xrGetInstanceProcAddr get_instance_proc_addr, XrInstance instance, const char* name,
                                                               PFN_xrVoidFunction* function) XRLOADER_ABI_TRY {

    // A few instance commands need to go through a loader terminator.
    // Otherwise, go to the first layer or runtime version of the command if it exists.
    // But first set the function pointer to NULL so that the fall-through below actually works.
    *function = nullptr;

    if (0 == strcmp(name, "xrGetInstanceProcAddr")) {
        *function = reinterpret_cast<PFN_xrVoidFunction>(LoaderXrTermGetInstanceProcAddr);
    } else if (0 == strcmp(name, "xrCreateInstance")) {
        *function = reinterpret_cast<PFN_xrVoidFunction>(LoaderXrTermCreateInstance);
    } else if (0 == strcmp(name, "xrDestroyInstance")) {
        *function = reinterpret_cast<PFN_xrVoidFunction>(LoaderXrTermDestroyInstance);
    } else if (0 == strcmp(name, "xrSetDebugUtilsObjectNameEXT")) {
        *function = reinterpret_cast<PFN_xrVoidFunction>(LoaderXrTermSetDebugUtilsObjectNameEXT);
    } else if (0 == strcmp(name, "xrCreateDebugUtilsMessengerEXT")) {
        *function = reinterpret_cast<PFN_xrVoidFunction>(LoaderXrTermCreateDebugUtilsMessengerEXT);
    } else if (0 == strcmp(name, "xrDestroyDebugUtilsMessengerEXT")) {
        *function = reinterpret_cast<PFN_xrVoidFunction>(LoaderXrTermDestroyDebugUtilsMessengerEXT);
    } else if (0 == strcmp(name, "xrSubmitDebugUtilsMessageEXT")) {
        *function = reinterpret_cast<PFN_xrVoidFunction>(LoaderXrTermSubmitDebugUtilsMessageEXT);
    } else if (0 == strcmp(name, "xrCreateApiLayerInstance")) {
        // Special layer version of xrCreateInstance terminator.  If we get called this by a layer,
        // we simply re-direct the information back into the standard xrCreateInstance terminator.
        *function = reinterpret_cast<PFN_xrVoidFunction>(LoaderXrTermCreateApiLayerInstance);
    }
    if (nullptr != *function) {
        return XR_SUCCESS;
    }

    return get_instance_proc_addr(instance, name, function);
}
XRLOADER_ABI_CATCH_FALLBACK

// Terminator GetInstanceProcAddr function using runtime's procs.
XRAPI_ATTR XrResult XRAPI_CALL LoaderXrTermGetInstanceProcAddr(XrInstance instance, const char* name,
    PFN_xrVoidFunction* function) XRLOADER_ABI_TRY {
    return LoaderGetInstanceProcAddr(RuntimeInterface::GetRuntime().GetInstanceProcAddrFuncPointer(), instance, name, function);
}
XRLOADER_ABI_CATCH_FALLBACK

// Instance Init Dispatch Table (put all terminators in first)
void LoaderGenInitInstanceDispatchTable(PFN_xrGetInstanceProcAddr get_instance_proc_addr, XrInstance instance, std::unique_ptr<XrGeneratedDispatchTable>& table) {

    // ---- Core 1_0 commands
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetInstanceProcAddr", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetInstanceProcAddr));
    table->EnumerateApiLayerProperties = nullptr;
    table->EnumerateInstanceExtensionProperties = nullptr;
    LoaderXrTermGetInstanceProcAddr(instance, "xrCreateInstance", reinterpret_cast<PFN_xrVoidFunction*>(&table->CreateInstance));
    LoaderXrTermGetInstanceProcAddr(instance, "xrDestroyInstance", reinterpret_cast<PFN_xrVoidFunction*>(&table->DestroyInstance));
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetInstanceProperties", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetInstanceProperties));
    LoaderXrTermGetInstanceProcAddr(instance, "xrPollEvent", reinterpret_cast<PFN_xrVoidFunction*>(&table->PollEvent));
    LoaderXrTermGetInstanceProcAddr(instance, "xrResultToString", reinterpret_cast<PFN_xrVoidFunction*>(&table->ResultToString));
    LoaderXrTermGetInstanceProcAddr(instance, "xrStructureTypeToString", reinterpret_cast<PFN_xrVoidFunction*>(&table->StructureTypeToString));
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetSystem", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetSystem));
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetSystemProperties", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetSystemProperties));
    LoaderXrTermGetInstanceProcAddr(instance, "xrEnumerateEnvironmentBlendModes", reinterpret_cast<PFN_xrVoidFunction*>(&table->EnumerateEnvironmentBlendModes));
    LoaderXrTermGetInstanceProcAddr(instance, "xrCreateSession", reinterpret_cast<PFN_xrVoidFunction*>(&table->CreateSession));
    LoaderXrTermGetInstanceProcAddr(instance, "xrDestroySession", reinterpret_cast<PFN_xrVoidFunction*>(&table->DestroySession));
    LoaderXrTermGetInstanceProcAddr(instance, "xrEnumerateReferenceSpaces", reinterpret_cast<PFN_xrVoidFunction*>(&table->EnumerateReferenceSpaces));
    LoaderXrTermGetInstanceProcAddr(instance, "xrCreateReferenceSpace", reinterpret_cast<PFN_xrVoidFunction*>(&table->CreateReferenceSpace));
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetReferenceSpaceBoundsRect", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetReferenceSpaceBoundsRect));
    LoaderXrTermGetInstanceProcAddr(instance, "xrCreateActionSpace", reinterpret_cast<PFN_xrVoidFunction*>(&table->CreateActionSpace));
    LoaderXrTermGetInstanceProcAddr(instance, "xrLocateSpace", reinterpret_cast<PFN_xrVoidFunction*>(&table->LocateSpace));
    LoaderXrTermGetInstanceProcAddr(instance, "xrDestroySpace", reinterpret_cast<PFN_xrVoidFunction*>(&table->DestroySpace));
    LoaderXrTermGetInstanceProcAddr(instance, "xrEnumerateViewConfigurations", reinterpret_cast<PFN_xrVoidFunction*>(&table->EnumerateViewConfigurations));
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetViewConfigurationProperties", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetViewConfigurationProperties));
    LoaderXrTermGetInstanceProcAddr(instance, "xrEnumerateViewConfigurationViews", reinterpret_cast<PFN_xrVoidFunction*>(&table->EnumerateViewConfigurationViews));
    LoaderXrTermGetInstanceProcAddr(instance, "xrEnumerateSwapchainFormats", reinterpret_cast<PFN_xrVoidFunction*>(&table->EnumerateSwapchainFormats));
    LoaderXrTermGetInstanceProcAddr(instance, "xrCreateSwapchain", reinterpret_cast<PFN_xrVoidFunction*>(&table->CreateSwapchain));
    LoaderXrTermGetInstanceProcAddr(instance, "xrDestroySwapchain", reinterpret_cast<PFN_xrVoidFunction*>(&table->DestroySwapchain));
    LoaderXrTermGetInstanceProcAddr(instance, "xrEnumerateSwapchainImages", reinterpret_cast<PFN_xrVoidFunction*>(&table->EnumerateSwapchainImages));
    LoaderXrTermGetInstanceProcAddr(instance, "xrAcquireSwapchainImage", reinterpret_cast<PFN_xrVoidFunction*>(&table->AcquireSwapchainImage));
    LoaderXrTermGetInstanceProcAddr(instance, "xrWaitSwapchainImage", reinterpret_cast<PFN_xrVoidFunction*>(&table->WaitSwapchainImage));
    LoaderXrTermGetInstanceProcAddr(instance, "xrReleaseSwapchainImage", reinterpret_cast<PFN_xrVoidFunction*>(&table->ReleaseSwapchainImage));
    LoaderXrTermGetInstanceProcAddr(instance, "xrBeginSession", reinterpret_cast<PFN_xrVoidFunction*>(&table->BeginSession));
    LoaderXrTermGetInstanceProcAddr(instance, "xrEndSession", reinterpret_cast<PFN_xrVoidFunction*>(&table->EndSession));
    LoaderXrTermGetInstanceProcAddr(instance, "xrRequestExitSession", reinterpret_cast<PFN_xrVoidFunction*>(&table->RequestExitSession));
    LoaderXrTermGetInstanceProcAddr(instance, "xrWaitFrame", reinterpret_cast<PFN_xrVoidFunction*>(&table->WaitFrame));
    LoaderXrTermGetInstanceProcAddr(instance, "xrBeginFrame", reinterpret_cast<PFN_xrVoidFunction*>(&table->BeginFrame));
    LoaderXrTermGetInstanceProcAddr(instance, "xrEndFrame", reinterpret_cast<PFN_xrVoidFunction*>(&table->EndFrame));
    LoaderXrTermGetInstanceProcAddr(instance, "xrLocateViews", reinterpret_cast<PFN_xrVoidFunction*>(&table->LocateViews));
    LoaderXrTermGetInstanceProcAddr(instance, "xrStringToPath", reinterpret_cast<PFN_xrVoidFunction*>(&table->StringToPath));
    LoaderXrTermGetInstanceProcAddr(instance, "xrPathToString", reinterpret_cast<PFN_xrVoidFunction*>(&table->PathToString));
    LoaderXrTermGetInstanceProcAddr(instance, "xrCreateActionSet", reinterpret_cast<PFN_xrVoidFunction*>(&table->CreateActionSet));
    LoaderXrTermGetInstanceProcAddr(instance, "xrDestroyActionSet", reinterpret_cast<PFN_xrVoidFunction*>(&table->DestroyActionSet));
    LoaderXrTermGetInstanceProcAddr(instance, "xrCreateAction", reinterpret_cast<PFN_xrVoidFunction*>(&table->CreateAction));
    LoaderXrTermGetInstanceProcAddr(instance, "xrDestroyAction", reinterpret_cast<PFN_xrVoidFunction*>(&table->DestroyAction));
    LoaderXrTermGetInstanceProcAddr(instance, "xrSuggestInteractionProfileBindings", reinterpret_cast<PFN_xrVoidFunction*>(&table->SuggestInteractionProfileBindings));
    LoaderXrTermGetInstanceProcAddr(instance, "xrAttachSessionActionSets", reinterpret_cast<PFN_xrVoidFunction*>(&table->AttachSessionActionSets));
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetCurrentInteractionProfile", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetCurrentInteractionProfile));
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetActionStateBoolean", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetActionStateBoolean));
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetActionStateFloat", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetActionStateFloat));
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetActionStateVector2f", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetActionStateVector2f));
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetActionStatePose", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetActionStatePose));
    LoaderXrTermGetInstanceProcAddr(instance, "xrSyncActions", reinterpret_cast<PFN_xrVoidFunction*>(&table->SyncActions));
    LoaderXrTermGetInstanceProcAddr(instance, "xrEnumerateBoundSourcesForAction", reinterpret_cast<PFN_xrVoidFunction*>(&table->EnumerateBoundSourcesForAction));
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetInputSourceLocalizedName", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetInputSourceLocalizedName));
    LoaderXrTermGetInstanceProcAddr(instance, "xrApplyHapticFeedback", reinterpret_cast<PFN_xrVoidFunction*>(&table->ApplyHapticFeedback));
    LoaderXrTermGetInstanceProcAddr(instance, "xrStopHapticFeedback", reinterpret_cast<PFN_xrVoidFunction*>(&table->StopHapticFeedback));

    // ---- XR_KHR_android_thread_settings extension commands
#if defined(XR_USE_PLATFORM_ANDROID)
    LoaderXrTermGetInstanceProcAddr(instance, "xrSetAndroidApplicationThreadKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->SetAndroidApplicationThreadKHR));
#endif // defined(XR_USE_PLATFORM_ANDROID)

    // ---- XR_KHR_android_surface_swapchain extension commands
#if defined(XR_USE_PLATFORM_ANDROID)
    LoaderXrTermGetInstanceProcAddr(instance, "xrCreateSwapchainAndroidSurfaceKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->CreateSwapchainAndroidSurfaceKHR));
#endif // defined(XR_USE_PLATFORM_ANDROID)

    // ---- XR_KHR_opengl_enable extension commands
#if defined(XR_USE_GRAPHICS_API_OPENGL)
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetOpenGLGraphicsRequirementsKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetOpenGLGraphicsRequirementsKHR));
#endif // defined(XR_USE_GRAPHICS_API_OPENGL)

    // ---- XR_KHR_opengl_es_enable extension commands
#if defined(XR_USE_GRAPHICS_API_OPENGL_ES)
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetOpenGLESGraphicsRequirementsKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetOpenGLESGraphicsRequirementsKHR));
#endif // defined(XR_USE_GRAPHICS_API_OPENGL_ES)

    // ---- XR_KHR_vulkan_enable extension commands
#if defined(XR_USE_GRAPHICS_API_VULKAN)
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetVulkanInstanceExtensionsKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetVulkanInstanceExtensionsKHR));
#endif // defined(XR_USE_GRAPHICS_API_VULKAN)
#if defined(XR_USE_GRAPHICS_API_VULKAN)
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetVulkanDeviceExtensionsKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetVulkanDeviceExtensionsKHR));
#endif // defined(XR_USE_GRAPHICS_API_VULKAN)
#if defined(XR_USE_GRAPHICS_API_VULKAN)
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetVulkanGraphicsDeviceKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetVulkanGraphicsDeviceKHR));
#endif // defined(XR_USE_GRAPHICS_API_VULKAN)
#if defined(XR_USE_GRAPHICS_API_VULKAN)
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetVulkanGraphicsRequirementsKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetVulkanGraphicsRequirementsKHR));
#endif // defined(XR_USE_GRAPHICS_API_VULKAN)

    // ---- XR_KHR_D3D11_enable extension commands
#if defined(XR_USE_GRAPHICS_API_D3D11)
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetD3D11GraphicsRequirementsKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetD3D11GraphicsRequirementsKHR));
#endif // defined(XR_USE_GRAPHICS_API_D3D11)

    // ---- XR_KHR_D3D12_enable extension commands
#if defined(XR_USE_GRAPHICS_API_D3D12)
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetD3D12GraphicsRequirementsKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetD3D12GraphicsRequirementsKHR));
#endif // defined(XR_USE_GRAPHICS_API_D3D12)

    // ---- XR_KHR_visibility_mask extension commands
    LoaderXrTermGetInstanceProcAddr(instance, "xrGetVisibilityMaskKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->GetVisibilityMaskKHR));

    // ---- XR_KHR_win32_convert_performance_counter_time extension commands
#if defined(XR_USE_PLATFORM_WIN32)
    LoaderXrTermGetInstanceProcAddr(instance, "xrConvertWin32PerformanceCounterToTimeKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->ConvertWin32PerformanceCounterToTimeKHR));
#endif // defined(XR_USE_PLATFORM_WIN32)
#if defined(XR_USE_PLATFORM_WIN32)
    LoaderXrTermGetInstanceProcAddr(instance, "xrConvertTimeToWin32PerformanceCounterKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->ConvertTimeToWin32PerformanceCounterKHR));
#endif // defined(XR_USE_PLATFORM_WIN32)

    // ---- XR_KHR_convert_timespec_time extension commands
#if defined(XR_USE_TIMESPEC)
    LoaderXrTermGetInstanceProcAddr(instance, "xrConvertTimespecTimeToTimeKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->ConvertTimespecTimeToTimeKHR));
#endif // defined(XR_USE_TIMESPEC)
#if defined(XR_USE_TIMESPEC)
    LoaderXrTermGetInstanceProcAddr(instance, "xrConvertTimeToTimespecTimeKHR", reinterpret_cast<PFN_xrVoidFunction*>(&table->ConvertTimeToTimespecTimeKHR));
#endif // defined(XR_USE_TIMESPEC)

    // ---- XR_EXT_performance_settings extension commands
    LoaderXrTermGetInstanceProcAddr(instance, "xrPerfSettingsSetPerformanceLevelEXT", reinterpret_cast<PFN_xrVoidFunction*>(&table->PerfSettingsSetPerformanceLevelEXT));

    // ---- XR_EXT_thermal_query extension commands
    LoaderXrTermGetInstanceProcAddr(instance, "xrThermalGetTemperatureTrendEXT", reinterpret_cast<PFN_xrVoidFunction*>(&table->ThermalGetTemperatureTrendEXT));

    // ---- XR_EXT_debug_utils extension commands
    LoaderXrTermGetInstanceProcAddr(instance, "xrSetDebugUtilsObjectNameEXT", reinterpret_cast<PFN_xrVoidFunction*>(&table->SetDebugUtilsObjectNameEXT));
    LoaderXrTermGetInstanceProcAddr(instance, "xrCreateDebugUtilsMessengerEXT", reinterpret_cast<PFN_xrVoidFunction*>(&table->CreateDebugUtilsMessengerEXT));
    LoaderXrTermGetInstanceProcAddr(instance, "xrDestroyDebugUtilsMessengerEXT", reinterpret_cast<PFN_xrVoidFunction*>(&table->DestroyDebugUtilsMessengerEXT));
    LoaderXrTermGetInstanceProcAddr(instance, "xrSubmitDebugUtilsMessageEXT", reinterpret_cast<PFN_xrVoidFunction*>(&table->SubmitDebugUtilsMessageEXT));
    LoaderXrTermGetInstanceProcAddr(instance, "xrSessionBeginDebugUtilsLabelRegionEXT", reinterpret_cast<PFN_xrVoidFunction*>(&table->SessionBeginDebugUtilsLabelRegionEXT));
    LoaderXrTermGetInstanceProcAddr(instance, "xrSessionEndDebugUtilsLabelRegionEXT", reinterpret_cast<PFN_xrVoidFunction*>(&table->SessionEndDebugUtilsLabelRegionEXT));
    LoaderXrTermGetInstanceProcAddr(instance, "xrSessionInsertDebugUtilsLabelEXT", reinterpret_cast<PFN_xrVoidFunction*>(&table->SessionInsertDebugUtilsLabelEXT));

    // ---- XR_MSFT_spatial_anchor extension commands
    LoaderXrTermGetInstanceProcAddr(instance, "xrCreateSpatialAnchorMSFT", reinterpret_cast<PFN_xrVoidFunction*>(&table->CreateSpatialAnchorMSFT));
    LoaderXrTermGetInstanceProcAddr(instance, "xrCreateSpatialAnchorSpaceMSFT", reinterpret_cast<PFN_xrVoidFunction*>(&table->CreateSpatialAnchorSpaceMSFT));
    LoaderXrTermGetInstanceProcAddr(instance, "xrDestroySpatialAnchorMSFT", reinterpret_cast<PFN_xrVoidFunction*>(&table->DestroySpatialAnchorMSFT));
}
