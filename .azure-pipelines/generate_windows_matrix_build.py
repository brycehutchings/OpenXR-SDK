#!/usr/bin/env python3
# Copyright (c) 2019 The Khronos Group Inc.

from itertools import product

from shared import (PLATFORMS, TRUE_FALSE, VS_VERSIONS, make_win_artifact_name,
                    output_json)

if __name__ == "__main__":

    configs = {}
    for vsver, platform, debug, dynamic, uwp in product(VS_VERSIONS.keys(), PLATFORMS, (False,), TRUE_FALSE, TRUE_FALSE):
        label = [str(vsver)]
        config = []
        generator = VS_VERSIONS[vsver]
        config.append('-A ' + platform)
        label.append(platform)
        if dynamic:
            label.append('dynamic')
            config.append('-DDYNAMIC_LOADER=ON')
        else:
            label.append('static')
            config.append('-DDYNAMIC_LOADER=OFF')
        if debug:
            label.append('debug')
        if uwp:
            label.append('_uwp')
            config.append('-DCMAKE_SYSTEM_NAME=WindowsStore -DCMAKE_SYSTEM_VERSION=10.0')
        name = '_'.join(label)
        configs[name] = {
            'generator': generator,
            'buildType': 'Debug' if debug else 'RelWithDebInfo',
            'cmakeArgs': ' '.join(config),
            'dynamic': dynamic
        }
        if not debug:
            configs[name]['artifactName'] = make_win_artifact_name(
                vsver, dynamic, platform, uwp)

    output_json(configs)
