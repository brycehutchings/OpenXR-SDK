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

#pragma once

#include "extra_algorithms.h"

#include <openxr/openxr.h>

#include <array>
#include <cmath>
#include <memory>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>

class ApiLayerInterface;
class RuntimeInterface;
struct XrGeneratedDispatchTable;

// Manages things related to the lifetime of an XrInstance.
class LoaderInstance {
   public:
    // Factory method
    static XrResult CreateInstance(std::vector<std::unique_ptr<ApiLayerInterface>>&& layer_interfaces,
                                   const XrInstanceCreateInfo* info, std::unique_ptr<LoaderInstance>& loader_instance);

    virtual ~LoaderInstance();

    // API version of this instance. May be less than or equal to RuntimeInterface::ApiVersion.
    XrVersion ApiVersion() { return _api_version; }
    XrInstance Instance() { return _runtime_instance; }

    PFN_xrGetInstanceProcAddr GetInstanceProcAddrFuncPointer() { return _get_instance_proc_addr; }
    const XrGeneratedDispatchTable* DispatchTable() { return _dispatch_table.get(); }
    std::vector<std::unique_ptr<ApiLayerInterface>>& LayerInterfaces() { return _api_layer_interfaces; }
    bool ExtensionIsEnabled(const std::string& extension);
    static const std::array<XrExtensionProperties, 1>& LoaderSpecificExtensions();
    XrDebugUtilsMessengerEXT DefaultDebugUtilsMessenger() { return _messenger; }
    void SetDefaultDebugUtilsMessenger(XrDebugUtilsMessengerEXT messenger) { _messenger = messenger; }

   private:
    LoaderInstance(std::vector<std::unique_ptr<ApiLayerInterface>>&& api_layer_interfaces);
    XrResult Initialize(XrInstance instance);

    void AddEnabledExtension(const std::string& extension) { return _enabled_extensions.push_back(extension); }

    XrVersion _api_version;
    std::vector<std::unique_ptr<ApiLayerInterface>> _api_layer_interfaces;
    XrInstance _runtime_instance;
    PFN_xrGetInstanceProcAddr _get_instance_proc_addr;
    std::unique_ptr<XrGeneratedDispatchTable> _dispatch_table;
    std::vector<std::string> _enabled_extensions;
    // Internal debug messenger created during xrCreateInstance
    XrDebugUtilsMessengerEXT _messenger;
};
