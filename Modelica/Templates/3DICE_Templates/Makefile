# find ../computer_cooling/Modelica/ -name '*.mo'

SRC = \
../3d-ice/heatsink_plugin/common/libraries/ThermalBlocks.mo \
../3d-ice/heatsink_plugin/common/HeatsinkBlocks.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/package.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_airCircuit_01.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_CentrifugalPump.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_dp_header_liq.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_dp_liq.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_dp_moistAir.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_ExpansionVessel.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_fan_Axial.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_pressuriser.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_streamLiquid.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_TJunction.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_tube1D.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_tube2D.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_ValveModulating_TwoPort.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_VentedTank.mo \
../computer_cooling/Modelica/ComputerCooling/DevelTest/test_VolumetricPump.mo \
../computer_cooling/Modelica/ComputerCooling/Functions/Clamp.mo \
../computer_cooling/Modelica/ComputerCooling/Functions/package.mo \
../computer_cooling/Modelica/ComputerCooling/Functions/sqrtReg.mo \
../computer_cooling/Modelica/ComputerCooling/Functions/sqrtReg_der.mo \
../computer_cooling/Modelica/ComputerCooling/HeatSources/HeatSource_1D.mo \
../computer_cooling/Modelica/ComputerCooling/HeatSources/HeatSource_Power.mo \
../computer_cooling/Modelica/ComputerCooling/HeatSources/HeatSource_Temperature.mo \
../computer_cooling/Modelica/ComputerCooling/HeatSources/package.mo \
../computer_cooling/Modelica/ComputerCooling/HeatTransfer/BaseClasses/base_HeatTransfer_pwh.mo \
../computer_cooling/Modelica/ComputerCooling/HeatTransfer/BaseClasses/package.mo \
../computer_cooling/Modelica/ComputerCooling/HeatTransfer/HeatTransferModels/DittusBoelter.mo \
../computer_cooling/Modelica/ComputerCooling/HeatTransfer/HeatTransferModels/package.mo \
../computer_cooling/Modelica/ComputerCooling/HeatTransfer/package.mo \
../computer_cooling/Modelica/ComputerCooling/HeatTransfer/StreamSeparators/package.mo \
../computer_cooling/Modelica/ComputerCooling/HeatTransfer/StreamSeparators/TubeWall_FiniteVolume_1L.mo \
../computer_cooling/Modelica/ComputerCooling/HeatTransfer/StreamSeparators/TubeWall_FiniteVolume_MultiL.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/BaseClassesIcons.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/BoundaryConditionsIcon.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/FansIcon.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/HeatSourceIcon.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/HeatTransferModelIcon.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/JunctionsIcon.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/LFlowControlIcon.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/LiquidConnectorIcon.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/MoistAirComponentsIcon.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/MoistAirConnectorIcon.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/OnePhaseLiquidComponentsIcon.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/package.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/PressureDropsIcon.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/PumpsIcon.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/SolidIcon.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/StorageIcon.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/TestModel.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/TutorialFunction.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/TutorialModel.mo \
../computer_cooling/Modelica/ComputerCooling/Icons/TutorialModelComponent.mo \
../computer_cooling/Modelica/ComputerCooling/IdealGasComponents/IdealgasNode_pT.mo \
../computer_cooling/Modelica/ComputerCooling/IdealGasComponents/IdealgasNode_wT.mo \
../computer_cooling/Modelica/ComputerCooling/IdealGasComponents/IdealGasPdropQ.mo \
../computer_cooling/Modelica/ComputerCooling/IdealGasComponents/IdealGasVolume.mo \
../computer_cooling/Modelica/ComputerCooling/IdealGasComponents/package.mo \
../computer_cooling/Modelica/ComputerCooling/Interfaces/hpConnector.mo \
../computer_cooling/Modelica/ComputerCooling/Interfaces/package.mo \
../computer_cooling/Modelica/ComputerCooling/Interfaces/pwh.mo \
../computer_cooling/Modelica/ComputerCooling/Interfaces/pwhx.mo \
../computer_cooling/Modelica/ComputerCooling/Interfaces/vHP.mo \
../computer_cooling/Modelica/ComputerCooling/Media/BaseClasses/base_SubCooledWater.mo \
../computer_cooling/Modelica/ComputerCooling/Media/BaseClasses/package.mo \
../computer_cooling/Modelica/ComputerCooling/Media/Constants/package.mo \
../computer_cooling/Modelica/ComputerCooling/Media/MoistAir.mo \
../computer_cooling/Modelica/ComputerCooling/Media/package.mo \
../computer_cooling/Modelica/ComputerCooling/Media/SubCooledWater_Bulk_VolExp.mo \
../computer_cooling/Modelica/ComputerCooling/Media/SubCooledWater_Incompressible.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/BaseClasses/OnePort_pwhx.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/BaseClasses/package.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/BaseClasses/TwoPort_pwhx.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/BaseClasses/TwoPort_pwhx_OnePort_HP.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/BoundaryConditions/BoundaryFixed_pTphi.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/BoundaryConditions/BoundaryFixed_qTphi.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/BoundaryConditions/BoundaryFixed_wTphi.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/BoundaryConditions/BoundaryPrescribed_pTphi.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/BoundaryConditions/BoundaryPrescribed_qTphi.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/BoundaryConditions/BoundaryPrescribed_wTphi.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/BoundaryConditions/package.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/FlowControl/Fans/Axial.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/FlowControl/Fans/package.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/FlowControl/package.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/FlowControl/PressureDrops/DpLinear_NominalPoint.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/FlowControl/PressureDrops/DpQuadratic_NominalPoint.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/FlowControl/PressureDrops/package.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/Functions/package.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/package.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/Transfer/package.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/Volumes/package.mo \
../computer_cooling/Modelica/ComputerCooling/MoistAirComponents/Volumes/Tank.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/BaseClasses/OnePort_pwh.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/BaseClasses/package.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/BaseClasses/TwoPorts_pwh.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/BaseClasses/TwoPorts_pwh_OnePort_HP.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/BoundaryConditions/BoundaryFixed_pT.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/BoundaryConditions/BoundaryFixed_wT.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/BoundaryConditions/BoundaryPrescribed_pT.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/BoundaryConditions/BoundaryPrescribed_wT.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/BoundaryConditions/package.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/FlowControl/package.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/FlowControl/PressureDrops/DpLinear_NominalPoint.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/FlowControl/PressureDrops/DpQuadratic_NominalPoint.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/FlowControl/PressureDrops/package.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/FlowControl/Pressurisers/ExpansionVessel.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/FlowControl/Pressurisers/package.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/FlowControl/Pressurisers/PressuriserIdeal.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/FlowControl/Pumps/CentrifugalPump.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/FlowControl/Pumps/package.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/FlowControl/Pumps/VolumetricPump.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/FlowControl/Valves/package.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/FlowControl/Valves/ValveModulating_TwoPort.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/FlowControl/Valves/ValveOnOff_TwoPort.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/Functions/package.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/package.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/Storage/Header.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/Storage/package.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/Storage/VentedTank.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/Transfer/Ducts/LiquidStream_FiniteVolume.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/Transfer/Ducts/package.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/Transfer/Ducts/Tube_1D.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/Transfer/Ducts/Tube_2D.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/Transfer/Junctions/JunctionT.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/Transfer/Junctions/package.mo \
../computer_cooling/Modelica/ComputerCooling/OnePhaseLiquidComponents/Transfer/package.mo \
../computer_cooling/Modelica/ComputerCooling/package.mo \
../computer_cooling/Modelica/ComputerCooling/SolidMaterials/Aluminium.mo \
../computer_cooling/Modelica/ComputerCooling/SolidMaterials/BaseClasses/Base_solid_constant_props.mo \
../computer_cooling/Modelica/ComputerCooling/SolidMaterials/BaseClasses/package.mo \
../computer_cooling/Modelica/ComputerCooling/SolidMaterials/Copper.mo \
../computer_cooling/Modelica/ComputerCooling/SolidMaterials/package.mo \
../computer_cooling/Modelica/ComputerCooling/SolidMaterials/Steel.mo \
../computer_cooling/Modelica/ComputerCooling/ThermalMachines/package.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/package.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_introductory_example/Defining_all_from_scratch/Capacitor.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_introductory_example/Defining_all_from_scratch/Circuit_01.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_introductory_example/Defining_all_from_scratch/Conductor.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_introductory_example/Defining_all_from_scratch/Ground.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_introductory_example/Defining_all_from_scratch/package.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_introductory_example/Defining_all_from_scratch/pin.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_introductory_example/Defining_all_from_scratch/StepVoltage.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_introductory_example/Defining_all_from_scratch/TwoPin.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_introductory_example/package.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_introductory_example/Using_MSL_components/Circuit_01_MSL.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_introductory_example/Using_MSL_components/package.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_multiphysics_examples/Computational_thermal_MSL.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_multiphysics_examples/Data_computational_thermal_MSL.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_multiphysics_examples/Electrical_thermal_MSL.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_multiphysics_examples/package.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/EBM_multiphysics_examples/Read_trace.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T00_Introduction_to_EBM/package.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T01_Declarative_vs_imperative/D2I_example_1/D2I_Example_1_declarative.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T01_Declarative_vs_imperative/D2I_example_1/D2I_Example_1_imperative.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T01_Declarative_vs_imperative/D2I_example_1/LumpedRod.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T01_Declarative_vs_imperative/D2I_example_1/LumpedRodMatrices_CT.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T01_Declarative_vs_imperative/D2I_example_1/package.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T01_Declarative_vs_imperative/D2I_example_2/Example.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T01_Declarative_vs_imperative/D2I_example_2/package.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T01_Declarative_vs_imperative/D2I_example_2/PrescribedpaTa.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T01_Declarative_vs_imperative/D2I_example_2/PrescribedwaTa.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T01_Declarative_vs_imperative/D2I_example_2/ResistorInDuct.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T01_Declarative_vs_imperative/package.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T02_Modelling_principles/Mass_energy_storage_gas_filled.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T02_Modelling_principles/Mass_energy_storage_liquid_open.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T02_Modelling_principles/package.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T03_Library_structuring/package.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T03_Library_structuring/Storage_transfer_gas/Gas_example_001.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T03_Library_structuring/Storage_transfer_gas/Gas_example_002.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T03_Library_structuring/Storage_transfer_gas/Gas_example_003.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T03_Library_structuring/Storage_transfer_gas/package.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T04_Application_examples/AE001_simple.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T04_Application_examples/package.mo \
../computer_cooling/Modelica/ComputerCooling/Tutorial/T05_3DICE_Integration/package.mo \
../computer_cooling/Modelica/ComputerCooling/Utilities/package.mo \
../computer_cooling/Modelica/Templates/3DICE_Templates/T05_3DICE_Integration.mo \
T05_3DICE_Integration.mo

OBJ = T05_3DICE_Integration.T05_Interface3DICE
DUMMY = .dummy

# OpenModelica produces temporary files with a name where . is replaced with _
DOT = .
UNDERSCORE = _
OBJ_UNDERSCORE = $(subst $(DOT),$(UNDERSCORE),$(OBJ))

all: $(DUMMY)

# Making an FMI from OpenModelica requires to use its own
# build system scripting language
# This rule makes all OBJs in one go, so we cant't say $(OBJ) : $(SRC)
# or make will repeat the rule multiple times. That's why we use a dummy
$(DUMMY): $(SRC)
	omc buildfmi.mos
	rm -rf $(OBJ)
	$(foreach O,$(OBJ),unzip -q $(O).fmu -d $(O);)
	$(foreach O,$(OBJ),rm -f $(O).fmu;)
	$(foreach O,$(OBJ_UNDERSCORE),rm -f $(O)_FMU.* $(O).log;)
	touch $(DUMMY)

clean:
	rm -rf $(OBJ) $(DUMMY)
