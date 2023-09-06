#include "SparkEV.h"
real_T rtP__CtrlVcuEvBattChrgPwrMax2f2EvVCU_sldd_ = - 211000.0 ; real_T
rtP__CtrlVcuEvBattDischrgPwrMax2f2EvVCU_sldd_ = 190000.0 ; real_T
rtP__CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_ [ 11 ] = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 0.7 , 0.35 , 0.0 } ; real_T
rtP__CtrlVcuEvDischrgLmtBpt2f2EvVCU_sldd_ [ 11 ] = { 0.0 , 0.35 , 0.7 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 } ; real_T
rtP__CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_ [ 2 ] = { 0.0 , 1.0 } ; real_T
rtP__CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_ [ 2 ] = { 5.0 , 9.0 } ; real_T
rtP__CtrlVcuEvSocBpt2f2EvVCU_sldd_ [ 11 ] = { 0.0 , 10.0 , 20.0 , 30.0 , 40.0
, 50.0 , 60.0 , 70.0 , 80.0 , 90.0 , 100.0 } ; real_T
rtP__DriverAeroRes2f2Driver_sldd_ = 0.5 ; real_T
rtP__DriverDrivelineRes2f2Driver_sldd_ = 2.5 ; real_T
rtP__DriverInitialGear2f2Driver_sldd_ = 0.0 ; real_T
rtP__DriverPreviewDist2f2Driver_sldd_ = 4.0 ; real_T
rtP__DriverRollRes2f2Driver_sldd_ = 200.0 ; real_T
rtP__DriverShiftTime2f2Driver_sldd_ = 0.1 ; real_T
rtP__DriverTimeConst2f2Driver_sldd_ = 0.3 ; real_T
rtP__DriverTractiveForce2f2Driver_sldd_ = 15000.0 ; real_T
rtP__EnvAbsPrs2f2Environment_sldd_ = 101325.0 ; real_T
rtP__EnvAirTemp2f2Environment_sldd_ = 298.0 ; real_T
rtP__EnvGrvty2f2Environment_sldd_ = 9.81 ; real_T
rtP__EnvNomFrictionScaling2f2Environment_sldd_ = 1.0 ; real_T
rtP__EnvNominalGrade2f2Environment_sldd_ = 0.0 ; real_T
rtP__EnvWindVelX2f2Environment_sldd_ = 0.0 ; real_T
rtP__EnvWindVelY2f2Environment_sldd_ = 0.0 ; real_T
rtP__EnvWindVelZ2f2Environment_sldd_ = 0.0 ; real_T
rtP__PlntBattIntrnRes2f2BatteryDCDC_sldd_ [ 42 ] = { 0.008846 , 0.006389 ,
0.004364 , 0.002031 , 0.001443 , 0.0005603 , 0.001028 , 0.009319 , 0.006554 ,
0.004101 , 0.002563 , 0.001825 , 0.0007192 , 0.001338 , 0.009027 , 0.005553 ,
0.00406 , 0.002532 , 0.001795 , 0.0006887 , 0.001 , 0.00847 , 0.005525 ,
0.003452 , 0.00246 , 0.001778 , 0.0007557 , 0.001536 , 0.01032 , 0.006043 ,
0.003846 , 0.002716 , 0.001924 , 0.0007355 , 0.001546 , 0.01314 , 0.007805 ,
0.004517 , 0.003047 , 0.002234 , 0.001014 , 0.002789 } ; real_T
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ = 31.0 ; real_T
rtP__PlntBattNumCellSer2f2BatteryDCDC_sldd_ = 96.0 ; real_T
rtP__PlntBattSocBpt2f2BatteryDCDC_sldd_ [ 6 ] = { 0.0 , 0.2 , 0.4 , 0.6 , 0.8
, 1.0 } ; real_T rtP__PlntBattTempBpt2f2BatteryDCDC_sldd_ [ 7 ] = { 243.1 ,
253.1 , 263.1 , 273.1 , 283.1 , 298.1 , 313.1 } ; real_T
rtP__PlntBattTimeCnst2f2BatteryDCDC_sldd_ = 0.001 ; real_T
rtP__PlntBrkActrBoreFrnt2f2PassVeh_sldd_ = 0.05 ; real_T
rtP__PlntBrkActrBoreRear2f2PassVeh_sldd_ = 0.05 ; real_T
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ = 1.0 ; real_T
rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ = 0.35 ; real_T
rtP__PlntBrkKinFricCffRear2f2PassVeh_sldd_ = 0.35 ; real_T
rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ = 2.0 ; real_T
rtP__PlntBrkNumPadsRear2f2PassVeh_sldd_ = 2.0 ; real_T
rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ = 0.15 ; real_T
rtP__PlntBrkPadMeanRadiusRear2f2PassVeh_sldd_ = 0.15 ; real_T
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ = 8.0E+6 ; real_T
rtP__PlntBrkRearBias2f2PassVeh_sldd_ = 0.6 ; real_T
rtP__PlntBrkStcFricCffFrnt2f2PassVeh_sldd_ = 0.45 ; real_T
rtP__PlntBrkStcFricCffRear2f2PassVeh_sldd_ = 0.45 ; real_T
rtP__PlntBrkWc2f2PassVeh_sldd_ = 125.66370614359172 ; real_T
rtP__PlntDiffrntlAxl1Damp2f2Drivetrain_sldd_ = 0.001 ; real_T
rtP__PlntDiffrntlAxl1Inertia2f2Drivetrain_sldd_ = 0.1 ; real_T
rtP__PlntDiffrntlAxl1InitVel2f2Drivetrain_sldd_ = 0.0 ; real_T
rtP__PlntDiffrntlAxl2Damp2f2Drivetrain_sldd_ = 0.001 ; real_T
rtP__PlntDiffrntlAxl2Inertia2f2Drivetrain_sldd_ = 0.1 ; real_T
rtP__PlntDiffrntlAxl2InitVel2f2Drivetrain_sldd_ = 0.0 ; real_T
rtP__PlntDiffrntlCarrDamp2f2Drivetrain_sldd_ = 0.001 ; real_T
rtP__PlntDiffrntlCarrInertia2f2Drivetrain_sldd_ = 0.1 ; real_T
rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ = 0.98 ; real_T
rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ = 3.32 ; real_T
rtP__PlntDriveshftDamp2f2Drivetrain_sldd_ = 200.0 ; real_T
rtP__PlntDriveshftDampCutoffFreq2f2Drivetrain_sldd_ = 500.0 ; real_T
rtP__PlntDriveshftInitDeflect2f2Drivetrain_sldd_ = 0.0 ; real_T
rtP__PlntDriveshftInitVel2f2Drivetrain_sldd_ = 0.0 ; real_T
rtP__PlntDriveshftStiff2f2Drivetrain_sldd_ = 5000.0 ; real_T
rtP__PlntEM1Damp2f2Drivetrain_sldd_ = 0.001 ; real_T
rtP__PlntEM1Inertia2f2Drivetrain_sldd_ = 0.1 ; real_T
rtP__PlntEM1InitVel2f2Drivetrain_sldd_ = 0.0 ; real_T
rtP__PlntEM1TimeCnst2f2ElectricMachine1_sldd_ = 0.02 ; real_T
rtP__PlntVehAeroDragCff2f2PassVeh_sldd_ = 0.326 ; real_T
rtP__PlntVehAeroFrntArea2f2PassVeh_sldd_ = 2.22476 ; real_T
rtP__PlntVehAeroLiftCff2f2PassVeh_sldd_ = 0.1 ; real_T
rtP__PlntVehAeroPitchCff2f2PassVeh_sldd_ = 0.1 ; real_T
rtP__PlntVehCGHgtAxl2f2PassVeh_sldd_ = 0.3 ; real_T
rtP__PlntVehDstCGFrntAxl2f2PassVeh_sldd_ = 1.09 ; real_T
rtP__PlntVehDstCGRearAxl2f2PassVeh_sldd_ = 1.7 ; real_T
rtP__PlntVehFzFlt2f2PassVeh_sldd_ = 10.0 ; real_T
rtP__PlntVehInitLongVel2f2PassVeh_sldd_ = 0.0 ; real_T
rtP__PlntVehMass2f2PassVeh_sldd_ = 1512.0 ; real_T
rtP__PlntVehPitchMomentInertia2f2PassVeh_sldd_ = 1922.666666666667 ; real_T
rtP__PlntWhlDampCoeffFrnt2f2PassVeh_sldd_ = 0.001 ; real_T
rtP__PlntWhlDampCoeffRear2f2PassVeh_sldd_ = 0.001 ; real_T
rtP__PlntWhlInertiaFrnt2f2PassVeh_sldd_ = 0.8 ; real_T
rtP__PlntWhlInertiaRear2f2PassVeh_sldd_ = 0.8 ; real_T
rtP__PlntWhlInitAngVel2f2PassVeh_sldd_ = 0.0 ; real_T
rtP__PlntWhlLdRadius2f2PassVeh_sldd_ = 0.2598801 ; real_T
rtP__PlntWhlLnrVelForceComp2f2PassVeh_sldd_ = 0.0 ; real_T
rtP__PlntWhlMaxFz2f2PassVeh_sldd_ = 6570.0 ; real_T
rtP__PlntWhlMaxSlipRatio2f2PassVeh_sldd_ = 1.5 ; real_T
rtP__PlntWhlMinFz2f2PassVeh_sldd_ = 100.0 ; real_T
rtP__PlntWhlNrmlForceExp2f2PassVeh_sldd_ = 1.0 ; real_T
rtP__PlntWhlPrsFrnt2f2PassVeh_sldd_ = 220000.0 ; real_T
rtP__PlntWhlPrsRear2f2PassVeh_sldd_ = 220000.0 ; real_T
rtP__PlntWhlQuadVelForceComp2f2PassVeh_sldd_ = 0.0 ; real_T
rtP__PlntWhlRlxLngth2f2PassVeh_sldd_ = 0.15 ; real_T
rtP__PlntWhlTirPrsExp2f2PassVeh_sldd_ = 0.0 ; real_T
rtP__PlntWhlUnldRadius2f2PassVeh_sldd_ = 0.26 ; real_T
rtP__PlntWhlVelIndpntForceCff2f2PassVeh_sldd_ = 0.01 ; real_T
rtP__PlntWhlVelTolLowVel2f2PassVeh_sldd_ = 1.0 ; real_T
rtP__Spark_EffMap2f2SparkEM_sldd_ [ 483 ] = { 10.0 , 10.0 , 42.0 , 44.0 ,
45.0 , 46.0 , 47.0 , 48.0 , 49.0 , 50.0 , 51.0 , 52.0 , 53.0 , 54.0 , 55.0 ,
56.0 , 58.0 , 56.0 , 55.0 , 54.0 , 50.0 , 74.0 , 75.0 , 75.0 , 76.0 , 76.3 ,
76.7 , 78.0 , 78.0 , 78.0 , 78.0 , 78.0 , 77.0 , 77.0 , 77.0 , 76.9 , 76.9 ,
76.5 , 76.0 , 75.0 , 73.0 , 72.0 , 78.0 , 79.0 , 80.0 , 85.0 , 88.0 , 89.0 ,
89.5 , 90.0 , 91.0 , 91.0 , 91.0 , 91.5 , 91.5 , 91.8 , 91.7 , 91.6 , 91.0 ,
91.0 , 89.4 , 87.0 , 85.0 , 80.0 , 87.0 , 90.25 , 94.25 , 94.5 , 94.5 , 94.5
, 94.5 , 94.5 , 94.75 , 94.5 , 94.5 , 94.5 , 94.5 , 94.5 , 93.75 , 92.0 ,
91.0 , 89.8 , 89.0 , 84.0 , 80.0 , 88.0 , 90.25 , 94.75 , 95.3 , 95.5 , 95.75
, 95.75 , 95.6 , 96.0 , 96.0 , 96.0 , 96.0 , 95.75 , 95.75 , 95.5 , 95.0 ,
94.5 , 94.0 , 92.0 , 89.0 , 78.0 , 88.0 , 90.25 , 94.75 , 95.25 , 95.75 ,
96.0 , 96.2 , 96.25 , 96.4 , 96.5 , 96.5 , 96.5 , 96.5 , 96.25 , 95.8 , 95.7
, 95.1 , 94.75 , 94.5 , 94.0 , 74.0 , 88.0 , 90.25 , 94.25 , 95.25 , 95.5 ,
96.2 , 96.4 , 96.6 , 96.7 , 96.8 , 97.0 , 96.7 , 96.6 , 96.4 , 96.2 , 96.0 ,
95.6 , 95.3 , 94.8 , 94.5 , 70.0 , 87.0 , 90.25 , 94.5 , 94.75 , 95.25 , 96.0
, 96.25 , 96.5 , 96.6 , 96.8 , 97.0 , 96.75 , 96.65 , 96.5 , 96.25 , 96.0 ,
95.5 , 95.2 , 94.6 , 94.5 , 65.0 , 86.0 , 90.25 , 93.25 , 94.25 , 95.0 ,
95.75 , 96.1 , 96.3 , 96.55 , 96.75 , 97.0 , 96.75 , 96.5 , 96.4 , 96.0 ,
95.7 , 95.3 , 95.0 , 94.5 , 94.2 , 60.0 , 85.0 , 90.25 , 92.75 , 93.75 ,
94.75 , 95.5 , 95.9 , 96.25 , 96.5 , 96.6 , 96.75 , 96.5 , 96.3 , 96.18 ,
95.75 , 95.5 , 95.0 , 94.5 , 94.1 , 93.75 , 59.0 , 84.0 , 90.25 , 92.5 ,
93.25 , 94.25 , 95.25 , 95.75 , 96.0 , 96.25 , 96.5 , 96.5 , 96.25 , 96.1 ,
95.8 , 95.4 , 95.0 , 94.5 , 94.0 , 93.0 , 92.5 , 55.0 , 83.0 , 90.25 , 92.25
, 92.75 , 93.75 , 95.0 , 95.5 , 95.75 , 96.1 , 96.25 , 96.25 , 96.0 , 95.75 ,
95.5 , 95.0 , 94.5 , 93.5 , 92.25 , 91.75 , 91.5 , 54.0 , 82.0 , 89.0 , 92.0
, 92.25 , 93.5 , 94.7 , 95.2 , 95.5 , 95.8 , 96.12 , 96.0 , 95.75 , 95.4 ,
95.0 , 94.25 , 93.25 , 92.25 , 91.25 , 91.0 , 1.0 , 50.0 , 81.0 , 88.0 , 91.0
, 92.0 , 93.0 , 94.25 , 95.125 , 95.25 , 95.6 , 96.0 , 95.6 , 95.25 , 95.0 ,
94.25 , 93.0 , 91.5 , 91.0 , 1.0 , 1.0 , 1.0 , 45.0 , 80.5 , 87.0 , 90.5 ,
91.75 , 92.5 , 94.0 , 94.5 , 95.0 , 95.25 , 95.5 , 95.25 , 94.8 , 94.25 ,
93.0 , 91.5 , 91.0 , 1.0 , 1.0 , 1.0 , 1.0 , 43.0 , 80.0 , 86.0 , 89.0 ,
91.25 , 92.0 , 93.5 , 94.25 , 94.6 , 95.0 , 95.25 , 94.9 , 94.25 , 93.5 ,
91.75 , 91.25 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 42.0 , 79.0 , 85.0 , 88.0 ,
90.75 , 91.5 , 93.2 , 93.75 , 94.25 , 94.5 , 94.8 , 94.25 , 93.5 , 92.25 ,
91.5 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 41.0 , 78.0 , 84.0 , 87.0 , 90.0 ,
91.0 , 92.75 , 93.5 , 93.8 , 94.25 , 94.5 , 93.5 , 92.5 , 92.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 40.0 , 76.0 , 83.0 , 86.0 , 89.0 , 90.5 , 92.25
, 93.0 , 93.5 , 93.75 , 93.5 , 92.75 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 38.0 , 74.0 , 82.0 , 85.0 , 88.0 , 90.0 , 91.75 , 92.75 ,
93.0 , 93.0 , 92.25 , 92.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 36.0 , 71.0 , 81.0 , 84.0 , 87.5 , 89.75 , 91.25 , 92.25 , 92.5 , 92.8
, 91.5 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 35.0 ,
70.0 , 80.0 , 83.5 , 87.25 , 88.0 , 90.5 , 91.75 , 92.1 , 92.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 35.0 , 68.0 , 79.0 ,
83.0 , 87.0 , 87.5 , 90.0 , 91.0 , 90.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 } ; real_T
rtP__Spark_MaxTrq2f2SparkEM_sldd_ [ 29 ] = { 360.0 , 360.0 , 360.0 , 360.0 ,
360.0 , 357.728404316261 , 357.682405078656 , 356.960983702214 ,
356.300227986961 , 355.51814094933 , 355.472141711725 , 351.285699987009 ,
343.284814075766 , 334.455149023278 , 326.3978124807 , 307.963362459085 ,
289.161940741908 , 276.934802218937 , 265.691686602383 , 254.400604378871 ,
242.676261199004 , 229.462130210989 , 218.075437684875 , 207.776256300937 ,
192.222891861329 , 178.005775209291 , 168.578005975641 , 157.19263710183 ,
152.195121951219 } ; real_T rtP__Spark_MaxTrq_Spd2f2SparkEM_sldd_ [ 29 ] = {
1.0 , 300.0 , 700.0 , 1000.0 , 1300.0 , 1600.0 , 1900.0 , 2200.0 , 2500.0 ,
2800.0 , 3100.0 , 3400.0 , 3700.0 , 4000.0 , 4300.0 , 4600.0 , 4900.0 ,
5200.0 , 5500.0 , 5800.0 , 6100.0 , 6400.0 , 6700.0 , 7000.0 , 7400.0 ,
7800.0 , 8200.0 , 8600.0 , 8810.0 } ; real_T
rtP__Spark_Spd_BrkPts2f2SparkEM_sldd_ [ 21 ] = { 1.0 , 440.5 , 881.0 , 1321.5
, 1762.0 , 2202.5 , 2643.0 , 3083.5 , 3524.0 , 3964.5 , 4405.0 , 4845.5 ,
5286.0 , 5726.5 , 6167.0 , 6607.5 , 7048.0 , 7488.5 , 7929.0 , 8369.5 ,
8810.0 } ; real_T rtP__Spark_Trq_BrkPts2f2SparkEM_sldd_ [ 23 ] = { 1.0 , 6.0
, 12.0 , 18.0 , 36.0 , 54.0 , 72.0 , 90.0 , 108.0 , 126.0 , 144.0 , 162.0 ,
180.0 , 198.0 , 216.0 , 234.0 , 252.0 , 270.0 , 288.0 , 306.0 , 324.0 , 342.0
, 360.0 } ; real_T rtP__batt_cap_init2f2SparkBat_sldd_ = 80.0 ; real_T
rtP__soc_init2f2SparkBat_sldd_ = 0.8 ; kjmvupbl2i3 kjmvupbl2i ;
