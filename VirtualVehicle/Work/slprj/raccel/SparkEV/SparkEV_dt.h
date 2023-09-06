#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , { "j2diisom34j" , 17 , 160 }
, { "am5nrfreizz" , 18 , 152 } , { "pwecol01r52" , 19 , 160 } , { "uint64_T"
, 20 , 8 } , { "int64_T" , 21 , 8 } , { "uint_T" , 22 , 32 } , { "char_T" ,
23 , 8 } , { "uchar_T" , 24 , 8 } , { "time_T" , 25 , 8 } } ; static uint_T
rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof (
int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) ,
sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof (
fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T )
, 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T ) , sizeof
( uint64_T ) , sizeof ( j2diisom34j ) , sizeof ( am5nrfreizz ) , sizeof (
pwecol01r52 ) , sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof ( uint_T )
, sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ; static const
char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T"
, "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"physical_connection" , "int64_T" , "uint64_T" , "j2diisom34j" ,
"am5nrfreizz" , "pwecol01r52" , "uint64_T" , "int64_T" , "uint_T" , "char_T"
, "uchar_T" , "time_T" } ; static DataTypeTransition rtBTransitions [ ] = { {
( char_T * ) ( & iowqpk3eub2 . atfdsr0huc ) , 0 , 0 , 596 } , { ( char_T * )
( & iowqpk3eub2 . fjkq3v532f ) , 8 , 0 , 7 } , { ( char_T * ) ( & iowqpk3eub2
. ngpegw05gp [ 0 ] . neijo20b0e . fp3ahepphh ) , 0 , 0 , 8 } , { ( char_T * )
( & iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e . jl5e4qcf5y . pqkyknwcy0 ) ,
0 , 0 , 6 } , { ( char_T * ) ( & iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e
. pjngj1ll1b . mzqxxxozo5 ) , 0 , 0 , 1 } , { ( char_T * ) ( & iowqpk3eub2 .
ngpegw05gp [ 0 ] . neijo20b0e . pjngj1ll1b . ayfwykncou ) , 8 , 0 , 1 } , { (
char_T * ) ( & iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e . o4j5vlwe14 .
myu2drybjk ) , 8 , 0 , 1 } , { ( char_T * ) ( & iowqpk3eub2 . kzv4bjyp4c .
b3ctjms5s3 [ 0 ] ) , 0 , 0 , 49 } , { ( char_T * ) ( & iowqpk3eub2 .
gugymbw2iq [ 0 ] . eq332hab4o . l1npf2t5km ) , 0 , 0 , 8 } , { ( char_T * ) (
& iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o . koua2ggizf0 . pqkyknwcy0 ) ,
0 , 0 , 6 } , { ( char_T * ) ( & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o
. ost4s50i5x5 . mzqxxxozo5 ) , 0 , 0 , 1 } , { ( char_T * ) ( & iowqpk3eub2 .
gugymbw2iq [ 0 ] . eq332hab4o . ost4s50i5x5 . ayfwykncou ) , 8 , 0 , 1 } , {
( char_T * ) ( & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o . bsy0pqewaju .
myu2drybjk ) , 8 , 0 , 1 } , { ( char_T * ) ( & iowqpk3eub2 . hl3n1vp0xp .
b3ctjms5s3 [ 0 ] ) , 0 , 0 , 49 } , { ( char_T * ) ( & iowqpk3eub2 .
k04ingjquh [ 3 ] . mcuiddfo52 [ 0 ] ) , 0 , 0 , 24 } , { ( char_T * ) ( &
iowqpk3eub2 . dwnfs4t0ur . motv0pybyv ) , 0 , 0 , 1 } , { ( char_T * ) ( &
iowqpk3eub2 . fuob0ddam2h . motv0pybyv ) , 0 , 0 , 1 } , { ( char_T * ) ( &
cz5yqt3r3xb . ovftuesk53 [ 0 ] ) , 0 , 0 , 42 } , { ( char_T * ) ( &
cz5yqt3r3xb . dqdopzr2jv . AQHandles ) , 11 , 0 , 31 } , { ( char_T * ) ( &
cz5yqt3r3xb . hndyq1p4da ) , 6 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb .
mhe3tr5m1h ) , 7 , 0 , 2 } , { ( char_T * ) ( & cz5yqt3r3xb . bk5zchkp0d ) ,
10 , 0 , 12 } , { ( char_T * ) ( & cz5yqt3r3xb . j3jayeyudr ) , 2 , 0 , 18 }
, { ( char_T * ) ( & cz5yqt3r3xb . ldpanoehpw ) , 3 , 0 , 2 } , { ( char_T *
) ( & cz5yqt3r3xb . hxfbtrll0m ) , 8 , 0 , 1 } , { ( char_T * ) ( &
cz5yqt3r3xb . lofhsz2swn ) , 17 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb .
kqktv02dou ) , 18 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb . hukxwubwy0 ) ,
19 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e
. pggkitt2pt ) , 0 , 0 , 3 } , { ( char_T * ) ( & cz5yqt3r3xb . ngpegw05gp [
0 ] . neijo20b0e . ghzjsy0neq ) , 11 , 0 , 2 } , { ( char_T * ) ( &
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . bke41ski0c ) , 6 , 0 , 1 } , {
( char_T * ) ( & cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . cwd4vpw3zu ) ,
7 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e
. iulkqj0r4p ) , 2 , 0 , 2 } , { ( char_T * ) ( & cz5yqt3r3xb . ngpegw05gp [
0 ] . neijo20b0e . ckcpmdbuxk ) , 3 , 0 , 1 } , { ( char_T * ) ( &
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . ifu0e5plsq ) , 8 , 0 , 3 } , {
( char_T * ) ( & cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . jl5e4qcf5y .
mqxu23dmqr ) , 2 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb . ngpegw05gp [ 0
] . neijo20b0e . n4c32cozqj . heycmssseq ) , 2 , 0 , 1 } , { ( char_T * ) ( &
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . pjngj1ll1b . kq21ggndfv ) , 8 ,
0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e .
pjngj1ll1b . nvixjavuae ) , 2 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb .
ngpegw05gp [ 0 ] . neijo20b0e . o4j5vlwe14 . b1zred4rog ) , 2 , 0 , 1 } , { (
char_T * ) ( & cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . jtdeo3xwpe ) , 0
, 0 , 3 } , { ( char_T * ) ( & cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
oe2spdonlu ) , 11 , 0 , 2 } , { ( char_T * ) ( & cz5yqt3r3xb . gugymbw2iq [ 0
] . eq332hab4o . inlsalkodh ) , 6 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb
. gugymbw2iq [ 0 ] . eq332hab4o . hor5qoll31 ) , 7 , 0 , 1 } , { ( char_T * )
( & cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . hlbnjoqlho ) , 2 , 0 , 2 }
, { ( char_T * ) ( & cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . jeid4kmorf
) , 3 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb . gugymbw2iq [ 0 ] .
eq332hab4o . mzmvogimwr ) , 8 , 0 , 3 } , { ( char_T * ) ( & cz5yqt3r3xb .
gugymbw2iq [ 0 ] . eq332hab4o . koua2ggizf0 . mqxu23dmqr ) , 2 , 0 , 1 } , {
( char_T * ) ( & cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . er0qshcg2fb .
heycmssseq ) , 2 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb . gugymbw2iq [ 0
] . eq332hab4o . ost4s50i5x5 . kq21ggndfv ) , 8 , 0 , 1 } , { ( char_T * ) (
& cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . ost4s50i5x5 . nvixjavuae ) ,
2 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o
. bsy0pqewaju . b1zred4rog ) , 2 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb .
dwnfs4t0ur . k44bc5mjbl ) , 2 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb .
dwnfs4t0ur . o5luu5smdl ) , 8 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb .
fuob0ddam2h . k44bc5mjbl ) , 2 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb .
fuob0ddam2h . o5luu5smdl ) , 8 , 0 , 1 } } ; static DataTypeTransitionTable
rtBTransTable = { 56U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & kjmvupbl2i . DragForce_Cs [ 0 ] ) ,
0 , 0 , 4040 } , { ( char_T * ) ( & kjmvupbl2i . uDLookupTable_maxIndex [ 0 ]
) , 7 , 0 , 4 } , { ( char_T * ) ( & kjmvupbl2i . Constant9_Value_bderlrgqtg
) , 8 , 0 , 6 } , { ( char_T * ) ( & kjmvupbl2i . GradeSource_CurrentSetting
) , 3 , 0 , 1 } , { ( char_T * ) ( & kjmvupbl2i . ngpegw05gp . neijo20b0e .
jl5e4qcf5y . u_Gain ) , 0 , 0 , 1 } , { ( char_T * ) ( & kjmvupbl2i .
ngpegw05gp . neijo20b0e . n4c32cozqj . Constant_Value ) , 0 , 0 , 3 } , { (
char_T * ) ( & kjmvupbl2i . ngpegw05gp . neijo20b0e . pjngj1ll1b .
Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & kjmvupbl2i . ngpegw05gp .
neijo20b0e . pjngj1ll1b . yn_Y0 ) , 8 , 0 , 10 } , { ( char_T * ) ( &
kjmvupbl2i . ngpegw05gp . neijo20b0e . o4j5vlwe14 . yn_Y0 ) , 8 , 0 , 1 } , {
( char_T * ) ( & kjmvupbl2i . gugymbw2iq . eq332hab4o . koua2ggizf0 . u_Gain
) , 0 , 0 , 1 } , { ( char_T * ) ( & kjmvupbl2i . gugymbw2iq . eq332hab4o .
er0qshcg2fb . Constant_Value ) , 0 , 0 , 3 } , { ( char_T * ) ( & kjmvupbl2i
. gugymbw2iq . eq332hab4o . ost4s50i5x5 . Constant_Value ) , 0 , 0 , 1 } , {
( char_T * ) ( & kjmvupbl2i . gugymbw2iq . eq332hab4o . ost4s50i5x5 . yn_Y0 )
, 8 , 0 , 10 } , { ( char_T * ) ( & kjmvupbl2i . gugymbw2iq . eq332hab4o .
bsy0pqewaju . yn_Y0 ) , 8 , 0 , 1 } , { ( char_T * ) ( & kjmvupbl2i .
k04ingjquh . phi_Value ) , 0 , 0 , 2 } , { ( char_T * ) ( &
rtP__CtrlVcuEvBattChrgPwrMax2f2EvVCU_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) (
& rtP__CtrlVcuEvBattDischrgPwrMax2f2EvVCU_sldd_ ) , 0 , 0 , 1 } , { ( char_T
* ) ( rtP__CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_ ) , 0 , 0 , 11 } , { ( char_T *
) ( rtP__CtrlVcuEvDischrgLmtBpt2f2EvVCU_sldd_ ) , 0 , 0 , 11 } , { ( char_T *
) ( rtP__CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_ ) , 0 , 0 , 2 } , { ( char_T *
) ( rtP__CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_ ) , 0 , 0 , 2 } , { ( char_T *
) ( rtP__CtrlVcuEvSocBpt2f2EvVCU_sldd_ ) , 0 , 0 , 11 } , { ( char_T * ) ( &
rtP__DriverAeroRes2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__DriverDrivelineRes2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__DriverInitialGear2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__DriverPreviewDist2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__DriverRollRes2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__DriverShiftTime2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__DriverTimeConst2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__DriverTractiveForce2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__EnvAbsPrs2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__EnvAirTemp2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__EnvGrvty2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__EnvNomFrictionScaling2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T *
) ( & rtP__EnvNominalGrade2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T *
) ( & rtP__EnvWindVelX2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) (
& rtP__EnvWindVelY2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__EnvWindVelZ2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) (
rtP__PlntBattIntrnRes2f2BatteryDCDC_sldd_ ) , 0 , 0 , 42 } , { ( char_T * ) (
& rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ) , 0 , 0 , 1 } , { ( char_T *
) ( & rtP__PlntBattNumCellSer2f2BatteryDCDC_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( rtP__PlntBattSocBpt2f2BatteryDCDC_sldd_ ) , 0 , 0 , 6 } , { (
char_T * ) ( rtP__PlntBattTempBpt2f2BatteryDCDC_sldd_ ) , 0 , 0 , 7 } , { (
char_T * ) ( & rtP__PlntBattTimeCnst2f2BatteryDCDC_sldd_ ) , 0 , 0 , 1 } , {
( char_T * ) ( & rtP__PlntBrkActrBoreFrnt2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , {
( char_T * ) ( & rtP__PlntBrkActrBoreRear2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , {
( char_T * ) ( & rtP__PlntBrkFrntBias2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , {
( char_T * ) ( & rtP__PlntBrkKinFricCffRear2f2PassVeh_sldd_ ) , 0 , 0 , 1 } ,
{ ( char_T * ) ( & rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ ) , 0 , 0 , 1 } ,
{ ( char_T * ) ( & rtP__PlntBrkNumPadsRear2f2PassVeh_sldd_ ) , 0 , 0 , 1 } ,
{ ( char_T * ) ( & rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ ) , 0 , 0 ,
1 } , { ( char_T * ) ( & rtP__PlntBrkPadMeanRadiusRear2f2PassVeh_sldd_ ) , 0
, 0 , 1 } , { ( char_T * ) ( & rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ ) , 0 , 0
, 1 } , { ( char_T * ) ( & rtP__PlntBrkRearBias2f2PassVeh_sldd_ ) , 0 , 0 , 1
} , { ( char_T * ) ( & rtP__PlntBrkStcFricCffFrnt2f2PassVeh_sldd_ ) , 0 , 0 ,
1 } , { ( char_T * ) ( & rtP__PlntBrkStcFricCffRear2f2PassVeh_sldd_ ) , 0 , 0
, 1 } , { ( char_T * ) ( & rtP__PlntBrkWc2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , {
( char_T * ) ( & rtP__PlntDiffrntlAxl1Damp2f2Drivetrain_sldd_ ) , 0 , 0 , 1 }
, { ( char_T * ) ( & rtP__PlntDiffrntlAxl1Inertia2f2Drivetrain_sldd_ ) , 0 ,
0 , 1 } , { ( char_T * ) ( & rtP__PlntDiffrntlAxl1InitVel2f2Drivetrain_sldd_
) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__PlntDiffrntlAxl2Damp2f2Drivetrain_sldd_ ) , 0 , 0 , 1 } , { ( char_T * )
( & rtP__PlntDiffrntlAxl2Inertia2f2Drivetrain_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntDiffrntlAxl2InitVel2f2Drivetrain_sldd_ ) , 0 , 0 , 1
} , { ( char_T * ) ( & rtP__PlntDiffrntlCarrDamp2f2Drivetrain_sldd_ ) , 0 , 0
, 1 } , { ( char_T * ) ( & rtP__PlntDiffrntlCarrInertia2f2Drivetrain_sldd_ )
, 0 , 0 , 1 } , { ( char_T * ) ( & rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ )
, 0 , 0 , 1 } , { ( char_T * ) ( & rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_
) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__PlntDriveshftDamp2f2Drivetrain_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) (
& rtP__PlntDriveshftDampCutoffFreq2f2Drivetrain_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntDriveshftInitDeflect2f2Drivetrain_sldd_ ) , 0 , 0 , 1
} , { ( char_T * ) ( & rtP__PlntDriveshftInitVel2f2Drivetrain_sldd_ ) , 0 , 0
, 1 } , { ( char_T * ) ( & rtP__PlntDriveshftStiff2f2Drivetrain_sldd_ ) , 0 ,
0 , 1 } , { ( char_T * ) ( & rtP__PlntEM1Damp2f2Drivetrain_sldd_ ) , 0 , 0 ,
1 } , { ( char_T * ) ( & rtP__PlntEM1Inertia2f2Drivetrain_sldd_ ) , 0 , 0 , 1
} , { ( char_T * ) ( & rtP__PlntEM1InitVel2f2Drivetrain_sldd_ ) , 0 , 0 , 1 }
, { ( char_T * ) ( & rtP__PlntEM1TimeCnst2f2ElectricMachine1_sldd_ ) , 0 , 0
, 1 } , { ( char_T * ) ( & rtP__PlntVehAeroDragCff2f2PassVeh_sldd_ ) , 0 , 0
, 1 } , { ( char_T * ) ( & rtP__PlntVehAeroFrntArea2f2PassVeh_sldd_ ) , 0 , 0
, 1 } , { ( char_T * ) ( & rtP__PlntVehAeroLiftCff2f2PassVeh_sldd_ ) , 0 , 0
, 1 } , { ( char_T * ) ( & rtP__PlntVehAeroPitchCff2f2PassVeh_sldd_ ) , 0 , 0
, 1 } , { ( char_T * ) ( & rtP__PlntVehCGHgtAxl2f2PassVeh_sldd_ ) , 0 , 0 , 1
} , { ( char_T * ) ( & rtP__PlntVehDstCGFrntAxl2f2PassVeh_sldd_ ) , 0 , 0 , 1
} , { ( char_T * ) ( & rtP__PlntVehDstCGRearAxl2f2PassVeh_sldd_ ) , 0 , 0 , 1
} , { ( char_T * ) ( & rtP__PlntVehFzFlt2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , {
( char_T * ) ( & rtP__PlntVehInitLongVel2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , {
( char_T * ) ( & rtP__PlntVehMass2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntVehPitchMomentInertia2f2PassVeh_sldd_ ) , 0 , 0 , 1 }
, { ( char_T * ) ( & rtP__PlntWhlDampCoeffFrnt2f2PassVeh_sldd_ ) , 0 , 0 , 1
} , { ( char_T * ) ( & rtP__PlntWhlDampCoeffRear2f2PassVeh_sldd_ ) , 0 , 0 ,
1 } , { ( char_T * ) ( & rtP__PlntWhlInertiaFrnt2f2PassVeh_sldd_ ) , 0 , 0 ,
1 } , { ( char_T * ) ( & rtP__PlntWhlInertiaRear2f2PassVeh_sldd_ ) , 0 , 0 ,
1 } , { ( char_T * ) ( & rtP__PlntWhlInitAngVel2f2PassVeh_sldd_ ) , 0 , 0 , 1
} , { ( char_T * ) ( & rtP__PlntWhlLdRadius2f2PassVeh_sldd_ ) , 0 , 0 , 1 } ,
{ ( char_T * ) ( & rtP__PlntWhlLnrVelForceComp2f2PassVeh_sldd_ ) , 0 , 0 , 1
} , { ( char_T * ) ( & rtP__PlntWhlMaxFz2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , {
( char_T * ) ( & rtP__PlntWhlMaxSlipRatio2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , {
( char_T * ) ( & rtP__PlntWhlMinFz2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntWhlNrmlForceExp2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntWhlPrsFrnt2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntWhlPrsRear2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntWhlQuadVelForceComp2f2PassVeh_sldd_ ) , 0 , 0 , 1 } ,
{ ( char_T * ) ( & rtP__PlntWhlRlxLngth2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntWhlTirPrsExp2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntWhlUnldRadius2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntWhlVelIndpntForceCff2f2PassVeh_sldd_ ) , 0 , 0 , 1 }
, { ( char_T * ) ( & rtP__PlntWhlVelTolLowVel2f2PassVeh_sldd_ ) , 0 , 0 , 1 }
, { ( char_T * ) ( rtP__Spark_EffMap2f2SparkEM_sldd_ ) , 0 , 0 , 483 } , { (
char_T * ) ( rtP__Spark_MaxTrq2f2SparkEM_sldd_ ) , 0 , 0 , 29 } , { ( char_T
* ) ( rtP__Spark_MaxTrq_Spd2f2SparkEM_sldd_ ) , 0 , 0 , 29 } , { ( char_T * )
( rtP__Spark_Spd_BrkPts2f2SparkEM_sldd_ ) , 0 , 0 , 21 } , { ( char_T * ) (
rtP__Spark_Trq_BrkPts2f2SparkEM_sldd_ ) , 0 , 0 , 23 } , { ( char_T * ) ( &
rtP__batt_cap_init2f2SparkBat_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__soc_init2f2SparkBat_sldd_ ) , 0 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 114U , rtPTransitions } ;
