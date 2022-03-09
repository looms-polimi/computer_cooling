#!/bin/bash
cd ../3d-ice
make plugin || exit 1
cd -
make
../3d-ice/bin/3D-ICE-Emulator example.stk
