#!/usr/bin/env python3
# Copyright (c) 2019 The Khronos Group Inc.

from itertools import product

from shared import PLATFORMS, TRUE_FALSE, VS_VERSIONS, make_win_artifact_name

if __name__ == "__main__":

    for vsver, platform, uwp in product(VS_VERSIONS.keys(), PLATFORMS, TRUE_FALSE):
        print(make_win_artifact_name(vsver, platform, uwp))
