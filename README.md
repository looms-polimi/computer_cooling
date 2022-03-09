# computer_cooling
Modelling of cooling systems for CPUs, MPSoCs and the like.

# HOW TO SIMULATE WITH 3D-ICE
## Install dependencies
sudo apt install build-essential bison flex libblas-dev csh
sudo apt install libpugixml-dev
sudo apt install python3-dev
sudo apt install pkg-config

## Download 3D-ICE
git clone https://github.com/esl-epfl/3d-ice.git
cd 3d-ice
./insall-superlu.sh
cd -

## Download this library (Computer Cooling)
git clone https://github.com/looms-polimi/computer_cooling.git

## Copy templates to chosen location
cp -r computer_cooling/Modelica/Templates/3DICE_Templates MyHeatSink

## Start simulation with 3D-ICE
cd MyHeatSink
./simulate.sh

