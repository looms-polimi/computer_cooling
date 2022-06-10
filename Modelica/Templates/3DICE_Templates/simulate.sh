#!/bin/bash
cd ../3d-ice
make plugin || exit 1
cd -
make
../3d-ice/bin/3D-ICE-Emulator example.stk

# Workaround: 3D-ICE doesn't yet put the xaxis.txt and yaxis.txt files in the same path as the map files
mv xaxis.txt results
mv yaxis.txt results

# If the Modelica model has a Recorder object that produces data.csv, copy that too
mv data.csv results
