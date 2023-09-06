#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SparkEV_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 20
#endif
#ifndef SS_INT64
#define SS_INT64 21
#endif
#else
#include "builtin_typeid_types.h"
#include "SparkEV.h"
#include "SparkEV_capi.h"
#include "SparkEV_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"SparkEV/Environment/Temp_degK" ) , TARGET_STRING ( "Temp" ) , 0 , 0 , 0 , 0
, 0 } , { 1 , 0 , TARGET_STRING ( "SparkEV/Visualization/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
"SparkEV/Visualization/Integrator" ) , TARGET_STRING ( "miles" ) , 0 , 0 , 0
, 0 , 1 } , { 3 , 0 , TARGET_STRING (
"SparkEV/Visualization/Rate Transition1" ) , TARGET_STRING ( "Battery SOC" )
, 0 , 0 , 0 , 0 , 2 } , { 4 , 0 , TARGET_STRING (
"SparkEV/Visualization/Rate Transition10" ) , TARGET_STRING (
"Battery Current (A)" ) , 0 , 0 , 0 , 0 , 2 } , { 5 , 0 , TARGET_STRING (
"SparkEV/Visualization/Rate Transition2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 6 , 0 , TARGET_STRING (
"SparkEV/Visualization/Rate Transition4" ) , TARGET_STRING (
"Trace Velocity, Target, Actual (mph)" ) , 0 , 0 , 1 , 0 , 2 } , { 7 , 0 ,
TARGET_STRING ( "SparkEV/Visualization/Rate Transition5" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 2 } , { 8 , 0 , TARGET_STRING (
"SparkEV/Visualization/Rate Transition7" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 9 , 0 , TARGET_STRING (
"SparkEV/Visualization/Rate Transition8" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 10 , 0 , TARGET_STRING (
"SparkEV/Visualization/Unit Conversion2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 3 } , { 11 , 0 , TARGET_STRING (
"SparkEV/Visualization/Unit Conversion4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 3 } , { 12 , 0 , TARGET_STRING (
"SparkEV/Visualization/Unit Conversion5" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 1 } , { 13 , 0 , TARGET_STRING (
"SparkEV/Visualization/Unit Conversion6" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 1 } , { 14 , 0 , TARGET_STRING (
"SparkEV/Controllers/Brake Control Unit (BCU)/Open Loop Braking" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 15 , 0 , TARGET_STRING (
"SparkEV/Controllers/VCU Input/Rate Transition" ) , TARGET_STRING (
"AccelFdbk" ) , 0 , 0 , 0 , 0 , 4 } , { 16 , 0 , TARGET_STRING (
"SparkEV/Controllers/VCU Input/Rate Transition1" ) , TARGET_STRING (
"Vehicle" ) , 0 , 0 , 0 , 0 , 4 } , { 17 , 0 , TARGET_STRING (
"SparkEV/Controllers/VCU Input/Rate Transition3" ) , TARGET_STRING (
"BattSoc" ) , 0 , 0 , 0 , 0 , 4 } , { 18 , 0 , TARGET_STRING (
"SparkEV/Controllers/VCU Input/Rate Transition5" ) , TARGET_STRING ( "EMSpd"
) , 0 , 0 , 0 , 0 , 4 } , { 19 , 0 , TARGET_STRING (
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 1EM" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 4 } , { 20 , 0 , TARGET_STRING (
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 1EM" ) , TARGET_STRING (
"" ) , 1 , 0 , 0 , 0 , 4 } , { 21 , 0 , TARGET_STRING (
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 1EM" ) , TARGET_STRING (
"" ) , 2 , 0 , 2 , 0 , 4 } , { 22 , 0 , TARGET_STRING (
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 1EM" ) , TARGET_STRING (
"" ) , 3 , 0 , 0 , 0 , 4 } , { 23 , 0 , TARGET_STRING (
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 1EM" ) , TARGET_STRING (
"" ) , 4 , 0 , 0 , 0 , 4 } , { 24 , 0 , TARGET_STRING (
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 1EM" ) , TARGET_STRING (
"" ) , 5 , 0 , 0 , 0 , 4 } , { 25 , 0 , TARGET_STRING (
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 1EM" ) , TARGET_STRING (
"" ) , 6 , 0 , 0 , 0 , 4 } , { 26 , 0 , TARGET_STRING (
"SparkEV/Environment/Estimated Grade/Subtract" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 3 } , { 27 , 0 , TARGET_STRING (
"SparkEV/Vehicle/Chassis Input/Vector Concatenate" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"SparkEV/Vehicle/Chassis Input/First Order Hold1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 1 } , { 29 , 0 , TARGET_STRING (
"SparkEV/Vehicle/Electrical System Input/First Order Hold" ) , TARGET_STRING
( "EMTrqCmd" ) , 0 , 0 , 0 , 0 , 1 } , { 30 , 0 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/m to km" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 31 , 0 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/m to mi" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 32 , 0 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 33 , 0 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Unit Conversion5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 34 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/m to 100Km" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 35 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/m^3 per gal" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 36 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/m^3 to US Gal" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 37 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Integrator" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 38 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Integrator1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 39 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Divide" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 40 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Divide1" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 41 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Divide2" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 42 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Product" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 43 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/US MPG Calc" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 44 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Rate Transition3" ) ,
TARGET_STRING ( "US MPG" ) , 0 , 0 , 0 , 0 , 2 } , { 45 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Add" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 1 } , { 46 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Sqrt" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 47 , 0 , TARGET_STRING (
"SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Unit Conversion1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 48 , 0 , TARGET_STRING (
"SparkEV/Visualization/Scope Type/None/Unit Conversion4" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 49 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Hill Hold/Dead Zone"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 50 , 0 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Pedal, Cluster, Cabin/Dead Zone2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 51 , 0 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Pedal, Cluster, Cabin/Dead Zone3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 52 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Hill Hold/Compare To Constant1/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Hill Hold/Compare To Constant2/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 54 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Sum7"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 55 , 0 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Signal Routing/UnitConversion"
) , TARGET_STRING ( "Reference Speed" ) , 0 , 0 , 0 , 0 , 1 } , { 56 , 0 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Vector Concatenate1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 57 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Product2"
) , TARGET_STRING ( "BattPwr" ) , 0 , 0 , 0 , 0 , 1 } , { 58 , 0 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Motor Coupling Dynamics"
) , TARGET_STRING ( "EMTrq" ) , 0 , 0 , 0 , 0 , 1 } , { 59 , 0 ,
TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Engine/No Engine/Product2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 60 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Pedal, Cluster, Cabin/Brake Pedal/Dead Zone1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 61 , 0 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/Digital Clock"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 5 } , { 62 , 0 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 63 , 0 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 64 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Brake System/BrakingHydraulics/Front Bias"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Brake System/BrakingHydraulics/Rear Bias"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 66 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Brake System/BrakingHydraulics/Dead Zone"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 67 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Brake System/BrakingHydraulics/Gain4"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 68 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Brake System/BrakingHydraulics/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 69 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Add"
) , TARGET_STRING ( "Fx" ) , 0 , 0 , 0 , 0 , 1 } , { 70 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Add1"
) , TARGET_STRING ( "Fx" ) , 0 , 0 , 0 , 0 , 1 } , { 71 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 73 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 74 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 75 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 76 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Add1"
) , TARGET_STRING ( "u_o(t)" ) , 0 , 0 , 0 , 0 , 1 } , { 77 , 0 ,
TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Add2"
) , TARGET_STRING ( "y(t+T*)" ) , 0 , 0 , 0 , 0 , 1 } , { 78 , 0 ,
TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Add4"
) , TARGET_STRING ( "e(t+T*)" ) , 0 , 0 , 0 , 0 , 1 } , { 79 , 0 ,
TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 80 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 81 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 4 } , { 82 , 14 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Shift Controller"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 83 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Shift Controller/GearSelect.is_GearSelect"
) , TARGET_STRING ( "is_GearSelect" ) , 0 , 2 , 0 , 0 , 0 } , { 84 , 0 ,
TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Shift Controller/is_active_c6_autolibsharedcommon"
) , TARGET_STRING ( "is_active_c6_autolibsharedcommon" ) , 0 , 3 , 0 , 0 , 0
} , { 85 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Shift Controller/GearSelect.is_active_GearSelect"
) , TARGET_STRING ( "is_active_GearSelect" ) , 0 , 3 , 0 , 0 , 0 } , { 86 , 0
, TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Brake System/BrakingHydraulics/Valve/Integrator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 87 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Brake System/BrakingHydraulics/Valve/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 88 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Brake System/BrakingHydraulics/Valve/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 89 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 90 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Cont LPF/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 91 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Cont LPF/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 92 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Cont LPF1/Integrator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 93 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Cont LPF1/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 94 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Cont LPF1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 95 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Rear Axle Compliances/No Axle Compliances/Constant1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 96 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Rear Axle Compliances/No Axle Compliances/Constant3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 97 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/SOC Ratio to %"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 98 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 99 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 100 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 101 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 102 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 103 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Logical Operator1"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 104 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Logical Operator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 105 , 19 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Longitudinal Basic Magic Tire/Simple Magic Tire"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 106 , 19 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Longitudinal Basic Magic Tire/Simple Magic Tire"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 107 , 19 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Longitudinal Basic Magic Tire/Simple Magic Tire"
) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 1 } , { 108 , 19 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Longitudinal Basic Magic Tire/Simple Magic Tire"
) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 1 } , { 109 , 26 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 110 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 111 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch"
) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 1 } , { 112 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Sign convention"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 113 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 114 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 115 , 29 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Longitudinal Basic Magic Tire/Simple Magic Tire"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 116 , 29 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Longitudinal Basic Magic Tire/Simple Magic Tire"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 117 , 29 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Longitudinal Basic Magic Tire/Simple Magic Tire"
) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 1 } , { 118 , 29 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Longitudinal Basic Magic Tire/Simple Magic Tire"
) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 1 } , { 119 , 36 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 120 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 121 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch"
) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 1 } , { 122 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Sign convention"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 123 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 124 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 125 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/Fx/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 126 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/omega/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 127 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/domega_o"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 128 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 129 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 130 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 131 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/Subtract"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 132 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/Subtract1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 133 , 1 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 134 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 135 , 4 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 136 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 137 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 138 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Vector Concatenate1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 139 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Vector Concatenate10"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 140 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Vector Concatenate12"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 141 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Vector Concatenate2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 142 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Vector Concatenate3"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 143 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Vector Concatenate4"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 144 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Vector Concatenate5"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 145 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Vector Concatenate6"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 146 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Vector Concatenate7"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 147 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Vector Concatenate8"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 148 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Vector Concatenate9"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 149 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 150 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 151 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant10"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 152 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant11"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 153 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 154 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 155 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 156 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 157 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant6"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 158 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant7"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 159 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant8"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 160 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant9"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 161 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 162 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Unit Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 163 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 164 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 165 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 1 } , { 166 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 1 } , { 167 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/is_c8_autolibshared"
) , TARGET_STRING ( "is_c8_autolibshared" ) , 0 , 2 , 0 , 0 , 1 } , { 168 , 0
, TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/is_active_c8_autolibshared"
) , TARGET_STRING ( "is_active_c8_autolibshared" ) , 0 , 3 , 0 , 0 , 1 } , {
169 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Friction Model/Ratio of static to kinetic"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 170 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Friction Model/Ratio of static to kinetic1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 171 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 172 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 173 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 174 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 175 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 176 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 177 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 178 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 1 } , { 179 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 1 } , { 180 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/is_c8_autolibshared"
) , TARGET_STRING ( "is_c8_autolibshared" ) , 0 , 2 , 0 , 0 , 1 } , { 181 , 0
, TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/is_active_c8_autolibshared"
) , TARGET_STRING ( "is_active_c8_autolibshared" ) , 0 , 3 , 0 , 0 , 1 } , {
182 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Friction Model/Ratio of static to kinetic"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 183 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Friction Model/Ratio of static to kinetic1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 184 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 185 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 186 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 187 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 188 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 189 , 39 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Open Differential"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 190 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 191 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 192 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/domega_o"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 193 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 194 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 195 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 196 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/Subtract"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 197 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/Subtract1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 198 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/domega_o"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 199 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 200 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 201 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 202 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/Subtract"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 203 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/Subtract1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 204 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 205 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/Cont LPF IC Dyn/Memory"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 206 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/Cont LPF IC Dyn/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 207 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/Cont LPF IC Dyn/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 208 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/Cont LPF IC Dyn/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 209 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 210 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Integrator"
) , TARGET_STRING ( "Spd" ) , 0 , 0 , 0 , 0 , 1 } , { 211 , 0 , TARGET_STRING
(
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 212 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Subtract"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 213 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Output Filter/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 214 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Output Filter/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 215 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Output Filter/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 216 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Output Filter/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 217 , 1 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 218 , 4 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 219 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Matrix Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 220 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Position"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 221 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Theta"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 222 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/U,w"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 223 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/q"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 224 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 225 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 226 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 227 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 228 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 229 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/.5.*A.*Pabs.//R.//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 230 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/4"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 231 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Crm"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 232 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Cs"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 233 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Cym"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 234 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 235 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 236 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 237 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 238 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 239 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 240 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 241 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 242 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Sum of Elements"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 243 , 18 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 1 } , { 244 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 1 } , { 245 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Vector Concatenate1"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 1 } , { 246 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Vector Concatenate2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 247 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Vector Concatenate3"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 248 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Vector Concatenate4"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 3 } , { 249 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 250 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 251 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Selector"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 1 } , { 252 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Selector1"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 1 } , { 253 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Selector2"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 1 } , { 254 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Selector3"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 1 } , { 255 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 256 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Unary Minus1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 257 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Fx/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 258 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Fx/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 259 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Fz/Add5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 260 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/My/a"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 261 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/My/b"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 262 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/My/h"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 263 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/My/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 264 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/My/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 265 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/My/Add3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 266 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Suspension/Vector Concatenate2"
) , TARGET_STRING ( "Fsb" ) , 0 , 0 , 1 , 0 , 1 } , { 267 , 0 , TARGET_STRING
(
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Suspension/Vector Concatenate4"
) , TARGET_STRING ( "Fsk" ) , 0 , 0 , 1 , 0 , 1 } , { 268 , 0 , TARGET_STRING
(
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Suspension/[NF,NR]"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 269 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Suspension/Damping - Front"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 270 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Suspension/Ramping - Rear"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 271 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Suspension/Stiffness - Front"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 272 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Suspension/Stiffness - Rear"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 273 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Suspension/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 274 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Suspension/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 275 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Suspension/Add3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 276 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 277 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 278 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 1 } , { 279 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 1 } , { 280 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 281 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 282 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 1 } , { 283 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 1 } , { 284 , 22 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 6 } , { 285 , 23 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectSlip"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 6 } , { 286 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 287 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 288 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 289 , 28 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/relaxation/div0protect - abs poly/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 290 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/relaxation/div0protect - abs poly/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 291 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 292 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 293 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 1 } , { 294 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 1 } , { 295 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 296 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 297 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 1 } , { 298 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 1 } , { 299 , 32 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 6 } , { 300 , 33 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectSlip"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 6 } , { 301 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 302 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 303 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 304 , 38 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/div0protect - abs poly/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 305 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/div0protect - abs poly/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 306 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/y/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 307 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/y/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 308 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/y/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 309 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/y/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 310 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/y/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 311 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/y/Sum of Elements"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 312 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/y/Switch"
) , TARGET_STRING ( "diffDir" ) , 0 , 0 , 0 , 0 , 3 } , { 313 , 0 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 314 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/Cont LPF IC Dyn/Memory"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 315 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/Cont LPF IC Dyn/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 316 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/Cont LPF IC Dyn/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 317 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/Cont LPF IC Dyn/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 318 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 319 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/Cont LPF IC Dyn/Memory"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 320 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/Cont LPF IC Dyn/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 321 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/Cont LPF IC Dyn/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 322 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/Cont LPF IC Dyn/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 323 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 324 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Electrical Current/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 325 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Electrical Current/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 326 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Electrical Current/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 327 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabular Power Loss Data/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 328 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 329 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 330 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Divide2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 331 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 332 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 333 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Calculate qdot/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 334 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Calculate qdot/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 335 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Calculate qdot/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 336 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Gravity/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 337 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Transpose"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 1 } , { 338 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 339 , 17 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/Transpose1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 1 } , { 340 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Torque Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 341 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Torque Conversion1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 342 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake/product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 343 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Disallow Negative Brake Torque"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 344 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked/Unary Minus"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 345 , 21 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping/-4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 346 , 21 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping/Output Inertia"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 347 , 21 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping/Output Damping"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 348 , 21 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping/omega wheel"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 349 , 21 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping/Max Dynamic Friction Torque1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 350 , 21 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping/Output Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 351 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Torque Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 352 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Torque Conversion1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 353 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake/product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 354 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Disallow Negative Brake Torque"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 355 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked/Unary Minus"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 356 , 31 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping/-4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 357 , 31 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping/Output Inertia"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 358 , 31 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping/Output Damping"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 359 , 31 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping/omega wheel"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 360 , 31 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping/Max Dynamic Friction Torque1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 361 , 31 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping/Output Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 362 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 363 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 364 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 365 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 366 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 367 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 368 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 369 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 370 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 371 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Charge Model/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 372 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Charge Model/Integrator Limited"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 373 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Charge Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 374 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/State of Charge Capacity/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 375 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 376 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 377 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 378 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/Subtract"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 379 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn11"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 380 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn12"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 381 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn13"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 382 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn21"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 383 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn22"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 384 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn23"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 385 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn31"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 386 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn32"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 387 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn33"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 388 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF/Unit Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 389 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF/Unit Conversion1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 390 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF/Unit Conversion2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 391 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/1//NF"
) , TARGET_STRING ( "Fz" ) , 0 , 0 , 0 , 0 , 1 } , { 392 , 0 , TARGET_STRING
(
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/1//NR"
) , TARGET_STRING ( "Fz" ) , 0 , 0 , 0 , 0 , 1 } , { 393 , 0 , TARGET_STRING
(
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/Selector"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 1 } , { 394 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/Selector1"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 1 } , { 395 , 17 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn11"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 396 , 17 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn12"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 397 , 17 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn13"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 398 , 17 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn21"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 399 , 17 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn22"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 400 , 17 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn23"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 401 , 17 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn31"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 402 , 17 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn32"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 403 , 17 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn33"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 404 , 17 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/transform to body axes/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 1 } , { 405 , 18 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/transform to body axes/Reshape2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 406 , 23 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectSlip/Break Apart Detection/Relational Operator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 6 } , { 407 , 33 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectSlip/Break Apart Detection/Relational Operator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 6 } , { 408 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Bus Creation/Power/Kinetic Power/Switch1"
) , TARGET_STRING ( "diffDir" ) , 0 , 0 , 0 , 0 , 3 } , { 409 , 0 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 410 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 411 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 412 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/Subtract1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 413 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 414 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 415 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 416 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/Subtract1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 417 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 418 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 419 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 420 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/Subtract1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 421 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 10 , 0 , 1 } , { 422 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/Norm/Sum of Elements1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 423 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/Norm1/Sum of Elements1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 424 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 3 } , { 425 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Transpose1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 1 } , { 426 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 427 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 428 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 3 } , { 429 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Transpose1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 1 } , { 430 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 431 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 432 , 17 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 10 , 0 , 1 } , { 433 , 22 , TARGET_STRING
(
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM/Combinatorial  Logic"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 6 } , { 434 , 22 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Requisite Friction/Output Damping"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 435 , 32 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM/Combinatorial  Logic"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 6 } , { 436 , 32 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Requisite Friction/Output Damping"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 437 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/blend/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 438 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/blend/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 439 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/blend/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 440 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/blend/Subtract"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 441 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/blend/Subtract1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 442 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/blend/Subtract2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 443 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/blend/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 444 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/blend/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 445 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/blend/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 446 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/blend/Subtract"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 447 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/blend/Subtract1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 448 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/blend/Subtract2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 449 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/blend/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 450 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/blend/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 451 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/blend/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 452 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/blend/Subtract"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 453 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/blend/Subtract1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 454 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/blend/Subtract2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 455 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn11"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 456 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn12"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 457 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn13"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 458 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn21"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 459 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn22"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 460 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn23"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 461 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn31"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 462 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn32"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 463 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn33"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 464 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/transform to Inertial axes1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 1 } , { 465 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 466 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn11"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 467 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn12"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 468 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn13"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 469 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn21"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 470 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn22"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 471 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn23"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 472 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn31"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 473 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn32"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 474 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn33"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 475 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/transform to Inertial axes1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 1 } , { 476 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 477 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 10 , 0 , 1 } , { 478 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 479 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 480 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 481 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 482 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 483 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 484 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 10 , 0 , 1 } , { 485 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 486 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 487 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 488 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 489 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 490 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 491 , TARGET_STRING (
"SparkEV/Visualization/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
492 , TARGET_STRING ( "SparkEV/Visualization/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 493 , TARGET_STRING (
"SparkEV/Environment/Estimated Grade/Gain" ) , TARGET_STRING ( "Gain" ) , 0 ,
0 , 0 } , { 494 , TARGET_STRING ( "SparkEV/Environment/Estimated Grade/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 495 , TARGET_STRING (
"SparkEV/Environment/Estimated Grade/Grade Source" ) , TARGET_STRING (
"CurrentSetting" ) , 3 , 0 , 0 } , { 496 , TARGET_STRING (
"SparkEV/Vehicle/Chassis Input/First Order Hold1" ) , TARGET_STRING (
"InitialOutput" ) , 0 , 0 , 0 } , { 497 , TARGET_STRING (
"SparkEV/Vehicle/Chassis Input/First Order Hold1" ) , TARGET_STRING (
"ErrorTolerance" ) , 0 , 0 , 0 } , { 498 , TARGET_STRING (
"SparkEV/Vehicle/Electrical System Input/First Order Hold" ) , TARGET_STRING
( "InitialOutput" ) , 0 , 0 , 0 } , { 499 , TARGET_STRING (
"SparkEV/Vehicle/Electrical System Input/First Order Hold" ) , TARGET_STRING
( "ErrorTolerance" ) , 0 , 0 , 0 } , { 500 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/m to km" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 501 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/m to mi" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 502 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 503 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 504 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 505 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 506 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator4" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 507 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 508 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 509 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Saturation1" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 510 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Saturation1" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 511 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/US EPA kwh//USgal equivalent"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 512 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/s per h" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 513 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/w per kw" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 514 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/m to 100Km" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 515 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/m to mile" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 516 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/m^3 per gal" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 517 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/m^3 to US Gal" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 518 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Integrator" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 519 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Integrator1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 520 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Saturation" ) , TARGET_STRING
( "UpperLimit" ) , 0 , 0 , 0 } , { 521 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Saturation" ) , TARGET_STRING
( "LowerLimit" ) , 0 , 0 , 0 } , { 522 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Saturation1" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 523 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Saturation1" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 524 , TARGET_STRING (
"SparkEV/Controllers/Active Differential Control (ACD)/No Control/Constant" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 525 , TARGET_STRING (
"SparkEV/Environment/Ground Feedback/Constant/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 526 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant10" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 527 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant11" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 528 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant12" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 529 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 530 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 531 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant6" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 532 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant7" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 533 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant8" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 534 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant9" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 535 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Hill Hold/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 536 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Hill Hold/Compare To Constant1"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 537 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Hill Hold/Compare To Constant2"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 538 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Hill Hold/Compare To Constant3"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 539 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Hill Hold/Compare To Constant4"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 540 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Hill Hold/Dead Zone"
) , TARGET_STRING ( "LowerValue" ) , 0 , 0 , 0 } , { 541 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Hill Hold/Dead Zone"
) , TARGET_STRING ( "UpperValue" ) , 0 , 0 , 0 } , { 542 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Pedal, Cluster, Cabin/Dead Zone2"
) , TARGET_STRING ( "LowerValue" ) , 0 , 0 , 0 } , { 543 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Pedal, Cluster, Cabin/Dead Zone2"
) , TARGET_STRING ( "UpperValue" ) , 0 , 0 , 0 } , { 544 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Pedal, Cluster, Cabin/Dead Zone3"
) , TARGET_STRING ( "LowerValue" ) , 0 , 0 , 0 } , { 545 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Pedal, Cluster, Cabin/Dead Zone3"
) , TARGET_STRING ( "UpperValue" ) , 0 , 0 , 0 } , { 546 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Motor Coupling Dynamics"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 547 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Motor Coupling Dynamics"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 548 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Engine/No Engine/ClsdLpFuelMult"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 549 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Engine/No Engine/EngSpd" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 550 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Engine/No Engine/EngTrq" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 551 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Engine/No Engine/FuelVolFlw" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 552 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Engine/No Engine/TPCO" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 553 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Engine/No Engine/TPCO2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 554 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Engine/No Engine/TPHC" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 555 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simulink Models/Engine/No Engine/TPNOx" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 556 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Pedal, Cluster, Cabin/Brake Pedal/Dead Zone1"
) , TARGET_STRING ( "LowerValue" ) , 0 , 0 , 0 } , { 557 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Pedal, Cluster, Cabin/Brake Pedal/Dead Zone1"
) , TARGET_STRING ( "UpperValue" ) , 0 , 0 , 0 } , { 558 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/repeat"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 559 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/tFinal"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 560 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/Hit  Crossing"
) , TARGET_STRING ( "HitCrossingOffset" ) , 0 , 0 , 0 } , { 561 ,
TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table"
) , TARGET_STRING ( "Table" ) , 0 , 11 , 0 } , { 562 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table"
) , TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 11 , 0 } , { 563 ,
TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 564 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Brake System/BrakingHydraulics/Dead Zone"
) , TARGET_STRING ( "LowerValue" ) , 0 , 0 , 0 } , { 565 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Brake System/BrakingHydraulics/Dead Zone"
) , TARGET_STRING ( "UpperValue" ) , 0 , 0 , 0 } , { 566 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal"
) , TARGET_STRING ( "zdot_o" ) , 0 , 0 , 0 } , { 567 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal"
) , TARGET_STRING ( "theta_o" ) , 0 , 0 , 0 } , { 568 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal"
) , TARGET_STRING ( "q_o" ) , 0 , 0 , 0 } , { 569 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal"
) , TARGET_STRING ( "FskF" ) , 0 , 12 , 0 } , { 570 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal"
) , TARGET_STRING ( "dzsF" ) , 0 , 12 , 0 } , { 571 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal"
) , TARGET_STRING ( "FsbF" ) , 0 , 13 , 0 } , { 572 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal"
) , TARGET_STRING ( "dzdotsF" ) , 0 , 13 , 0 } , { 573 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal"
) , TARGET_STRING ( "FskR" ) , 0 , 12 , 0 } , { 574 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal"
) , TARGET_STRING ( "dzsR" ) , 0 , 12 , 0 } , { 575 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal"
) , TARGET_STRING ( "FsbR" ) , 0 , 13 , 0 } , { 576 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal"
) , TARGET_STRING ( "dzdotsR" ) , 0 , 13 , 0 } , { 577 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 578 ,
TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 14 , 0 } , { 579 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Brake System/BrakingHydraulics/Valve/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 580 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/FExtConstant"
) , TARGET_STRING ( "Value" ) , 0 , 15 , 0 } , { 581 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/MExtConstant"
) , TARGET_STRING ( "Value" ) , 0 , 15 , 0 } , { 582 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Cont LPF/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 583 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Cont LPF1/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 584 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/FxType"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 585 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/rollType"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 586 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/vertType"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 587 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/FxType"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 588 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/rollType"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 589 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/vertType"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 590 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Rear Axle Compliances/No Axle Compliances/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 591 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Rear Axle Compliances/No Axle Compliances/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 592 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack"
) , TARGET_STRING ( "Vinit" ) , 0 , 0 , 0 } , { 593 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/SOC Ratio to %"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 594 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold"
) , TARGET_STRING ( "IC" ) , 0 , 0 , 0 } , { 595 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 596 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 597 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 598 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 599 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 600 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 601 ,
TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold"
) , TARGET_STRING ( "IC" ) , 0 , 0 , 0 } , { 602 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 603 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 604 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 605 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 606 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 607 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 608 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 609 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Sign convention"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 610 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 611 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 612 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Sign convention"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 613 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 614 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 615 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/Fy/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 616 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/Fy/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 617 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/Fy/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 618 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/Fy/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 619 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/Mx/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 620 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/Mx/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 621 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/Mx/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 622 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/Mx/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 623 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/Mz/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 624 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/Mz/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 625 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/Mz/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 626 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/Mz/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 627 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/alpha/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 628 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/alpha/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 629 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/alpha/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 630 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Subsystem/alpha/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 631 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 632 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 633 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)"
) , TARGET_STRING ( "v_ini" ) , 0 , 0 , 0 } , { 634 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)"
) , TARGET_STRING ( "pos_ini" ) , 0 , 14 , 0 } , { 635 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)"
) , TARGET_STRING ( "g" ) , 0 , 0 , 0 } , { 636 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force"
) , TARGET_STRING ( "beta_w" ) , 0 , 14 , 0 } , { 637 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force"
) , TARGET_STRING ( "Cs" ) , 0 , 14 , 0 } , { 638 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force"
) , TARGET_STRING ( "Cym" ) , 0 , 14 , 0 } , { 639 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force"
) , TARGET_STRING ( "R" ) , 0 , 0 , 0 } , { 640 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 641 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 642 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant10"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 643 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant11"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 644 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 645 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 646 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant4"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 647 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant5"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 648 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant6"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 649 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant7"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 650 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant8"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 651 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Constant9"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 652 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 653 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 654 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant12"
) , TARGET_STRING ( "Value" ) , 0 , 15 , 0 } , { 655 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant14"
) , TARGET_STRING ( "Value" ) , 0 , 9 , 0 } , { 656 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant19"
) , TARGET_STRING ( "Value" ) , 0 , 15 , 0 } , { 657 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 16 , 0 } , { 658 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant6"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 659 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant7"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 660 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 661 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant10"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 662 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant11"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 663 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant12"
) , TARGET_STRING ( "Value" ) , 0 , 15 , 0 } , { 664 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant14"
) , TARGET_STRING ( "Value" ) , 0 , 9 , 0 } , { 665 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant16"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 666 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant19"
) , TARGET_STRING ( "Value" ) , 0 , 15 , 0 } , { 667 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 668 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 669 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant5"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 670 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant7"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 671 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant9"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 672 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 673 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant10"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 674 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant11"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 675 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant13"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 676 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant14"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 677 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant15"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 678 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant16"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 679 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant17"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 680 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant18"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 681 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant19"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 682 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 683 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant20"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 684 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant21"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 685 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant22"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 686 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant23"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 687 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant24"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 688 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 689 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant4"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 690 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant5"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 691 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant6"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 692 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant7"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 693 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant8"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 694 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant9"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 695 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 696 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 697 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant12"
) , TARGET_STRING ( "Value" ) , 0 , 15 , 0 } , { 698 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant14"
) , TARGET_STRING ( "Value" ) , 0 , 9 , 0 } , { 699 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant19"
) , TARGET_STRING ( "Value" ) , 0 , 15 , 0 } , { 700 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 16 , 0 } , { 701 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant6"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 702 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant7"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 703 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 704 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant10"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 705 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant11"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 706 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant12"
) , TARGET_STRING ( "Value" ) , 0 , 15 , 0 } , { 707 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant14"
) , TARGET_STRING ( "Value" ) , 0 , 9 , 0 } , { 708 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant16"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 709 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant19"
) , TARGET_STRING ( "Value" ) , 0 , 15 , 0 } , { 710 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 711 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 712 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant5"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 713 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant7"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 714 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant9"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 715 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 716 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant10"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 717 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant11"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 718 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant13"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 719 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant14"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 720 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant15"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 721 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant16"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 722 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant17"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 723 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant18"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 724 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant19"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 725 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 726 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant20"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 727 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant21"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 728 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant22"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 729 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant23"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 730 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant24"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 731 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 732 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant4"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 733 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant5"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 734 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant6"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 735 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant7"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 736 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant8"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 737 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant9"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 738 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Open Differential"
) , TARGET_STRING ( "shaftSwitchMask" ) , 0 , 0 , 0 } , { 739 , TARGET_STRING
(
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 740 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 741 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/Cont LPF IC Dyn/Reset"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 742 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/Cont LPF IC Dyn/Memory"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 743 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly"
) , TARGET_STRING ( "thresh" ) , 0 , 0 , 0 } , { 744 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Matrix Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 17 , 0 } , { 745 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Theta"
) , TARGET_STRING ( "WrappedStateUpperValue" ) , 0 , 0 , 0 } , { 746 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Theta"
) , TARGET_STRING ( "WrappedStateLowerValue" ) , 0 , 0 , 0 } , { 747 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Constant4"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 748 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/4"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 749 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Crm"
) , TARGET_STRING ( "Table" ) , 0 , 14 , 0 } , { 750 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Drag Force/Crm"
) , TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 14 , 0 } , { 751 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 15 , 0 } , { 752 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 15 , 0 } , { 753 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Suspension/[NF,NR]"
) , TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 754 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Suspension/[NF,NR]b"
) , TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 755 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Suspension/[NF,NR]k"
) , TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 756 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 757 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 758 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/y/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 759 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/y/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 760 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/y/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 761 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/y/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 762 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/Cont LPF IC Dyn/Reset"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 763 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/Cont LPF IC Dyn/Memory"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 764 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/Cont LPF IC Dyn/Reset"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 765 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/Cont LPF IC Dyn/Memory"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 766 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Electrical Current/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 767 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Electrical Current/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 768 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabular Power Loss Data/2-D Lookup Table"
) , TARGET_STRING ( "Table" ) , 0 , 18 , 0 } , { 769 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabular Power Loss Data/2-D Lookup Table"
) , TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 19 , 0 } , { 770 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabular Power Loss Data/2-D Lookup Table"
) , TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 20 , 0 } , { 771 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabular Power Loss Data/2-D Lookup Table"
) , TARGET_STRING ( "maxIndex" ) , 2 , 1 , 0 } , { 772 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 773 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Interpolated zero-crossing"
) , TARGET_STRING ( "Table" ) , 0 , 14 , 0 } , { 774 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Interpolated zero-crossing"
) , TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 14 , 0 } , { 775 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Max Torque Limit"
) , TARGET_STRING ( "Table" ) , 0 , 21 , 0 } , { 776 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Max Torque Limit"
) , TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 21 , 0 } , { 777 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Determine Force,  Mass & Inertia/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 778 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 779 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Inertial Frame/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 780 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Inertial Frame/Constant12"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 781 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Inertial Frame/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 782 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/phi"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 783 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Earth2Body/rotation/psi"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 784 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Torque Conversion1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 785 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Disallow Negative Brake Torque"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 786 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Disallow Negative Brake Torque"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 787 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 788 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 789 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 790 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping/-4"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 791 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/yn"
) , TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 0 } , { 792 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 793 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectSlip/yn"
) , TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 0 } , { 794 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Torque Conversion1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 795 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Disallow Negative Brake Torque"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 796 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Disallow Negative Brake Torque"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 797 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 798 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 799 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 800 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping/-4"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 801 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/yn"
) , TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 0 } , { 802 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 803 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectSlip/yn"
) , TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 0 } , { 804 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 805 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 806 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 807 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 808 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 809 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 810 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Charge Model/Integrator Limited"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 811 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/Em"
) , TARGET_STRING ( "Table" ) , 0 , 22 , 0 } , { 812 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/Em"
) , TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 22 , 0 } , { 813 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Voltage and Power Calculation/R"
) , TARGET_STRING ( "maxIndex" ) , 2 , 1 , 0 } , { 814 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/1//NF"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 815 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/1//NR"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 816 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front"
) , TARGET_STRING ( "R_T2" ) , 0 , 0 , 0 } , { 817 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear"
) , TARGET_STRING ( "R_T2" ) , 0 , 0 , 0 } , { 818 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Inertial Frame/Inertial Axes/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 819 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Bus Creation/Power/Kinetic Power/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 820 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Bus Creation/Power/Kinetic Power/Constant6"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 821 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Bus Creation/Power/Kinetic Power/Switch1"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 822 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 823 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 824 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 825 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM/Combinatorial  Logic"
) , TARGET_STRING ( "TruthTable" ) , 1 , 23 , 0 } , { 826 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 827 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM/Combinatorial  Logic"
) , TARGET_STRING ( "TruthTable" ) , 1 , 23 , 0 } , { 828 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 829 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/blend/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 830 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/blend/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 831 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/blend/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 832 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/blend/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 833 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/blend/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 834 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/blend/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 835 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/blend/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 836 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/blend/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 837 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/blend/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 838 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/blend/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 839 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/blend/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 840 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/blend/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_States rtBlockStates [ ] = { { 841 , 24 ,
TARGET_STRING ( "SparkEV/Visualization/Integrator" ) , TARGET_STRING ( "" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 , 0 } , { 842 , 27 ,
TARGET_STRING ( "SparkEV/Visualization/Emission Calculations/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 , 0
} , { 843 , 28 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator1" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 , 0 } , { 844 , 29
, TARGET_STRING ( "SparkEV/Visualization/Emission Calculations/Integrator2" )
, TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 ,
0 } , { 845 , 30 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator3" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 , 0 } , { 846 , 31
, TARGET_STRING ( "SparkEV/Visualization/Emission Calculations/Integrator4" )
, TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 ,
0 } , { 847 , 25 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Integrator" ) , TARGET_STRING
( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 , 0 } , { 848 ,
26 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Integrator1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 , 0
} , { 849 , 7 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Motor Coupling Dynamics"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 850 , 32 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 851 , - 1 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 4 , 0 , - 1 , 0 } , {
852 , 16 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Brake System/BrakingHydraulics/Valve/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 , 1 , - 1
, 0 } , { 853 , 10 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 854 , 20 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Cont LPF1/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 855 , 0 , TARGET_STRING (
 "SparkEV/Driver Commands/Driver Commands/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 856 , 35 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 857 , 36 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential/Open Differential/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1
, 0 } , { 858 , 12 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 859 , 14 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 860 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Driveshaft Compliance/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 861 , 5 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 862 , 4 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Output Filter/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 863 , 22 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Position"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1
, 0 } , { 864 , 9 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/Theta"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 865 , 1 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/U,w"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1
, 0 } , { 866 , 8 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/3DOF (Body Axes)/q"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 867 , 15 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 868 , 21 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 869 , 11 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance4/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 870 , 13 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Drivetrain/Drivetrain Layout/Front Axle Compliances/Axle Compliances/Torsional Compliance5/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 871 , 6 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1/Mapped EM/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 872 , 3 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Charge Model/Integrator\nLimited"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 873 , 33 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 3DOF Longitudinal/Vehicle Body 3DOF Longitudinal/Vehicle Body 3 DOF Grade Input/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF/Integrator3"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 19 , 22 , 23 , 24 ,
25 , 26 , 20 , 21 , 6 , 27 , 0 , 15 , 9 , 16 , 0 , 30 , 31 , 11 , 13 , 29 , 4
, 3 , 18 , 8 , 1 , 7 , 14 , 17 , 10 , 12 , 5 , 2 , 28 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 874 , TARGET_STRING (
"_CtrlVcuEvBattChrgPwrMax2f2EvVCU_sldd_" ) , 0 , 0 , 0 } , { 875 ,
TARGET_STRING ( "_CtrlVcuEvBattDischrgPwrMax2f2EvVCU_sldd_" ) , 0 , 0 , 0 } ,
{ 876 , TARGET_STRING ( "_CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_" ) , 0 , 24 , 0 }
, { 877 , TARGET_STRING ( "_CtrlVcuEvDischrgLmtBpt2f2EvVCU_sldd_" ) , 0 , 24
, 0 } , { 878 , TARGET_STRING ( "_CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_" ) ,
0 , 14 , 0 } , { 879 , TARGET_STRING (
"_CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_" ) , 0 , 14 , 0 } , { 880 ,
TARGET_STRING ( "_CtrlVcuEvSocBpt2f2EvVCU_sldd_" ) , 0 , 24 , 0 } , { 881 ,
TARGET_STRING ( "_DriverAeroRes2f2Driver_sldd_" ) , 0 , 0 , 0 } , { 882 ,
TARGET_STRING ( "_DriverDrivelineRes2f2Driver_sldd_" ) , 0 , 0 , 0 } , { 883
, TARGET_STRING ( "_DriverInitialGear2f2Driver_sldd_" ) , 0 , 0 , 0 } , { 884
, TARGET_STRING ( "_DriverPreviewDist2f2Driver_sldd_" ) , 0 , 0 , 0 } , { 885
, TARGET_STRING ( "_DriverRollRes2f2Driver_sldd_" ) , 0 , 0 , 0 } , { 886 ,
TARGET_STRING ( "_DriverShiftTime2f2Driver_sldd_" ) , 0 , 0 , 0 } , { 887 ,
TARGET_STRING ( "_DriverTimeConst2f2Driver_sldd_" ) , 0 , 0 , 0 } , { 888 ,
TARGET_STRING ( "_DriverTractiveForce2f2Driver_sldd_" ) , 0 , 0 , 0 } , { 889
, TARGET_STRING ( "_EnvAbsPrs2f2Environment_sldd_" ) , 0 , 0 , 0 } , { 890 ,
TARGET_STRING ( "_EnvAirTemp2f2Environment_sldd_" ) , 0 , 0 , 0 } , { 891 ,
TARGET_STRING ( "_EnvGrvty2f2Environment_sldd_" ) , 0 , 0 , 0 } , { 892 ,
TARGET_STRING ( "_EnvNomFrictionScaling2f2Environment_sldd_" ) , 0 , 0 , 0 }
, { 893 , TARGET_STRING ( "_EnvNominalGrade2f2Environment_sldd_" ) , 0 , 0 ,
0 } , { 894 , TARGET_STRING ( "_EnvWindVelX2f2Environment_sldd_" ) , 0 , 0 ,
0 } , { 895 , TARGET_STRING ( "_EnvWindVelY2f2Environment_sldd_" ) , 0 , 0 ,
0 } , { 896 , TARGET_STRING ( "_EnvWindVelZ2f2Environment_sldd_" ) , 0 , 0 ,
0 } , { 897 , TARGET_STRING ( "_PlntBattIntrnRes2f2BatteryDCDC_sldd_" ) , 0 ,
25 , 0 } , { 898 , TARGET_STRING ( "_PlntBattNumCellPar2f2BatteryDCDC_sldd_"
) , 0 , 0 , 0 } , { 899 , TARGET_STRING (
"_PlntBattNumCellSer2f2BatteryDCDC_sldd_" ) , 0 , 0 , 0 } , { 900 ,
TARGET_STRING ( "_PlntBattSocBpt2f2BatteryDCDC_sldd_" ) , 0 , 12 , 0 } , {
901 , TARGET_STRING ( "_PlntBattTempBpt2f2BatteryDCDC_sldd_" ) , 0 , 13 , 0 }
, { 902 , TARGET_STRING ( "_PlntBattTimeCnst2f2BatteryDCDC_sldd_" ) , 0 , 0 ,
0 } , { 903 , TARGET_STRING ( "_PlntBrkActrBoreFrnt2f2PassVeh_sldd_" ) , 0 ,
0 , 0 } , { 904 , TARGET_STRING ( "_PlntBrkActrBoreRear2f2PassVeh_sldd_" ) ,
0 , 0 , 0 } , { 905 , TARGET_STRING ( "_PlntBrkFrntBias2f2PassVeh_sldd_" ) ,
0 , 0 , 0 } , { 906 , TARGET_STRING (
"_PlntBrkKinFricCffFrnt2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , { 907 ,
TARGET_STRING ( "_PlntBrkKinFricCffRear2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , {
908 , TARGET_STRING ( "_PlntBrkNumPadsFrnt2f2PassVeh_sldd_" ) , 0 , 0 , 0 } ,
{ 909 , TARGET_STRING ( "_PlntBrkNumPadsRear2f2PassVeh_sldd_" ) , 0 , 0 , 0 }
, { 910 , TARGET_STRING ( "_PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_" ) , 0 ,
0 , 0 } , { 911 , TARGET_STRING ( "_PlntBrkPadMeanRadiusRear2f2PassVeh_sldd_"
) , 0 , 0 , 0 } , { 912 , TARGET_STRING ( "_PlntBrkPrsFctr2f2PassVeh_sldd_" )
, 0 , 0 , 0 } , { 913 , TARGET_STRING ( "_PlntBrkRearBias2f2PassVeh_sldd_" )
, 0 , 0 , 0 } , { 914 , TARGET_STRING (
"_PlntBrkStcFricCffFrnt2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , { 915 ,
TARGET_STRING ( "_PlntBrkStcFricCffRear2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , {
916 , TARGET_STRING ( "_PlntBrkWc2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , { 917 ,
TARGET_STRING ( "_PlntDiffrntlAxl1Damp2f2Drivetrain_sldd_" ) , 0 , 0 , 0 } ,
{ 918 , TARGET_STRING ( "_PlntDiffrntlAxl1Inertia2f2Drivetrain_sldd_" ) , 0 ,
0 , 0 } , { 919 , TARGET_STRING (
"_PlntDiffrntlAxl1InitVel2f2Drivetrain_sldd_" ) , 0 , 0 , 0 } , { 920 ,
TARGET_STRING ( "_PlntDiffrntlAxl2Damp2f2Drivetrain_sldd_" ) , 0 , 0 , 0 } ,
{ 921 , TARGET_STRING ( "_PlntDiffrntlAxl2Inertia2f2Drivetrain_sldd_" ) , 0 ,
0 , 0 } , { 922 , TARGET_STRING (
"_PlntDiffrntlAxl2InitVel2f2Drivetrain_sldd_" ) , 0 , 0 , 0 } , { 923 ,
TARGET_STRING ( "_PlntDiffrntlCarrDamp2f2Drivetrain_sldd_" ) , 0 , 0 , 0 } ,
{ 924 , TARGET_STRING ( "_PlntDiffrntlCarrInertia2f2Drivetrain_sldd_" ) , 0 ,
0 , 0 } , { 925 , TARGET_STRING ( "_PlntDiffrntlEff2f2Drivetrain_sldd_" ) , 0
, 0 , 0 } , { 926 , TARGET_STRING ( "_PlntDiffrntlRatio2f2Drivetrain_sldd_" )
, 0 , 0 , 0 } , { 927 , TARGET_STRING (
"_PlntDriveshftDamp2f2Drivetrain_sldd_" ) , 0 , 0 , 0 } , { 928 ,
TARGET_STRING ( "_PlntDriveshftDampCutoffFreq2f2Drivetrain_sldd_" ) , 0 , 0 ,
0 } , { 929 , TARGET_STRING ( "_PlntDriveshftInitDeflect2f2Drivetrain_sldd_"
) , 0 , 0 , 0 } , { 930 , TARGET_STRING (
"_PlntDriveshftInitVel2f2Drivetrain_sldd_" ) , 0 , 0 , 0 } , { 931 ,
TARGET_STRING ( "_PlntDriveshftStiff2f2Drivetrain_sldd_" ) , 0 , 0 , 0 } , {
932 , TARGET_STRING ( "_PlntEM1Damp2f2Drivetrain_sldd_" ) , 0 , 0 , 0 } , {
933 , TARGET_STRING ( "_PlntEM1Inertia2f2Drivetrain_sldd_" ) , 0 , 0 , 0 } ,
{ 934 , TARGET_STRING ( "_PlntEM1InitVel2f2Drivetrain_sldd_" ) , 0 , 0 , 0 }
, { 935 , TARGET_STRING ( "_PlntEM1TimeCnst2f2ElectricMachine1_sldd_" ) , 0 ,
0 , 0 } , { 936 , TARGET_STRING ( "_PlntVehAeroDragCff2f2PassVeh_sldd_" ) , 0
, 0 , 0 } , { 937 , TARGET_STRING ( "_PlntVehAeroFrntArea2f2PassVeh_sldd_" )
, 0 , 0 , 0 } , { 938 , TARGET_STRING ( "_PlntVehAeroLiftCff2f2PassVeh_sldd_"
) , 0 , 0 , 0 } , { 939 , TARGET_STRING (
"_PlntVehAeroPitchCff2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , { 940 ,
TARGET_STRING ( "_PlntVehCGHgtAxl2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , { 941 ,
TARGET_STRING ( "_PlntVehDstCGFrntAxl2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , {
942 , TARGET_STRING ( "_PlntVehDstCGRearAxl2f2PassVeh_sldd_" ) , 0 , 0 , 0 }
, { 943 , TARGET_STRING ( "_PlntVehFzFlt2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , {
944 , TARGET_STRING ( "_PlntVehInitLongVel2f2PassVeh_sldd_" ) , 0 , 0 , 0 } ,
{ 945 , TARGET_STRING ( "_PlntVehMass2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , {
946 , TARGET_STRING ( "_PlntVehPitchMomentInertia2f2PassVeh_sldd_" ) , 0 , 0
, 0 } , { 947 , TARGET_STRING ( "_PlntWhlDampCoeffFrnt2f2PassVeh_sldd_" ) , 0
, 0 , 0 } , { 948 , TARGET_STRING ( "_PlntWhlDampCoeffRear2f2PassVeh_sldd_" )
, 0 , 0 , 0 } , { 949 , TARGET_STRING ( "_PlntWhlInertiaFrnt2f2PassVeh_sldd_"
) , 0 , 0 , 0 } , { 950 , TARGET_STRING (
"_PlntWhlInertiaRear2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , { 951 , TARGET_STRING
( "_PlntWhlInitAngVel2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , { 952 ,
TARGET_STRING ( "_PlntWhlLdRadius2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , { 953 ,
TARGET_STRING ( "_PlntWhlLnrVelForceComp2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , {
954 , TARGET_STRING ( "_PlntWhlMaxFz2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , { 955
, TARGET_STRING ( "_PlntWhlMaxSlipRatio2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , {
956 , TARGET_STRING ( "_PlntWhlMinFz2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , { 957
, TARGET_STRING ( "_PlntWhlNrmlForceExp2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , {
958 , TARGET_STRING ( "_PlntWhlPrsFrnt2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , {
959 , TARGET_STRING ( "_PlntWhlPrsRear2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , {
960 , TARGET_STRING ( "_PlntWhlQuadVelForceComp2f2PassVeh_sldd_" ) , 0 , 0 ,
0 } , { 961 , TARGET_STRING ( "_PlntWhlRlxLngth2f2PassVeh_sldd_" ) , 0 , 0 ,
0 } , { 962 , TARGET_STRING ( "_PlntWhlTirPrsExp2f2PassVeh_sldd_" ) , 0 , 0 ,
0 } , { 963 , TARGET_STRING ( "_PlntWhlUnldRadius2f2PassVeh_sldd_" ) , 0 , 0
, 0 } , { 964 , TARGET_STRING ( "_PlntWhlVelIndpntForceCff2f2PassVeh_sldd_" )
, 0 , 0 , 0 } , { 965 , TARGET_STRING (
"_PlntWhlVelTolLowVel2f2PassVeh_sldd_" ) , 0 , 0 , 0 } , { 966 ,
TARGET_STRING ( "_Spark_EffMap2f2SparkEM_sldd_" ) , 0 , 26 , 0 } , { 967 ,
TARGET_STRING ( "_Spark_MaxTrq2f2SparkEM_sldd_" ) , 0 , 27 , 0 } , { 968 ,
TARGET_STRING ( "_Spark_MaxTrq_Spd2f2SparkEM_sldd_" ) , 0 , 27 , 0 } , { 969
, TARGET_STRING ( "_Spark_Spd_BrkPts2f2SparkEM_sldd_" ) , 0 , 28 , 0 } , {
970 , TARGET_STRING ( "_Spark_Trq_BrkPts2f2SparkEM_sldd_" ) , 0 , 29 , 0 } ,
{ 971 , TARGET_STRING ( "_batt_cap_init2f2SparkBat_sldd_" ) , 0 , 0 , 0 } , {
972 , TARGET_STRING ( "_soc_init2f2SparkBat_sldd_" ) , 0 , 0 , 0 } , { 0 , (
NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & iowqpk3eub2 . fjnu3gvsoe , &
iowqpk3eub2 . meiux3s5v1 , & iowqpk3eub2 . lxjoffd23j , & iowqpk3eub2 .
k4zukswayf , & iowqpk3eub2 . mytvvfcg1y , & iowqpk3eub2 . ivcelveswb , &
iowqpk3eub2 . liyhqocsj3 [ 0 ] , & iowqpk3eub2 . pupxf42qyi , & iowqpk3eub2 .
c02ood1bjt , & iowqpk3eub2 . p0b3m4xtnw , & iowqpk3eub2 . nz1eo0mhjt , &
iowqpk3eub2 . pvdiosiz3s , & iowqpk3eub2 . cyvi2yk4zm , & iowqpk3eub2 .
dttp424sgc , & iowqpk3eub2 . hvofgrdmb4 [ 0 ] , & iowqpk3eub2 . ckogufqgce ,
& iowqpk3eub2 . orjxb10cau , & iowqpk3eub2 . m2yfudsyf0 , & iowqpk3eub2 .
bqypj3eyiq , & iowqpk3eub2 . gwnl2155xk , & iowqpk3eub2 . kb23u2basn , &
iowqpk3eub2 . biqv0f0tfc [ 0 ] , & iowqpk3eub2 . icp2bbe015 , & iowqpk3eub2 .
msjuqz2cog , & iowqpk3eub2 . dnjk2135yv , & iowqpk3eub2 . crfjrsqdom , &
iowqpk3eub2 . hpa0jnkmab , & iowqpk3eub2 . ig54gcy1dp [ 0 ] , & iowqpk3eub2 .
fhd2qe1xn4 [ 0 ] , & iowqpk3eub2 . hdpouphvxx , & iowqpk3eub2 . fygmwizxbe ,
& iowqpk3eub2 . hkfoqcrcaa , & iowqpk3eub2 . nk5i1tvfs4 , & iowqpk3eub2 .
if3ap21cin , & iowqpk3eub2 . iqd4x5zmdq , & iowqpk3eub2 . gtc1bz3bpt , &
iowqpk3eub2 . pjeugxnijx , & iowqpk3eub2 . khcqvoneta , & iowqpk3eub2 .
ffjzw3xpup , & iowqpk3eub2 . bbwodlczuz , & iowqpk3eub2 . gk5c3nru3t , &
iowqpk3eub2 . cfykfdt0uw , & iowqpk3eub2 . dxggtyvppm , & iowqpk3eub2 .
j5ydyic0d5 , & iowqpk3eub2 . kvtxbs1osx , & iowqpk3eub2 . ll5kvzbeqe , &
iowqpk3eub2 . fslb3e0kt4 , & iowqpk3eub2 . o4djdimsdm , & iowqpk3eub2 .
fyv5hziyzu , & iowqpk3eub2 . jpcr1f245w , & iowqpk3eub2 . h2mcwsniul , &
iowqpk3eub2 . ldqpwfgupj , & iowqpk3eub2 . fjkq3v532f , & iowqpk3eub2 .
jtrhoigdxv , & iowqpk3eub2 . dtch5f4az1 , & iowqpk3eub2 . jfa1nbks1u , &
iowqpk3eub2 . nodgw2f1ru [ 0 ] , & iowqpk3eub2 . d4vvdrgtgs , & iowqpk3eub2 .
nzrgmpq2kc , & iowqpk3eub2 . e3bitaa0oq , & iowqpk3eub2 . l05au4wqsc , &
iowqpk3eub2 . hiqbgqctfu , & iowqpk3eub2 . bwgdzgdu1v , & iowqpk3eub2 .
dqh4oe22xa , & iowqpk3eub2 . mubnbbme0n , & iowqpk3eub2 . a4b5yp1ztb , &
iowqpk3eub2 . odlevesch3 [ 0 ] , & iowqpk3eub2 . a0xxw4glf3 [ 0 ] , &
iowqpk3eub2 . d23gupiqyg [ 0 ] , & iowqpk3eub2 . gi0w2rdunb , & iowqpk3eub2 .
oozbsuyo0w , & iowqpk3eub2 . ciy0n0fvf4 , & iowqpk3eub2 . hvrj3ku4rl , &
iowqpk3eub2 . or4x0ngped , & iowqpk3eub2 . o2cjlwehyr , & iowqpk3eub2 .
m3s2vgesq4 , & iowqpk3eub2 . niktayqu0g , & iowqpk3eub2 . gfa1pnn0i5 , &
iowqpk3eub2 . j4h3u5o2s0 , & iowqpk3eub2 . oqfbznbud3 , & iowqpk3eub2 .
eycgm5czdn [ 0 ] , & iowqpk3eub2 . b25h3lrxlo [ 0 ] , & iowqpk3eub2 .
ivqnpc0uok , & cz5yqt3r3xb . metkb44aex , & cz5yqt3r3xb . ldpanoehpw , &
cz5yqt3r3xb . iyzfufaeyj , & iowqpk3eub2 . d4rqnnq3qc [ 0 ] , & iowqpk3eub2 .
pjkdriloq3 [ 0 ] , & iowqpk3eub2 . oq1kbno45o [ 0 ] , & iowqpk3eub2 .
eulnmgegcl , & iowqpk3eub2 . iotv5isaib , & iowqpk3eub2 . o4xtsrd0je , &
iowqpk3eub2 . bdac45x5j4 , & iowqpk3eub2 . d1mihyi2ba , & iowqpk3eub2 .
d0xprkwmho , ( & iowqpk3eub2 . nodgw2f1ru [ 0 ] + 2 ) , ( & iowqpk3eub2 .
nodgw2f1ru [ 0 ] + 3 ) , & iowqpk3eub2 . cgnfgn223x , & iowqpk3eub2 .
pynezfpwd5 , & iowqpk3eub2 . np15oib1kn , & iowqpk3eub2 . atfdsr0huc , &
iowqpk3eub2 . jlncf1nhxu , & iowqpk3eub2 . n1qbwalijw , & iowqpk3eub2 .
jiym3rqvan , & iowqpk3eub2 . ceqisvxe55 , & iowqpk3eub2 . hl3n1vp0xp .
lpoql10kbh , & iowqpk3eub2 . hl3n1vp0xp . ewiw2ra5at , & iowqpk3eub2 .
hl3n1vp0xp . h3cfwzlt1t , & iowqpk3eub2 . hl3n1vp0xp . ozaa1drp55 , &
iowqpk3eub2 . bnugi4f5zh , & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o .
dhjwhtydhg , & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o . adsixgkqky , &
iowqpk3eub2 . npw2p1gyxa , & iowqpk3eub2 . c5qsn10kon , & iowqpk3eub2 .
hmrl2pnkei , & iowqpk3eub2 . kzv4bjyp4c . lpoql10kbh , & iowqpk3eub2 .
kzv4bjyp4c . ewiw2ra5at , & iowqpk3eub2 . kzv4bjyp4c . h3cfwzlt1t , &
iowqpk3eub2 . kzv4bjyp4c . ozaa1drp55 , & iowqpk3eub2 . bugorax2wv , &
iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e . pizt32ck1y , & iowqpk3eub2 .
ngpegw05gp [ 0 ] . neijo20b0e . fjrzzbxuaj , & iowqpk3eub2 . moec5qfiw2 , &
iowqpk3eub2 . ha4njibf2o , & iowqpk3eub2 . nn3knanxji , & iowqpk3eub2 .
a043amhdpn [ 0 ] , & iowqpk3eub2 . o1byibse1l [ 0 ] , & iowqpk3eub2 .
gk34ntrgmq , & iowqpk3eub2 . orndyrmi2r , & iowqpk3eub2 . jhc4ii4xbs , &
iowqpk3eub2 . bvnglhibbn , & iowqpk3eub2 . jpyepvm3xu , & iowqpk3eub2 .
hau1vvqsb5 , & iowqpk3eub2 . fuob0ddam2h . motv0pybyv , & iowqpk3eub2 .
puwtafzry1 , & iowqpk3eub2 . dwnfs4t0ur . motv0pybyv , & iowqpk3eub2 .
gcn3sxipyq , & iowqpk3eub2 . lfofnxfayn [ 0 ] , & iowqpk3eub2 . ccpbmibxu1 [
0 ] , & iowqpk3eub2 . oiwa3jkvb5 [ 0 ] , & iowqpk3eub2 . fhuiylguyp [ 0 ] , &
iowqpk3eub2 . igqq0bffvg [ 0 ] , & iowqpk3eub2 . ptmq24ign2 [ 0 ] , &
iowqpk3eub2 . it0brydt4y [ 0 ] , & iowqpk3eub2 . dsadicqcwv [ 0 ] , &
iowqpk3eub2 . jsgjt0fuoh [ 0 ] , & iowqpk3eub2 . ieofldeqy2 [ 0 ] , &
iowqpk3eub2 . l2egj4cytx [ 0 ] , & iowqpk3eub2 . jx23o501wt [ 0 ] , ( &
iowqpk3eub2 . dsadicqcwv [ 0 ] + 1 ) , & iowqpk3eub2 . l2egj4cytx [ 0 ] , &
iowqpk3eub2 . oiwa3jkvb5 [ 0 ] , ( & iowqpk3eub2 . oiwa3jkvb5 [ 0 ] + 2 ) , (
& iowqpk3eub2 . l2egj4cytx [ 0 ] + 2 ) , ( & iowqpk3eub2 . jx23o501wt [ 0 ] +
1 ) , ( & iowqpk3eub2 . ieofldeqy2 [ 0 ] + 1 ) , ( & iowqpk3eub2 . jsgjt0fuoh
[ 0 ] + 1 ) , & iowqpk3eub2 . ptmq24ign2 [ 0 ] , ( & iowqpk3eub2 . ptmq24ign2
[ 0 ] + 2 ) , & iowqpk3eub2 . it0brydt4y [ 0 ] , ( & iowqpk3eub2 . it0brydt4y
[ 0 ] + 2 ) , & iowqpk3eub2 . aedljs0e4u [ 0 ] , & iowqpk3eub2 . gtaxtjiya4 ,
& iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o . aseqcyqgtw , & iowqpk3eub2 .
gugymbw2iq [ 0 ] . eq332hab4o . dhjwhtydhg , & iowqpk3eub2 . gugymbw2iq [ 0 ]
. eq332hab4o . adsixgkqky , & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o .
eqrog2hdmh , & cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . hor5qoll31 , &
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . jeid4kmorf , & iowqpk3eub2 .
esrwu2tlga , & iowqpk3eub2 . o24lfarmih , & iowqpk3eub2 . fxzb5xblol , &
iowqpk3eub2 . jzibsxlg2x , & iowqpk3eub2 . oee54crz1e , & iowqpk3eub2 .
cjvyxh13dv , & iowqpk3eub2 . cjp5kr4awk , & iowqpk3eub2 . ngpegw05gp [ 0 ] .
neijo20b0e . j5ybwspdla , & iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e .
pizt32ck1y , & iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e . fjrzzbxuaj , &
iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e . eykroya1zm , & cz5yqt3r3xb .
ngpegw05gp [ 0 ] . neijo20b0e . cwd4vpw3zu , & cz5yqt3r3xb . ngpegw05gp [ 0 ]
. neijo20b0e . ckcpmdbuxk , & iowqpk3eub2 . awed5xcf4w , & iowqpk3eub2 .
ptvh2on4rv , & iowqpk3eub2 . bgquks0gef , & iowqpk3eub2 . f4hqazlsnx , &
iowqpk3eub2 . c52p1ih31b , & iowqpk3eub2 . d5am3mkuih , & iowqpk3eub2 .
ch4cxv3mlw , & iowqpk3eub2 . dmnvn5gvd4 [ 0 ] , & iowqpk3eub2 . mmyyvvwxlz [
0 ] , & iowqpk3eub2 . okmlvakeqk [ 0 ] , & iowqpk3eub2 . d1uv3awlwx , &
iowqpk3eub2 . ltojpdf1ny , & iowqpk3eub2 . om2tfdfzpf , & iowqpk3eub2 .
mnx3jlre3e , & iowqpk3eub2 . dhr3me1nz0 , & iowqpk3eub2 . hreyyfol5z , &
iowqpk3eub2 . k45bb5csjy , & iowqpk3eub2 . era2dgtrck , & iowqpk3eub2 .
ghrf1v1zl1 , & iowqpk3eub2 . jwausjpzws , & iowqpk3eub2 . dd1hidzbwa , &
iowqpk3eub2 . jbgfcwpebf , & iowqpk3eub2 . gbaltmt113 , & iowqpk3eub2 .
nt3tznw0vu , & iowqpk3eub2 . bmuzvpozlw , & iowqpk3eub2 . jh3c41lpx2 , &
iowqpk3eub2 . nvxci0i4yu , & iowqpk3eub2 . auhfud24ib , & iowqpk3eub2 .
dqqdmdpyoe , & iowqpk3eub2 . pezbzcp2ij , & iowqpk3eub2 . f1ue2yetzx , &
iowqpk3eub2 . p1wsp4msvl , & iowqpk3eub2 . n3drdbfr2d , & iowqpk3eub2 .
mcfo01bafi , & iowqpk3eub2 . j3qtbjnizf , & iowqpk3eub2 . fuob0ddam2h .
motv0pybyv , & iowqpk3eub2 . dwnfs4t0ur . motv0pybyv , & iowqpk3eub2 .
jzqwpbqwdi [ 0 ] , & iowqpk3eub2 . mxj1ezdble [ 0 ] , & iowqpk3eub2 .
excv5bvsnq , & iowqpk3eub2 . pcflqp2d2t [ 0 ] , & iowqpk3eub2 . fyfoh3jqvh ,
& iowqpk3eub2 . cwrvyfrsdw [ 0 ] , & iowqpk3eub2 . irik5hamck [ 0 ] , &
iowqpk3eub2 . f35pdcffvo [ 0 ] , & iowqpk3eub2 . huhttmored [ 0 ] , &
iowqpk3eub2 . ma1olqmik5 [ 0 ] , & iowqpk3eub2 . lszyzcrgde [ 0 ] , &
iowqpk3eub2 . aw422d2u0j [ 0 ] , ( & iowqpk3eub2 . ma1olqmik5 [ 0 ] + 3 ) , (
& iowqpk3eub2 . ma1olqmik5 [ 0 ] + 1 ) , ( & iowqpk3eub2 . ma1olqmik5 [ 0 ] +
5 ) , & iowqpk3eub2 . hd2z2xy0lb [ 0 ] , & iowqpk3eub2 . dfzzklugat [ 0 ] , &
iowqpk3eub2 . oduhehvfwb , & iowqpk3eub2 . cb3a3cmvqi [ 0 ] , & iowqpk3eub2 .
irrzi1045j [ 0 ] , ( & iowqpk3eub2 . ma1olqmik5 [ 0 ] + 4 ) , & iowqpk3eub2 .
dop2xc5lh4 [ 0 ] , & iowqpk3eub2 . oyf1kknxky [ 0 ] , & iowqpk3eub2 .
p333nkuoxh , & iowqpk3eub2 . b4tu2y2jyw [ 0 ] , & iowqpk3eub2 . i42qwfv1dk [
0 ] , & iowqpk3eub2 . bvukyawnn2 [ 0 ] , ( & iowqpk3eub2 . i42qwfv1dk [ 0 ] +
3 ) , ( & iowqpk3eub2 . i42qwfv1dk [ 0 ] + 6 ) , & iowqpk3eub2 . mkoefhpy3s [
0 ] , & iowqpk3eub2 . kn03lhlboz [ 0 ] , & iowqpk3eub2 . nktxf2g2id [ 0 ] , &
iowqpk3eub2 . m5vbsnyz5y [ 0 ] , & iowqpk3eub2 . eoin413gqw [ 0 ] , &
iowqpk3eub2 . hamrym443t [ 0 ] , & iowqpk3eub2 . giviabarth [ 0 ] , ( &
iowqpk3eub2 . bvukyawnn2 [ 0 ] + 3 ) , & iowqpk3eub2 . i42qwfv1dk [ 0 ] , &
iowqpk3eub2 . araqn4x4bn , & iowqpk3eub2 . l5capshjmg , & iowqpk3eub2 .
do2ad42p4b , & iowqpk3eub2 . lvd3mg41ca , & iowqpk3eub2 . i44juxrctd , &
iowqpk3eub2 . flqzfbsj2v , & iowqpk3eub2 . f34sqchkix , & iowqpk3eub2 .
irlowhecsn , & iowqpk3eub2 . fv3tc4cscj , & iowqpk3eub2 . an5lcjhr21 [ 0 ] ,
& iowqpk3eub2 . jp5pcaboje [ 0 ] , & iowqpk3eub2 . mggaons4rn [ 0 ] , &
iowqpk3eub2 . an5lcjhr21 [ 0 ] , ( & iowqpk3eub2 . an5lcjhr21 [ 0 ] + 1 ) , &
iowqpk3eub2 . jp5pcaboje [ 0 ] , ( & iowqpk3eub2 . jp5pcaboje [ 0 ] + 1 ) , &
iowqpk3eub2 . e0ng4xzira [ 0 ] , & iowqpk3eub2 . pdtzd43pag [ 0 ] , &
iowqpk3eub2 . arewjxhwf2 [ 0 ] , & iowqpk3eub2 . gugymbw2iq [ 0 ] .
eq332hab4o . eqrog2hdmh , & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o .
aseqcyqgtw , & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o . dhjwhtydhg , &
iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o . adsixgkqky , & iowqpk3eub2 .
gugymbw2iq [ 0 ] . eq332hab4o . aseqcyqgtw , & iowqpk3eub2 . gugymbw2iq [ 0 ]
. eq332hab4o . dhjwhtydhg , & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o .
eqrog2hdmh , & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o . adsixgkqky , &
iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o . ost4s50i5x5 . ayfwykncou , &
iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o . bsy0pqewaju . myu2drybjk , &
iowqpk3eub2 . kggvpu401a , & iowqpk3eub2 . hr2pqxcus4 , & iowqpk3eub2 .
mzj01xvkrr , & iowqpk3eub2 . nxf5jr3qba , & iowqpk3eub2 . a24mklqmql , &
iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e . eykroya1zm , & iowqpk3eub2 .
ngpegw05gp [ 0 ] . neijo20b0e . j5ybwspdla , & iowqpk3eub2 . ngpegw05gp [ 0 ]
. neijo20b0e . pizt32ck1y , & iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e .
fjrzzbxuaj , & iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e . j5ybwspdla , &
iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e . pizt32ck1y , & iowqpk3eub2 .
ngpegw05gp [ 0 ] . neijo20b0e . eykroya1zm , & iowqpk3eub2 . ngpegw05gp [ 0 ]
. neijo20b0e . fjrzzbxuaj , & iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e .
pjngj1ll1b . ayfwykncou , & iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e .
o4j5vlwe14 . myu2drybjk , & iowqpk3eub2 . cjintpfg52 , & iowqpk3eub2 .
c1rn35nztg , & iowqpk3eub2 . dvwgmcheyq , & iowqpk3eub2 . adayadw0rs , &
iowqpk3eub2 . ekohgouk1y , & iowqpk3eub2 . kq0sl3ydh0 [ 0 ] , & iowqpk3eub2 .
ohiyphp5ep [ 0 ] , & iowqpk3eub2 . b0lxiysli2 [ 0 ] , & iowqpk3eub2 .
c2wzjcaepr [ 0 ] , ( & iowqpk3eub2 . kq0sl3ydh0 [ 0 ] + 3 ) , & iowqpk3eub2 .
kortgcvvps , & iowqpk3eub2 . cqrxigykwm , & iowqpk3eub2 . me1friqgpo , &
iowqpk3eub2 . ixwcnrrmnz , & iowqpk3eub2 . jxwxzdj1f1 , & iowqpk3eub2 .
cw0ygcscpp , & iowqpk3eub2 . oegjxatj1q , & iowqpk3eub2 . jca5e2ozdf , &
iowqpk3eub2 . oytg0154s1 , & iowqpk3eub2 . hbjjgcn42r , & iowqpk3eub2 .
cam22f11mr , & iowqpk3eub2 . jlkhwd1jet , & iowqpk3eub2 . ixgkgjvbsp , &
iowqpk3eub2 . l0jn2lsago , & iowqpk3eub2 . c3irmcv4ar , & iowqpk3eub2 .
mlr1surpas , & iowqpk3eub2 . ok34kzchcv , & iowqpk3eub2 . jnpzg142hx , &
iowqpk3eub2 . dknfaxifuu , & iowqpk3eub2 . hq4ll3qyzp , & iowqpk3eub2 .
jztvbzsesd , & iowqpk3eub2 . dfw11gckk0 , & iowqpk3eub2 . mnpes3j1iq , &
iowqpk3eub2 . nauemcaz3d , & iowqpk3eub2 . lieehcoatc , & iowqpk3eub2 .
ipitix1sph [ 0 ] , & iowqpk3eub2 . eiykk5beex [ 0 ] , & iowqpk3eub2 .
dnenu1vbpk [ 0 ] , & iowqpk3eub2 . k04ingjquh [ 3 ] . dombbngwxk [ 0 ] , &
iowqpk3eub2 . bor30mivo0 , & iowqpk3eub2 . eiobpiy5iw , & iowqpk3eub2 .
mdv0kbjtue , & iowqpk3eub2 . lbrhvvx0as , & iowqpk3eub2 . gugymbw2iq [ 0 ] .
eq332hab4o . eqrog2hdmh , & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o .
koua2ggizf0 . gnnfdeep31 , & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o .
koua2ggizf0 . dc1ukp4fgk , & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o .
koua2ggizf0 . irlsod2fw3 , & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o .
koua2ggizf0 . pqkyknwcy0 , & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o .
koua2ggizf0 . flv0itqepg , & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o .
koua2ggizf0 . l0ncirvkfw , & iowqpk3eub2 . ngroqkt0pw , & iowqpk3eub2 .
g3u0z4mibd , & iowqpk3eub2 . oblub0q0xy , & iowqpk3eub2 . cz5uwjohsf , &
iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e . eykroya1zm , & iowqpk3eub2 .
ngpegw05gp [ 0 ] . neijo20b0e . jl5e4qcf5y . gnnfdeep31 , & iowqpk3eub2 .
ngpegw05gp [ 0 ] . neijo20b0e . jl5e4qcf5y . dc1ukp4fgk , & iowqpk3eub2 .
ngpegw05gp [ 0 ] . neijo20b0e . jl5e4qcf5y . irlsod2fw3 , & iowqpk3eub2 .
ngpegw05gp [ 0 ] . neijo20b0e . jl5e4qcf5y . pqkyknwcy0 , & iowqpk3eub2 .
ngpegw05gp [ 0 ] . neijo20b0e . jl5e4qcf5y . flv0itqepg , & iowqpk3eub2 .
ngpegw05gp [ 0 ] . neijo20b0e . jl5e4qcf5y . l0ncirvkfw , & iowqpk3eub2 .
oon0lyzoaz , & iowqpk3eub2 . dcgngg1mg5 , & iowqpk3eub2 . gbv4umsqtz , &
iowqpk3eub2 . f3sljn1wd2 , & iowqpk3eub2 . fcf2vxrh2g , & iowqpk3eub2 .
fq0fiv3ziz , & iowqpk3eub2 . jinfsbbhky , & iowqpk3eub2 . lbbeqssvkc , &
iowqpk3eub2 . cvqlqdsndf , & iowqpk3eub2 . nriww5alsm , & iowqpk3eub2 .
haybfyc2q4 , & iowqpk3eub2 . fahxrqmdmd , & iowqpk3eub2 . dqkowwdyo5 , &
iowqpk3eub2 . njlftunr4h , & iowqpk3eub2 . ls3ug4yvlk , & iowqpk3eub2 .
eocs5on0jt , & iowqpk3eub2 . flbxxyyfom , & iowqpk3eub2 . d5pwtznta0 [ 0 ] ,
( & iowqpk3eub2 . d5pwtznta0 [ 0 ] + 3 ) , ( & iowqpk3eub2 . d5pwtznta0 [ 0 ]
+ 6 ) , ( & iowqpk3eub2 . d5pwtznta0 [ 0 ] + 1 ) , ( & iowqpk3eub2 .
d5pwtznta0 [ 0 ] + 4 ) , ( & iowqpk3eub2 . d5pwtznta0 [ 0 ] + 7 ) , ( &
iowqpk3eub2 . d5pwtznta0 [ 0 ] + 2 ) , ( & iowqpk3eub2 . d5pwtznta0 [ 0 ] + 5
) , ( & iowqpk3eub2 . d5pwtznta0 [ 0 ] + 8 ) , & iowqpk3eub2 . hdxvrl0b43 , &
iowqpk3eub2 . gfzt5manw2 , & iowqpk3eub2 . af01y0tyx5 , & iowqpk3eub2 .
gdnyk5p1e3 , & iowqpk3eub2 . k3isxzlaln , & iowqpk3eub2 . iaezmlrkox [ 0 ] ,
& iowqpk3eub2 . g3macyhggt [ 0 ] , & iowqpk3eub2 . k04ingjquh [ 3 ] .
bq14nuexev [ 0 ] , ( & iowqpk3eub2 . k04ingjquh [ 3 ] . bq14nuexev [ 0 ] + 3
) , ( & iowqpk3eub2 . k04ingjquh [ 3 ] . bq14nuexev [ 0 ] + 6 ) , ( &
iowqpk3eub2 . k04ingjquh [ 3 ] . bq14nuexev [ 0 ] + 1 ) , ( & iowqpk3eub2 .
k04ingjquh [ 3 ] . bq14nuexev [ 0 ] + 4 ) , ( & iowqpk3eub2 . k04ingjquh [ 3
] . bq14nuexev [ 0 ] + 7 ) , ( & iowqpk3eub2 . k04ingjquh [ 3 ] . bq14nuexev
[ 0 ] + 2 ) , ( & iowqpk3eub2 . k04ingjquh [ 3 ] . bq14nuexev [ 0 ] + 5 ) , (
& iowqpk3eub2 . k04ingjquh [ 3 ] . bq14nuexev [ 0 ] + 8 ) , & iowqpk3eub2 .
k04ingjquh [ 3 ] . cvsblo3jno [ 0 ] , & iowqpk3eub2 . pstm2khcrt [ 0 ] , &
iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o . bsy0pqewaju . myu2drybjk , &
iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e . o4j5vlwe14 . myu2drybjk , &
iowqpk3eub2 . jvwkib0hfu , & iowqpk3eub2 . lstfxdco4s , & iowqpk3eub2 .
obzquwaaiq , & iowqpk3eub2 . hey313hwyt , & iowqpk3eub2 . apvubbfw3c , &
iowqpk3eub2 . hbtxdpylgh , & iowqpk3eub2 . if14etsg0u , & iowqpk3eub2 .
d4sykcs5wk , & iowqpk3eub2 . hhoz5bkyag , & iowqpk3eub2 . er5iejwbmj , &
iowqpk3eub2 . c0212dk5n0 , & iowqpk3eub2 . a3se3uxsa0 , & iowqpk3eub2 .
a1jfohnbbb , & iowqpk3eub2 . d5pwtznta0 [ 0 ] , & iowqpk3eub2 . dyhmr3qcbv ,
& iowqpk3eub2 . fbzkojgyr0 , & iowqpk3eub2 . dsgbg2ev15 [ 0 ] , & iowqpk3eub2
. mybqcz32qe [ 0 ] , & iowqpk3eub2 . nbtpcxmbom [ 0 ] , & iowqpk3eub2 .
lfmebcy0qq [ 0 ] , & iowqpk3eub2 . ha5st20hrl [ 0 ] , & iowqpk3eub2 .
nbnkfdvqmr [ 0 ] , & iowqpk3eub2 . m2vaomzt5b [ 0 ] , & iowqpk3eub2 .
b0ut3x2rou [ 0 ] , & iowqpk3eub2 . k04ingjquh [ 3 ] . bq14nuexev [ 0 ] , &
iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o . ost4s50i5x5 . ayfwykncou , &
iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o . ost4s50i5x5 . mzqxxxozo5 , &
iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e . pjngj1ll1b . ayfwykncou , &
iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e . pjngj1ll1b . mzqxxxozo5 , &
iowqpk3eub2 . jo3zl1sua4 , & iowqpk3eub2 . phi3srvxtn , & iowqpk3eub2 .
lozlso34a1 , & iowqpk3eub2 . o22bitd451 , & iowqpk3eub2 . ngkymifojl , &
iowqpk3eub2 . f2i0rhb4j1 , & iowqpk3eub2 . djiotohjne , & iowqpk3eub2 .
li524emhoo , & iowqpk3eub2 . dlxs0ivr5u , & iowqpk3eub2 . dud1uvzkqh , &
iowqpk3eub2 . iafdmwbgzy , & iowqpk3eub2 . fqwiz5f4up , & iowqpk3eub2 .
lowpzb4o0j , & iowqpk3eub2 . p5vgig23ib , & iowqpk3eub2 . kzthjajhu2 , &
iowqpk3eub2 . b1002ja30r , & iowqpk3eub2 . nrrsykecbr , & iowqpk3eub2 .
hj1vvcjcba , & iowqpk3eub2 . iwn3v1eud0 [ 0 ] , ( & iowqpk3eub2 . iwn3v1eud0
[ 0 ] + 3 ) , ( & iowqpk3eub2 . iwn3v1eud0 [ 0 ] + 6 ) , ( & iowqpk3eub2 .
iwn3v1eud0 [ 0 ] + 1 ) , ( & iowqpk3eub2 . iwn3v1eud0 [ 0 ] + 4 ) , ( &
iowqpk3eub2 . iwn3v1eud0 [ 0 ] + 7 ) , ( & iowqpk3eub2 . iwn3v1eud0 [ 0 ] + 2
) , ( & iowqpk3eub2 . iwn3v1eud0 [ 0 ] + 5 ) , ( & iowqpk3eub2 . iwn3v1eud0 [
0 ] + 8 ) , & iowqpk3eub2 . cueeis35rw [ 0 ] , & iowqpk3eub2 . kfyckqnkve [ 0
] , & iowqpk3eub2 . dahbupbiyl [ 0 ] , ( & iowqpk3eub2 . dahbupbiyl [ 0 ] + 3
) , ( & iowqpk3eub2 . dahbupbiyl [ 0 ] + 6 ) , ( & iowqpk3eub2 . dahbupbiyl [
0 ] + 1 ) , ( & iowqpk3eub2 . dahbupbiyl [ 0 ] + 4 ) , ( & iowqpk3eub2 .
dahbupbiyl [ 0 ] + 7 ) , ( & iowqpk3eub2 . dahbupbiyl [ 0 ] + 2 ) , ( &
iowqpk3eub2 . dahbupbiyl [ 0 ] + 5 ) , ( & iowqpk3eub2 . dahbupbiyl [ 0 ] + 8
) , & iowqpk3eub2 . i35om0deks [ 0 ] , & iowqpk3eub2 . ieuul0ehou [ 0 ] , &
iowqpk3eub2 . iwn3v1eud0 [ 0 ] , & iowqpk3eub2 . oobfcqh5ys , & iowqpk3eub2 .
hbi3xwos1i , & iowqpk3eub2 . nc1n0ec5qh , & iowqpk3eub2 . j0r5bjaq2v , &
iowqpk3eub2 . a1ph325uji , & iowqpk3eub2 . jaeul1jr5j , & iowqpk3eub2 .
dahbupbiyl [ 0 ] , & iowqpk3eub2 . f3b5qs3y2i , & iowqpk3eub2 . ogn0f5pp4g ,
& iowqpk3eub2 . k0hqlnc5zr , & iowqpk3eub2 . ankpmmyhrc , & iowqpk3eub2 .
lqcbudindy , & iowqpk3eub2 . lhxhxansdi , & kjmvupbl2i . Gain_Gain_aepvwbsvgj
, & kjmvupbl2i . Integrator_IC_aozxujrrto , & kjmvupbl2i .
Gain_Gain_anjvar3enl , & kjmvupbl2i . Gain1_Gain_b2x0xrdboa , & kjmvupbl2i .
GradeSource_CurrentSetting , & kjmvupbl2i . FirstOrderHold1_IniOut , &
kjmvupbl2i . FirstOrderHold1_ErrTol , & kjmvupbl2i . FirstOrderHold_IniOut ,
& kjmvupbl2i . FirstOrderHold_ErrTol , & kjmvupbl2i . mtokm_Gain , &
kjmvupbl2i . mtomi_Gain , & kjmvupbl2i . Integrator_IC_m2ei5srufe , &
kjmvupbl2i . Integrator1_IC_exhcff4x2k , & kjmvupbl2i . Integrator2_IC , &
kjmvupbl2i . Integrator3_IC , & kjmvupbl2i . Integrator4_IC , & kjmvupbl2i .
Saturation_UpperSat_petchupvyj , & kjmvupbl2i .
Saturation_LowerSat_deqaxwlb4p , & kjmvupbl2i .
Saturation1_UpperSat_jybwri54h2 , & kjmvupbl2i .
Saturation1_LowerSat_indvuhds5q , & kjmvupbl2i .
USEPAkwhUSgalequivalent_Value , & kjmvupbl2i . sperh_Value , & kjmvupbl2i .
wperkw_Value , & kjmvupbl2i . mto100Km_Gain , & kjmvupbl2i . mtomile_Gain , &
kjmvupbl2i . m3pergal_Gain , & kjmvupbl2i . m3toUSGal_Gain , & kjmvupbl2i .
Integrator_IC_giy1ho51ik , & kjmvupbl2i . Integrator1_IC_b5h1v25iea , &
kjmvupbl2i . Saturation_UpperSat_ffmhckns0u , & kjmvupbl2i .
Saturation_LowerSat_git52jcjbr , & kjmvupbl2i . Saturation1_UpperSat , &
kjmvupbl2i . Saturation1_LowerSat , & kjmvupbl2i . Constant_Value_hmxpxo4t1j
, & kjmvupbl2i . Constant1_Value_m0radogykp [ 0 ] , & kjmvupbl2i .
Constant10_Value_ok4kguqinp , & kjmvupbl2i . Constant11_Value_doz0cijqot , &
kjmvupbl2i . Constant12_Value_lr1o3jzrdw , & kjmvupbl2i .
Constant2_Value_cv5k10omis , & kjmvupbl2i . Constant3_Value_hsmcqc2qzw , &
kjmvupbl2i . Constant6_Value_ntv4lpcswr , & kjmvupbl2i .
Constant7_Value_dyep4qzmxf , & kjmvupbl2i . Constant8_Value_orsngthdfl , &
kjmvupbl2i . Constant9_Value_bderlrgqtg , & kjmvupbl2i .
CompareToConstant_const , & kjmvupbl2i . CompareToConstant1_const , &
kjmvupbl2i . CompareToConstant2_const , & kjmvupbl2i .
CompareToConstant3_const , & kjmvupbl2i . CompareToConstant4_const , &
kjmvupbl2i . DeadZone_Start , & kjmvupbl2i . DeadZone_End , & kjmvupbl2i .
DeadZone2_Start , & kjmvupbl2i . DeadZone2_End , & kjmvupbl2i .
DeadZone3_Start , & kjmvupbl2i . DeadZone3_End , & kjmvupbl2i .
MotorCouplingDynamics_A , & kjmvupbl2i . MotorCouplingDynamics_C , &
kjmvupbl2i . ClsdLpFuelMult_Value , & kjmvupbl2i . EngSpd_Value , &
kjmvupbl2i . EngTrq_Value , & kjmvupbl2i . FuelVolFlw_Value , & kjmvupbl2i .
TPCO_Value , & kjmvupbl2i . TPCO2_Value , & kjmvupbl2i . TPHC_Value , &
kjmvupbl2i . TPNOx_Value , & kjmvupbl2i . DeadZone1_Start , & kjmvupbl2i .
DeadZone1_End , & kjmvupbl2i . repeat_Value , & kjmvupbl2i . tFinal_Value , &
kjmvupbl2i . HitCrossing_Offset , & kjmvupbl2i . uDLookupTable_tableData [ 0
] , & kjmvupbl2i . uDLookupTable_bp01Data [ 0 ] , & kjmvupbl2i .
Switch_Threshold , & kjmvupbl2i . DeadZone_Start_md5ahj13hx , & kjmvupbl2i .
DeadZone_End_lo1jymlqtv , & kjmvupbl2i . VehicleBody3DOFLongitudinal_zdot_o ,
& kjmvupbl2i . VehicleBody3DOFLongitudinal_theta_o , & kjmvupbl2i .
VehicleBody3DOFLongitudinal_q_o , & kjmvupbl2i .
VehicleBody3DOFLongitudinal_FskF [ 0 ] , & kjmvupbl2i .
VehicleBody3DOFLongitudinal_dzsF [ 0 ] , & kjmvupbl2i .
VehicleBody3DOFLongitudinal_FsbF [ 0 ] , & kjmvupbl2i .
VehicleBody3DOFLongitudinal_dzdotsF [ 0 ] , & kjmvupbl2i .
VehicleBody3DOFLongitudinal_FskR [ 0 ] , & kjmvupbl2i .
VehicleBody3DOFLongitudinal_dzsR [ 0 ] , & kjmvupbl2i .
VehicleBody3DOFLongitudinal_FsbR [ 0 ] , & kjmvupbl2i .
VehicleBody3DOFLongitudinal_dzdotsR [ 0 ] , & kjmvupbl2i .
Integrator2_IC_fjcqqry33i , & kjmvupbl2i . UnitDelay_InitialCondition [ 0 ] ,
& kjmvupbl2i . Integrator1_IC_mwxgl4nrr1 , & kjmvupbl2i . FExtConstant_Value
[ 0 ] , & kjmvupbl2i . MExtConstant_Value [ 0 ] , & kjmvupbl2i .
Integrator1_IC_mcnartj4ei , & kjmvupbl2i . Integrator1_IC_iuffdm3tby , &
kjmvupbl2i . FxType_Value , & kjmvupbl2i . rollType_Value , & kjmvupbl2i .
vertType_Value , & kjmvupbl2i . FxType_Value_ia5teaumdj , & kjmvupbl2i .
rollType_Value_antrfjfwjn , & kjmvupbl2i . vertType_Value_gb2pmxm2ig , &
kjmvupbl2i . Constant1_Value , & kjmvupbl2i . Constant3_Value , & kjmvupbl2i
. LithiumIonBatteryPack_Vinit , & kjmvupbl2i . SOCRatioto_Gain , & kjmvupbl2i
. SignalHold_IC , & kjmvupbl2i . Constant_Value_i0lrc5dd0p , & kjmvupbl2i .
u1_UpperSat , & kjmvupbl2i . u1_LowerSat , & kjmvupbl2i . Saturation_UpperSat
, & kjmvupbl2i . Saturation_LowerSat , & kjmvupbl2i . Integrator1_IC , &
kjmvupbl2i . SignalHold_IC_bl0xhwyuht , & kjmvupbl2i .
Constant_Value_lmvdjicp50 , & kjmvupbl2i . u0_UpperSat , & kjmvupbl2i .
u0_LowerSat , & kjmvupbl2i . Saturation_UpperSat_ncjkk1jucd , & kjmvupbl2i .
Saturation_LowerSat_g5xnm5rrtb , & kjmvupbl2i . Constant_Value_gn4owpvnhh , &
kjmvupbl2i . Constant1_Value_krev4j2l44 , & kjmvupbl2i . Signconvention_Gain
, & kjmvupbl2i . Saturation_UpperSat_bopsnau5hk , & kjmvupbl2i .
Saturation_LowerSat_dbw20intcx , & kjmvupbl2i .
Signconvention_Gain_mp05x1ag5n , & kjmvupbl2i .
Saturation_UpperSat_bsj0f3al0o , & kjmvupbl2i .
Saturation_LowerSat_ju3hf2ul0w , & kjmvupbl2i . Constant_Value_nagsezfz0a , &
kjmvupbl2i . Constant1_Value_e5rtc4313u , & kjmvupbl2i .
Constant2_Value_mgh0x4uagx , & kjmvupbl2i . Constant3_Value_mvlje44lcv , &
kjmvupbl2i . Constant_Value_mx4nhpobes , & kjmvupbl2i .
Constant1_Value_fzmubeu2l0 , & kjmvupbl2i . Constant2_Value_byckym2ock , &
kjmvupbl2i . Constant3_Value_c4qtutqm5t , & kjmvupbl2i .
Constant_Value_drg3tscxmg , & kjmvupbl2i . Constant1_Value_mtzuqwvwq1 , &
kjmvupbl2i . Constant2_Value_m2qnkpfbgc , & kjmvupbl2i .
Constant3_Value_cco4fo4joe , & kjmvupbl2i . Constant_Value_bj45letrrr , &
kjmvupbl2i . Constant1_Value_mjx3l44xzr , & kjmvupbl2i .
Constant2_Value_gwwihg3nf5 , & kjmvupbl2i . Constant3_Value_otshnnfmem , &
kjmvupbl2i . Constant_Value , & kjmvupbl2i . Constant_Value_agm4xpnhd5 , &
kjmvupbl2i . uDOFBodyAxes_v_ini , & kjmvupbl2i . uDOFBodyAxes_pos_ini [ 0 ] ,
& kjmvupbl2i . uDOFBodyAxes_g , & kjmvupbl2i . DragForce_beta_w [ 0 ] , &
kjmvupbl2i . DragForce_Cs [ 0 ] , & kjmvupbl2i . DragForce_Cym [ 0 ] , &
kjmvupbl2i . DragForce_R , & kjmvupbl2i . Constant_Value_o0rfnlk4rs , &
kjmvupbl2i . Constant1_Value_lrolnezkiq , & kjmvupbl2i . Constant10_Value , &
kjmvupbl2i . Constant11_Value , & kjmvupbl2i . Constant2_Value , & kjmvupbl2i
. Constant3_Value_m0hpy20xls , & kjmvupbl2i . Constant4_Value , & kjmvupbl2i
. Constant5_Value , & kjmvupbl2i . Constant6_Value , & kjmvupbl2i .
Constant7_Value , & kjmvupbl2i . Constant8_Value , & kjmvupbl2i .
Constant9_Value , & kjmvupbl2i . Constant_Value_ox4b0qmmua , & kjmvupbl2i .
Constant1_Value_madrljuz5s , & kjmvupbl2i . Constant12_Value_i31yk0uobv [ 0 ]
, & kjmvupbl2i . Constant14_Value [ 0 ] , & kjmvupbl2i . Constant19_Value [ 0
] , & kjmvupbl2i . Constant2_Value_hrl4h1nv5h [ 0 ] , & kjmvupbl2i .
Constant6_Value_haqashkspo , & kjmvupbl2i . Constant7_Value_jw4525ferj , &
kjmvupbl2i . Constant1_Value_mn3owz1rml , & kjmvupbl2i .
Constant10_Value_avvpfk2yix , & kjmvupbl2i . Constant11_Value_nocbm1rgns , &
kjmvupbl2i . Constant12_Value_farpfklrnv [ 0 ] , & kjmvupbl2i .
Constant14_Value_lybnj0wjpu [ 0 ] , & kjmvupbl2i . Constant16_Value , &
kjmvupbl2i . Constant19_Value_oenymaoxve [ 0 ] , & kjmvupbl2i .
Constant2_Value_oxwaq1rttm , & kjmvupbl2i . Constant3_Value_k0ow21geiu , &
kjmvupbl2i . Constant5_Value_dacbkkfpn1 , & kjmvupbl2i .
Constant7_Value_foxxbjtyrb , & kjmvupbl2i . Constant9_Value_eysw0sbbzh , &
kjmvupbl2i . Constant1_Value_cfz1jt3mva , & kjmvupbl2i .
Constant10_Value_mqgatp2bxz , & kjmvupbl2i . Constant11_Value_b51kwi1veq , &
kjmvupbl2i . Constant13_Value , & kjmvupbl2i . Constant14_Value_lvkuq2smhk ,
& kjmvupbl2i . Constant15_Value , & kjmvupbl2i . Constant16_Value_lkmy5w415o
, & kjmvupbl2i . Constant17_Value , & kjmvupbl2i . Constant18_Value , &
kjmvupbl2i . Constant19_Value_n1gnmpmhhz , & kjmvupbl2i .
Constant2_Value_oss1gtz0qr , & kjmvupbl2i . Constant20_Value , & kjmvupbl2i .
Constant21_Value , & kjmvupbl2i . Constant22_Value , & kjmvupbl2i .
Constant23_Value , & kjmvupbl2i . Constant24_Value , & kjmvupbl2i .
Constant3_Value_cfl5diz1lh , & kjmvupbl2i . Constant4_Value_fhufcungmj , &
kjmvupbl2i . Constant5_Value_a24smbxcxn , & kjmvupbl2i .
Constant6_Value_gp2r5vw2mo , & kjmvupbl2i . Constant7_Value_k2q5ccyqdb , &
kjmvupbl2i . Constant8_Value_h25n4izmhu , & kjmvupbl2i .
Constant9_Value_drrybtftp2 , & kjmvupbl2i . Constant_Value_lrohdfumq0 , &
kjmvupbl2i . Constant1_Value_axx41mppte , & kjmvupbl2i .
Constant12_Value_ivwhvv2f32 [ 0 ] , & kjmvupbl2i .
Constant14_Value_lrrto4y5wk [ 0 ] , & kjmvupbl2i .
Constant19_Value_dpn5hbziwd [ 0 ] , & kjmvupbl2i . Constant2_Value_iowj05grf3
[ 0 ] , & kjmvupbl2i . Constant6_Value_fa5rtppirt , & kjmvupbl2i .
Constant7_Value_i21l0p1igp , & kjmvupbl2i . Constant1_Value_ijjucdpx4z , &
kjmvupbl2i . Constant10_Value_chawn1iunv , & kjmvupbl2i .
Constant11_Value_k5z1c1pccv , & kjmvupbl2i . Constant12_Value_p41n2rkj3c [ 0
] , & kjmvupbl2i . Constant14_Value_iudgfqgatl [ 0 ] , & kjmvupbl2i .
Constant16_Value_outaov0n1i , & kjmvupbl2i . Constant19_Value_carumowgfd [ 0
] , & kjmvupbl2i . Constant2_Value_btgexx4rdf , & kjmvupbl2i .
Constant3_Value_kd1cdwvsmq , & kjmvupbl2i . Constant5_Value_nrupuvlr2x , &
kjmvupbl2i . Constant7_Value_jc1h2p4tmo , & kjmvupbl2i .
Constant9_Value_bpp23kljtg , & kjmvupbl2i . Constant1_Value_lssuufufgs , &
kjmvupbl2i . Constant10_Value_beeuojsfr5 , & kjmvupbl2i .
Constant11_Value_hxdnpy4b1i , & kjmvupbl2i . Constant13_Value_j2lsewktzu , &
kjmvupbl2i . Constant14_Value_ejjg4lvjbm , & kjmvupbl2i .
Constant15_Value_fipekdq3rg , & kjmvupbl2i . Constant16_Value_ouvmeicr45 , &
kjmvupbl2i . Constant17_Value_m0zpppdh3a , & kjmvupbl2i .
Constant18_Value_pgi4gobtba , & kjmvupbl2i . Constant19_Value_ie2icqjt3r , &
kjmvupbl2i . Constant2_Value_gto0akxltq , & kjmvupbl2i .
Constant20_Value_iazvmhwnvz , & kjmvupbl2i . Constant21_Value_ellpoqjiq3 , &
kjmvupbl2i . Constant22_Value_bc01pf1do2 , & kjmvupbl2i .
Constant23_Value_njgl4ivha2 , & kjmvupbl2i . Constant24_Value_ocljdcjnlv , &
kjmvupbl2i . Constant3_Value_pwu4uracio , & kjmvupbl2i .
Constant4_Value_hwugnn04il , & kjmvupbl2i . Constant5_Value_gfvvgq5u2g , &
kjmvupbl2i . Constant6_Value_bhkz5yhocd , & kjmvupbl2i .
Constant7_Value_ht4v3ntoks , & kjmvupbl2i . Constant8_Value_dxmm43aqzd , &
kjmvupbl2i . Constant9_Value_c24m3kfu3n , & kjmvupbl2i .
OpenDifferential_shaftSwitchMask , & kjmvupbl2i . Integrator_UpperSat , &
kjmvupbl2i . Integrator_LowerSat , & kjmvupbl2i . Reset_Value_huedlplppt , &
kjmvupbl2i . Memory_InitialCondition_cwhmkrh11u , & kjmvupbl2i .
div0protectabspoly_thresh , & kjmvupbl2i . MatrixGain_Gain [ 0 ] , &
kjmvupbl2i . Theta_WrappedStateUpperValue , & kjmvupbl2i .
Theta_WrappedStateLowerValue , & kjmvupbl2i . Constant4_Value_an3au0uy5w [ 0
] , & kjmvupbl2i . u_Gain [ 0 ] , & kjmvupbl2i . Crm_tableData [ 0 ] , &
kjmvupbl2i . Crm_bp01Data [ 0 ] , & kjmvupbl2i . Gain_Gain [ 0 ] , &
kjmvupbl2i . Gain1_Gain [ 0 ] , & kjmvupbl2i . NFNR_Gain [ 0 ] , & kjmvupbl2i
. NFNRb_Gain [ 0 ] , & kjmvupbl2i . NFNRk_Gain [ 0 ] , & kjmvupbl2i .
Integrator_IC_h1e41bii31 , & kjmvupbl2i . Integrator_IC_k10nspe4rb , &
kjmvupbl2i . Constant_Value_iehwwg2crd , & kjmvupbl2i .
Constant1_Value_a0no2aojio , & kjmvupbl2i . Gain1_Gain_fidaxlyian , &
kjmvupbl2i . Switch_Threshold_gdeuynuela , & kjmvupbl2i . Reset_Value , &
kjmvupbl2i . Memory_InitialCondition , & kjmvupbl2i . Reset_Value_lzuzrr2wh5
, & kjmvupbl2i . Memory_InitialCondition_le3kqxuyfm , & kjmvupbl2i .
Saturation_UpperSat_eo55tnq2by , & kjmvupbl2i .
Saturation_LowerSat_l32n30czhn , & kjmvupbl2i .
uDLookupTable_tableData_boreho334u [ 0 ] , & kjmvupbl2i .
uDLookupTable_bp01Data_j0jelwswp2 [ 0 ] , & kjmvupbl2i .
uDLookupTable_bp02Data [ 0 ] , & kjmvupbl2i . uDLookupTable_maxIndex [ 0 ] ,
& kjmvupbl2i . Integrator_IC , & kjmvupbl2i .
Interpolatedzerocrossing_tableData [ 0 ] , & kjmvupbl2i .
Interpolatedzerocrossing_bp01Data [ 0 ] , & kjmvupbl2i .
MaxTorqueLimit_tableData [ 0 ] , & kjmvupbl2i . MaxTorqueLimit_bp01Data [ 0 ]
, & kjmvupbl2i . Constant2_Value_pdymtmke3u , & kjmvupbl2i .
Constant_Value_fqa2j2pnak , & kjmvupbl2i . Constant1_Value_ieeszgtdrd , &
kjmvupbl2i . Constant12_Value , & kjmvupbl2i . Constant2_Value_k1kw5pzbeu , &
kjmvupbl2i . k04ingjquh . phi_Value , & kjmvupbl2i . k04ingjquh . psi_Value ,
& kjmvupbl2i . TorqueConversion1_Gain , & kjmvupbl2i .
DisallowNegativeBrakeTorque_UpperSat , & kjmvupbl2i .
DisallowNegativeBrakeTorque_LowerSat , & kjmvupbl2i . gugymbw2iq . eq332hab4o
. er0qshcg2fb . Constant_Value , & kjmvupbl2i . gugymbw2iq . eq332hab4o .
er0qshcg2fb . Constant1_Value , & kjmvupbl2i . gugymbw2iq . eq332hab4o .
er0qshcg2fb . Constant2_Value , & kjmvupbl2i . gugymbw2iq . eq332hab4o .
koua2ggizf0 . u_Gain , & kjmvupbl2i . gugymbw2iq . eq332hab4o . ost4s50i5x5 .
yn_Y0 , & kjmvupbl2i . gugymbw2iq . eq332hab4o . ost4s50i5x5 . Constant_Value
, & kjmvupbl2i . gugymbw2iq . eq332hab4o . bsy0pqewaju . yn_Y0 , & kjmvupbl2i
. TorqueConversion1_Gain_oj0lwphizv , & kjmvupbl2i .
DisallowNegativeBrakeTorque_UpperSat_o1kzlkoiof , & kjmvupbl2i .
DisallowNegativeBrakeTorque_LowerSat_dih5vnpzw3 , & kjmvupbl2i . ngpegw05gp .
neijo20b0e . n4c32cozqj . Constant_Value , & kjmvupbl2i . ngpegw05gp .
neijo20b0e . n4c32cozqj . Constant1_Value , & kjmvupbl2i . ngpegw05gp .
neijo20b0e . n4c32cozqj . Constant2_Value , & kjmvupbl2i . ngpegw05gp .
neijo20b0e . jl5e4qcf5y . u_Gain , & kjmvupbl2i . ngpegw05gp . neijo20b0e .
pjngj1ll1b . yn_Y0 , & kjmvupbl2i . ngpegw05gp . neijo20b0e . pjngj1ll1b .
Constant_Value , & kjmvupbl2i . ngpegw05gp . neijo20b0e . o4j5vlwe14 . yn_Y0
, & kjmvupbl2i . Constant_Value_khdc5alm40 , & kjmvupbl2i .
Switch_Threshold_avxmrzxuk0 , & kjmvupbl2i . Constant_Value_p1rckdatju , &
kjmvupbl2i . Switch_Threshold_gyzjwoigpp , & kjmvupbl2i .
Constant_Value_oz0y4pnsuv , & kjmvupbl2i . Switch_Threshold_ga0yoodqm3 , &
kjmvupbl2i . IntegratorLimited_LowerSat , & kjmvupbl2i . Em_tableData [ 0 ] ,
& kjmvupbl2i . Em_bp01Data [ 0 ] , & kjmvupbl2i . R_maxIndex [ 0 ] , &
kjmvupbl2i . uNF_Gain , & kjmvupbl2i . uNR_Gain , & kjmvupbl2i .
HardPointCoordinateTransformFront_R_T2 , & kjmvupbl2i .
HardPointCoordinateTransformRear_R_T2 , & kjmvupbl2i .
Constant_Value_bhk4qsr3vd , & kjmvupbl2i . Constant_Value_fgrzpiya5g , &
kjmvupbl2i . Constant6_Value_m2h55yhwr4 , & kjmvupbl2i . Switch1_Threshold ,
& kjmvupbl2i . Constant_Value_fuym3tk21u , & kjmvupbl2i .
Constant_Value_hjedmjpnna , & kjmvupbl2i . Constant_Value_nr1euqdfq2 , &
kjmvupbl2i . gugymbw2iq . eq332hab4o . ost4s50i5x5 . CombinatorialLogic_table
[ 0 ] , & kjmvupbl2i . gugymbw2iq . eq332hab4o . ost4s50i5x5 .
UnitDelay_InitialCondition , & kjmvupbl2i . ngpegw05gp . neijo20b0e .
pjngj1ll1b . CombinatorialLogic_table [ 0 ] , & kjmvupbl2i . ngpegw05gp .
neijo20b0e . pjngj1ll1b . UnitDelay_InitialCondition , & kjmvupbl2i .
Constant1_Value_aimltjen1o , & kjmvupbl2i . Gain_Gain_pcvx1pzleq , &
kjmvupbl2i . Gain1_Gain_ffmnri5gvm , & kjmvupbl2i . Gain2_Gain_nrz2w3wsty , &
kjmvupbl2i . Constant1_Value_a4s255zunz , & kjmvupbl2i . Gain_Gain_aswlq0g5zi
, & kjmvupbl2i . Gain1_Gain_myke1ppinz , & kjmvupbl2i . Gain2_Gain_cs3tlkzyou
, & kjmvupbl2i . Constant1_Value_nx3a4k3tdd , & kjmvupbl2i .
Gain_Gain_mtqxhf4gg3 , & kjmvupbl2i . Gain1_Gain_ii2idyqiil , & kjmvupbl2i .
Gain2_Gain , & chmgkez0tpf . iysy5igbzt , & chmgkez0tpf . lywux4fr45 , &
chmgkez0tpf . igaknrnpbi , & chmgkez0tpf . fnlgzvne04 , & chmgkez0tpf .
blfalouxud , & chmgkez0tpf . icfrc3vdyk , & chmgkez0tpf . bhmvyo1hjl , &
chmgkez0tpf . iarnkoswlx , & chmgkez0tpf . ovuztebk3m , & chmgkez0tpf .
e3mnx1zztt , & cz5yqt3r3xb . ovftuesk53 [ 0 ] , & chmgkez0tpf . fs3asrx1bi [
0 ] , & chmgkez0tpf . gqe2iwaq4w , & chmgkez0tpf . loymnatkey , & chmgkez0tpf
. h3jcgsxl3g , & chmgkez0tpf . ftygsqggs5 , & chmgkez0tpf . kkyrf40rpz [ 0 ]
, & chmgkez0tpf . b3wjkyrln3 , & chmgkez0tpf . hlouk1zoiv , & chmgkez0tpf .
hzhiczi0l3 , & chmgkez0tpf . ozjmimh0zs , & chmgkez0tpf . idw3fynbuy , &
chmgkez0tpf . lz5qf1zk2o [ 0 ] , & chmgkez0tpf . frrsnlydio , & chmgkez0tpf .
nu0uj5bmhw [ 0 ] , & chmgkez0tpf . dnh4xblb2m , & chmgkez0tpf . gvprqgkyrb ,
& chmgkez0tpf . njzuxe2cj0 , & chmgkez0tpf . gd53vwvy1z , & chmgkez0tpf .
hys5vfyni2 , & chmgkez0tpf . ptjew1tdci , & chmgkez0tpf . bkhbsrsujg , &
chmgkez0tpf . ifte0hcjd1 , & rtP__CtrlVcuEvBattChrgPwrMax2f2EvVCU_sldd_ , &
rtP__CtrlVcuEvBattDischrgPwrMax2f2EvVCU_sldd_ ,
rtP__CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_ ,
rtP__CtrlVcuEvDischrgLmtBpt2f2EvVCU_sldd_ ,
rtP__CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_ ,
rtP__CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_ ,
rtP__CtrlVcuEvSocBpt2f2EvVCU_sldd_ , & rtP__DriverAeroRes2f2Driver_sldd_ , &
rtP__DriverDrivelineRes2f2Driver_sldd_ , &
rtP__DriverInitialGear2f2Driver_sldd_ , &
rtP__DriverPreviewDist2f2Driver_sldd_ , & rtP__DriverRollRes2f2Driver_sldd_ ,
& rtP__DriverShiftTime2f2Driver_sldd_ , & rtP__DriverTimeConst2f2Driver_sldd_
, & rtP__DriverTractiveForce2f2Driver_sldd_ , &
rtP__EnvAbsPrs2f2Environment_sldd_ , & rtP__EnvAirTemp2f2Environment_sldd_ ,
& rtP__EnvGrvty2f2Environment_sldd_ , &
rtP__EnvNomFrictionScaling2f2Environment_sldd_ , &
rtP__EnvNominalGrade2f2Environment_sldd_ , &
rtP__EnvWindVelX2f2Environment_sldd_ , & rtP__EnvWindVelY2f2Environment_sldd_
, & rtP__EnvWindVelZ2f2Environment_sldd_ ,
rtP__PlntBattIntrnRes2f2BatteryDCDC_sldd_ , &
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ , &
rtP__PlntBattNumCellSer2f2BatteryDCDC_sldd_ ,
rtP__PlntBattSocBpt2f2BatteryDCDC_sldd_ ,
rtP__PlntBattTempBpt2f2BatteryDCDC_sldd_ , &
rtP__PlntBattTimeCnst2f2BatteryDCDC_sldd_ , &
rtP__PlntBrkActrBoreFrnt2f2PassVeh_sldd_ , &
rtP__PlntBrkActrBoreRear2f2PassVeh_sldd_ , &
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ , &
rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ , &
rtP__PlntBrkKinFricCffRear2f2PassVeh_sldd_ , &
rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ , &
rtP__PlntBrkNumPadsRear2f2PassVeh_sldd_ , &
rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ , &
rtP__PlntBrkPadMeanRadiusRear2f2PassVeh_sldd_ , &
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ , & rtP__PlntBrkRearBias2f2PassVeh_sldd_
, & rtP__PlntBrkStcFricCffFrnt2f2PassVeh_sldd_ , &
rtP__PlntBrkStcFricCffRear2f2PassVeh_sldd_ , & rtP__PlntBrkWc2f2PassVeh_sldd_
, & rtP__PlntDiffrntlAxl1Damp2f2Drivetrain_sldd_ , &
rtP__PlntDiffrntlAxl1Inertia2f2Drivetrain_sldd_ , &
rtP__PlntDiffrntlAxl1InitVel2f2Drivetrain_sldd_ , &
rtP__PlntDiffrntlAxl2Damp2f2Drivetrain_sldd_ , &
rtP__PlntDiffrntlAxl2Inertia2f2Drivetrain_sldd_ , &
rtP__PlntDiffrntlAxl2InitVel2f2Drivetrain_sldd_ , &
rtP__PlntDiffrntlCarrDamp2f2Drivetrain_sldd_ , &
rtP__PlntDiffrntlCarrInertia2f2Drivetrain_sldd_ , &
rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ , &
rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ , &
rtP__PlntDriveshftDamp2f2Drivetrain_sldd_ , &
rtP__PlntDriveshftDampCutoffFreq2f2Drivetrain_sldd_ , &
rtP__PlntDriveshftInitDeflect2f2Drivetrain_sldd_ , &
rtP__PlntDriveshftInitVel2f2Drivetrain_sldd_ , &
rtP__PlntDriveshftStiff2f2Drivetrain_sldd_ , &
rtP__PlntEM1Damp2f2Drivetrain_sldd_ , &
rtP__PlntEM1Inertia2f2Drivetrain_sldd_ , &
rtP__PlntEM1InitVel2f2Drivetrain_sldd_ , &
rtP__PlntEM1TimeCnst2f2ElectricMachine1_sldd_ , &
rtP__PlntVehAeroDragCff2f2PassVeh_sldd_ , &
rtP__PlntVehAeroFrntArea2f2PassVeh_sldd_ , &
rtP__PlntVehAeroLiftCff2f2PassVeh_sldd_ , &
rtP__PlntVehAeroPitchCff2f2PassVeh_sldd_ , &
rtP__PlntVehCGHgtAxl2f2PassVeh_sldd_ , &
rtP__PlntVehDstCGFrntAxl2f2PassVeh_sldd_ , &
rtP__PlntVehDstCGRearAxl2f2PassVeh_sldd_ , &
rtP__PlntVehFzFlt2f2PassVeh_sldd_ , & rtP__PlntVehInitLongVel2f2PassVeh_sldd_
, & rtP__PlntVehMass2f2PassVeh_sldd_ , &
rtP__PlntVehPitchMomentInertia2f2PassVeh_sldd_ , &
rtP__PlntWhlDampCoeffFrnt2f2PassVeh_sldd_ , &
rtP__PlntWhlDampCoeffRear2f2PassVeh_sldd_ , &
rtP__PlntWhlInertiaFrnt2f2PassVeh_sldd_ , &
rtP__PlntWhlInertiaRear2f2PassVeh_sldd_ , &
rtP__PlntWhlInitAngVel2f2PassVeh_sldd_ , &
rtP__PlntWhlLdRadius2f2PassVeh_sldd_ , &
rtP__PlntWhlLnrVelForceComp2f2PassVeh_sldd_ , &
rtP__PlntWhlMaxFz2f2PassVeh_sldd_ , &
rtP__PlntWhlMaxSlipRatio2f2PassVeh_sldd_ , &
rtP__PlntWhlMinFz2f2PassVeh_sldd_ , &
rtP__PlntWhlNrmlForceExp2f2PassVeh_sldd_ , &
rtP__PlntWhlPrsFrnt2f2PassVeh_sldd_ , & rtP__PlntWhlPrsRear2f2PassVeh_sldd_ ,
& rtP__PlntWhlQuadVelForceComp2f2PassVeh_sldd_ , &
rtP__PlntWhlRlxLngth2f2PassVeh_sldd_ , &
rtP__PlntWhlTirPrsExp2f2PassVeh_sldd_ , &
rtP__PlntWhlUnldRadius2f2PassVeh_sldd_ , &
rtP__PlntWhlVelIndpntForceCff2f2PassVeh_sldd_ , &
rtP__PlntWhlVelTolLowVel2f2PassVeh_sldd_ , rtP__Spark_EffMap2f2SparkEM_sldd_
, rtP__Spark_MaxTrq2f2SparkEM_sldd_ , rtP__Spark_MaxTrq_Spd2f2SparkEM_sldd_ ,
rtP__Spark_Spd_BrkPts2f2SparkEM_sldd_ , rtP__Spark_Trq_BrkPts2f2SparkEM_sldd_
, & rtP__batt_cap_init2f2SparkBat_sldd_ , & rtP__soc_init2f2SparkBat_sldd_ ,
} ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T )
SS_BOOLEAN , 0 , 0 , 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof (
uint32_T ) , ( uint8_T ) SS_UINT32 , 0 , 0 , 0 } , { "unsigned char" ,
"uint8_T" , 0 , 0 , sizeof ( uint8_T ) , ( uint8_T ) SS_UINT8 , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 12 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 4 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR
, 14 , 2 , 0 } , { rtwCAPI_VECTOR , 16 , 2 , 0 } , { rtwCAPI_VECTOR , 18 , 2
, 0 } , { rtwCAPI_VECTOR , 20 , 2 , 0 } , { rtwCAPI_VECTOR , 22 , 2 , 0 } , {
rtwCAPI_VECTOR , 24 , 2 , 0 } , { rtwCAPI_VECTOR , 26 , 2 , 0 } , {
rtwCAPI_VECTOR , 28 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 30 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 32 , 2 , 0 } , { rtwCAPI_VECTOR , 34 , 2 , 0 } , {
rtwCAPI_VECTOR , 36 , 2 , 0 } , { rtwCAPI_VECTOR , 38 , 2 , 0 } , {
rtwCAPI_VECTOR , 40 , 2 , 0 } , { rtwCAPI_VECTOR , 42 , 2 , 0 } , {
rtwCAPI_VECTOR , 44 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 46 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 48 , 2 , 0 } , { rtwCAPI_VECTOR , 50 , 2 , 0 } , {
rtwCAPI_VECTOR , 52 , 2 , 0 } , { rtwCAPI_VECTOR , 54 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 2 , 1 , 4 , 1 , 3 , 2 , 3 , 1 ,
6 , 1 , 3 , 4 , 3 , 3 , 9 , 1 , 601 , 1 , 1 , 6 , 1 , 7 , 1 , 2 , 1 , 3 , 34
, 1 , 2 , 2 , 42 , 46 , 1 , 42 , 1 , 46 , 1 , 58 , 1 , 101 , 8 , 1 , 1 , 11 ,
7 , 6 , 21 , 23 , 1 , 29 , 1 , 21 , 1 , 23 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 1.0 , 0.1 , 0.01 , 0.5 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 1 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ]
, ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0
} , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 3 , ( uint8_T ) 0 } , { ( NULL ) , (
NULL ) , 5 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 3 ] , ( const
void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 2 , ( uint8_T ) 0 } , { (
const void * ) & rtcapiStoredFloats [ 4 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 4 , ( uint8_T ) 0 } , { ( NULL ) , (
NULL ) , - 1 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 491 , rtRootInputs , 0 , rtRootOutputs , 0 } , {
rtBlockParameters , 350 , rtModelParameters , 99 } , { rtBlockStates , 33 } ,
{ rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 2888132551U , 2354616315U
, 3011396550U , 192330028U } , ( NULL ) , 0 , ( boolean_T ) 0 ,
rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
SparkEV_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void SparkEV_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( *
rt_dataMapInfoPtr ) . childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( ( *
rt_dataMapInfoPtr ) . mmi , 3 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void SparkEV_host_InitializeDataMapInfo ( SparkEV_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
OpenLoopBraking_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"SparkEV/Controllers/Brake Control Unit (BCU)/Open Loop Braking" ) ; dataMap
-> childMMI [ 1 ] = & ( dataMap -> child1 . mmi ) ;
DriverPassThrough_host_InitializeDataMapInfo ( & ( dataMap -> child1 ) ,
"SparkEV/Controllers/Transmission Control Unit (TCU)/Driver Pass Through" ) ;
dataMap -> childMMI [ 2 ] = & ( dataMap -> child2 . mmi ) ;
EvPowertrainController_host_InitializeDataMapInfo ( & ( dataMap -> child2 ) ,
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 1EM" ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap -> childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 3 ) ; }
#ifdef __cplusplus
}
#endif
#endif
