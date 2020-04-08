# Copyright (c) 2019 The Khronos Group Inc.

import json
import sys

VS_VERSIONS = {
    2019: 'Visual Studio 16 2019',
    # 2017: 'Visual Studio 15 2017',
}

PLATFORMS = ('Win32', 'x64', 'ARM', 'ARM64')

TRUE_FALSE = (True, False)


def make_win_artifact_name(vsver, dynamic, platform, uwp):
    return 'loader_{}{}_msvs{}_{}'.format(
        platform,
        '_uwp' if uwp else '',
        vsver,
        'dynamic' if dynamic else 'static'
    )


def output_json(data):
    if len(sys.argv) == 2:
        print(
            "##vso[task.setVariable variable={};isOutput=true]{}".format(sys.argv[1], json.dumps(data)))
    else:
        print(json.dumps(data, indent=4))
