#include "SparkEV.h"
#include "rtwtypes.h"
#include "SparkEV_private.h"
#include "automltirelongMy_f1emABMi.h"
#include "mwmathutil.h"
#include "interp2_0XbyHNhZ.h"
#include <string.h>
#include <emmintrin.h>
#include "automldiffopen_wAtp5Ifz.h"
#include "recomputeBlockDiag_gs6kEciD.h"
#include "xhseqr_H6eRN0gF.h"
#include "norm_CF3EtBNC.h"
#include "log2_DgASG5hL.h"
#include <math.h>
#include "rt_logging_mmi.h"
#include "SparkEV_capi.h"
#include "look1_pbinlcapw.h"
#include "look1_binlcapw.h"
#include "look1_binlcpw.h"
#include "look2_binlcapw.h"
#include "look1_binlxpw.h"
#include "zero_crossing_types.h"
#include "OpenLoopBraking.h"
#include "DriverPassThrough.h"
#include "EvPowertrainController.h"
#include "SparkEV_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 5 , & stopRequested ) ; }
rtExtModeShutdown ( 5 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 6 ; const char_T
* gbl_raccel_Version = "9.8 (R2022b) 13-May-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define cnzg5rpzmh ((uint8_T)0U)
#define dvbtnvzuaz (-1)
#define i3gedaj1y0 (2U)
#define oyy4ffgkbi (1U)
#define bgxt5y230n (1U)
#define e54rjne3kj (-1)
#define j54zrnfi2r ((uint8_T)0U)
#define o0yspya10c (2U)
#define bvcpbrrjdc (2U)
#define hsey4nk0xq ((uint8_T)0U)
#define mtch1eyo22 (1U)
#define nz1er2u5yq (3U)
iowqpk3eub iowqpk3eub2 ; chmgkez0tp chmgkez0tpf ; cz5yqt3r3x cz5yqt3r3xb ;
noe4wlvctt noe4wlvctth ; psrnl3geoq psrnl3geoqh ; pfsggdhooa pfsggdhooaf ;
static SimStruct model_S ; SimStruct * const rtS = & model_S ; static void
k00clh00t0 ( real_T rhoz , real_T omega , real_T * Re , real_T * Fz ) ;
static void gzymuludvm ( real_T u , real_T tol , real_T * y , real_T * yabs )
; static real_T doumufelao ( real_T kappa , real_T Vx , real_T Fz , real_T
b_gamma , real_T LONGVL , real_T FNOMIN , real_T b_FZMIN , real_T b_FZMAX ,
real_T press , real_T NOMPRES , real_T PRESMIN , real_T PRESMAX , real_T PCX1
, real_T PDX1 , real_T PDX2 , real_T PDX3 , real_T PEX1 , real_T PEX2 ,
real_T PEX3 , real_T PEX4 , real_T PKX1 , real_T PKX2 , real_T PKX3 , real_T
PHX1 , real_T PHX2 , real_T PVX1 , real_T PVX2 , real_T PPX1 , real_T PPX2 ,
real_T PPX3 , real_T PPX4 , real_T lam_Fzo , real_T lam_muV , real_T lam_mux
, real_T lam_Kxkappa , real_T lam_Cx , real_T lam_Ex , real_T lam_Hx , real_T
lam_Vx ) ; static real_T fgbe0mqijh ( real_T Fz , real_T omega , real_T Vx ,
real_T press , real_T QSY1 , real_T QSY2 , real_T QSY3 , real_T QSY7 , real_T
QSY8 , real_T UNLOADED_RADIUS , real_T b_FZMIN , real_T b_FZMAX , real_T
PRESMIN , real_T PRESMAX ) ; static real_T ml2kn1fbtj ( real_T Fz , real_T
omega , real_T Tamb , real_T Fpl , real_T Cr , real_T Kt , real_T Tmeas ,
real_T Re , real_T b_FZMIN , real_T b_FZMAX , real_T TMIN , real_T TMAX ) ;
static boolean_T annl4eyeip ( real_T Tout , real_T Tfmaxs , lj4asj5mcu *
localB , jk5uxxpfl5 * localDW ) ; static boolean_T fw0imrounc ( real_T Tout ,
real_T Tfmaxs , lj4asj5mcu * localB , jk5uxxpfl5 * localDW , m3chvwfzhf *
localP ) ; static boolean_T hehd1pstki ( real_T Tout , real_T Tfmaxs ,
c2fxpy2z1g * localB , mrsxdde3oa * localDW ) ; static boolean_T izdw2nxrav (
real_T Tout , real_T Tfmaxs , c2fxpy2z1g * localB , mrsxdde3oa * localDW ,
epsb413ikh * localP ) ; static void oov4ikdzbn ( const real_T a [ 4 ] ,
real_T b , real_T c [ 4 ] ) ; static boolean_T af5cauz3wt ( const real_T x [
4 ] ) ; static void fwa4u0lygc ( const real_T a [ 4 ] , real_T b , real_T c [
4 ] ) ; static void ao4ajfc0ke ( const real_T A [ 4 ] , real_T A2 [ 4 ] ,
real_T A4 [ 4 ] , real_T A6 [ 4 ] , int32_T * m , real_T * s ) ; static void
hyrmdcu10r ( const real_T A [ 4 ] , real_T V [ 4 ] , real_T T [ 4 ] ) ;
static void f5zhbt2mc4 ( real_T A [ 4 ] , real_T F [ 4 ] ) ; void kkt5tjhslu
( real_T rtp_IC , ejm5hae4gj * localB ) { localB -> motv0pybyv = rtp_IC ; }
void aup0omwjn5 ( mgxctp3zid * localDW ) { localDW -> o5luu5smdl = false ; }
void bnlff5ayna ( SimStruct * rtS_p , mgxctp3zid * localDW ) { localDW ->
o5luu5smdl = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; }
void fuob0ddam2 ( SimStruct * rtS_i , boolean_T l0blttywkq , real_T
epomb1gr42 , ejm5hae4gj * localB , mgxctp3zid * localDW ) { if (
ssIsSampleHit ( rtS_i , 1 , 0 ) && ssIsModeUpdateTimeStep ( rtS_i ) ) { if (
l0blttywkq ) { if ( ! localDW -> o5luu5smdl ) { if ( ssGetTaskTime ( rtS_i ,
1 ) != ssGetTStart ( rtS_i ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS_i ) ; } localDW -> o5luu5smdl = true ; } } else if ( localDW ->
o5luu5smdl ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ;
aup0omwjn5 ( localDW ) ; } } if ( localDW -> o5luu5smdl ) { localB ->
motv0pybyv = epomb1gr42 ; if ( ssIsModeUpdateTimeStep ( rtS_i ) ) {
srUpdateBC ( localDW -> k44bc5mjbl ) ; } } } void plzq12jdos ( void ) {
int32_T maeq42maen ; for ( maeq42maen = 0 ; maeq42maen < 4 ; maeq42maen ++ )
{ iowqpk3eub2 . k04ingjquh [ maeq42maen ] . mcuiddfo52 [ 0 ] = 0.0 ;
iowqpk3eub2 . k04ingjquh [ maeq42maen ] . mcuiddfo52 [ 1 ] = 0.0 ;
iowqpk3eub2 . k04ingjquh [ maeq42maen ] . mcuiddfo52 [ 2 ] = 0.0 ; memset ( &
iowqpk3eub2 . k04ingjquh [ maeq42maen ] . bq14nuexev [ 0 ] , 0 , 9U * sizeof
( real_T ) ) ; memset ( & iowqpk3eub2 . k04ingjquh [ maeq42maen ] .
dombbngwxk [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; iowqpk3eub2 . k04ingjquh [
maeq42maen ] . cvsblo3jno [ 0 ] = 0.0 ; iowqpk3eub2 . k04ingjquh [ maeq42maen
] . cvsblo3jno [ 1 ] = 0.0 ; iowqpk3eub2 . k04ingjquh [ maeq42maen ] .
cvsblo3jno [ 2 ] = 0.0 ; } } void iwjxg25rah ( int32_T maeq42maen ) { real_T
leur20cojb ; real_T n1giavbc35 [ 3 ] ; leur20cojb = iowqpk3eub2 . bvukyawnn2
[ maeq42maen ] ; n1giavbc35 [ 0 ] = iowqpk3eub2 . i42qwfv1dk [ 3 * maeq42maen
] ; n1giavbc35 [ 1 ] = iowqpk3eub2 . i42qwfv1dk [ 3 * maeq42maen + 1 ] ;
n1giavbc35 [ 2 ] = iowqpk3eub2 . i42qwfv1dk [ 3 * maeq42maen + 2 ] ; { real_T
brp1ohm2gr_idx_0 ; real_T brp1ohm2gr_idx_1 ; real_T brp1ohm2gr_idx_2 ; real_T
hwtnwudvo1_idx_0 ; real_T hwtnwudvo1_idx_1 ; real_T hwtnwudvo1_idx_2 ;
int32_T i ; iowqpk3eub2 . k04ingjquh [ maeq42maen ] . mcuiddfo52 [ 0 ] =
kjmvupbl2i . k04ingjquh . psi_Value ; iowqpk3eub2 . k04ingjquh [ maeq42maen ]
. mcuiddfo52 [ 1 ] = leur20cojb ; iowqpk3eub2 . k04ingjquh [ maeq42maen ] .
mcuiddfo52 [ 2 ] = kjmvupbl2i . k04ingjquh . phi_Value ; muDoubleScalarSinCos
( iowqpk3eub2 . k04ingjquh [ maeq42maen ] . mcuiddfo52 [ 0 ] , &
hwtnwudvo1_idx_0 , & brp1ohm2gr_idx_0 ) ; muDoubleScalarSinCos ( iowqpk3eub2
. k04ingjquh [ maeq42maen ] . mcuiddfo52 [ 1 ] , & hwtnwudvo1_idx_1 , &
brp1ohm2gr_idx_1 ) ; muDoubleScalarSinCos ( iowqpk3eub2 . k04ingjquh [
maeq42maen ] . mcuiddfo52 [ 2 ] , & hwtnwudvo1_idx_2 , & brp1ohm2gr_idx_2 ) ;
iowqpk3eub2 . k04ingjquh [ maeq42maen ] . bq14nuexev [ 0 ] = brp1ohm2gr_idx_0
* brp1ohm2gr_idx_1 ; iowqpk3eub2 . k04ingjquh [ maeq42maen ] . bq14nuexev [ 1
] = hwtnwudvo1_idx_1 * hwtnwudvo1_idx_2 * brp1ohm2gr_idx_0 - hwtnwudvo1_idx_0
* brp1ohm2gr_idx_2 ; iowqpk3eub2 . k04ingjquh [ maeq42maen ] . bq14nuexev [ 2
] = hwtnwudvo1_idx_1 * brp1ohm2gr_idx_2 * brp1ohm2gr_idx_0 + hwtnwudvo1_idx_0
* hwtnwudvo1_idx_2 ; iowqpk3eub2 . k04ingjquh [ maeq42maen ] . bq14nuexev [ 3
] = hwtnwudvo1_idx_0 * brp1ohm2gr_idx_1 ; iowqpk3eub2 . k04ingjquh [
maeq42maen ] . bq14nuexev [ 4 ] = hwtnwudvo1_idx_1 * hwtnwudvo1_idx_2 *
hwtnwudvo1_idx_0 + brp1ohm2gr_idx_0 * brp1ohm2gr_idx_2 ; iowqpk3eub2 .
k04ingjquh [ maeq42maen ] . bq14nuexev [ 5 ] = hwtnwudvo1_idx_1 *
brp1ohm2gr_idx_2 * hwtnwudvo1_idx_0 - brp1ohm2gr_idx_0 * hwtnwudvo1_idx_2 ;
iowqpk3eub2 . k04ingjquh [ maeq42maen ] . bq14nuexev [ 6 ] = -
hwtnwudvo1_idx_1 ; iowqpk3eub2 . k04ingjquh [ maeq42maen ] . bq14nuexev [ 7 ]
= brp1ohm2gr_idx_1 * hwtnwudvo1_idx_2 ; iowqpk3eub2 . k04ingjquh [ maeq42maen
] . bq14nuexev [ 8 ] = brp1ohm2gr_idx_1 * brp1ohm2gr_idx_2 ; for ( i = 0 ; i
< 3 ; i ++ ) { iowqpk3eub2 . k04ingjquh [ maeq42maen ] . dombbngwxk [ 3 * i ]
= iowqpk3eub2 . k04ingjquh [ maeq42maen ] . bq14nuexev [ i ] ; iowqpk3eub2 .
k04ingjquh [ maeq42maen ] . dombbngwxk [ 3 * i + 1 ] = iowqpk3eub2 .
k04ingjquh [ maeq42maen ] . bq14nuexev [ i + 3 ] ; iowqpk3eub2 . k04ingjquh [
maeq42maen ] . dombbngwxk [ 3 * i + 2 ] = iowqpk3eub2 . k04ingjquh [
maeq42maen ] . bq14nuexev [ i + 6 ] ; } for ( i = 0 ; i < 3 ; i ++ ) {
iowqpk3eub2 . k04ingjquh [ maeq42maen ] . cvsblo3jno [ i ] = 0.0 ;
iowqpk3eub2 . k04ingjquh [ maeq42maen ] . cvsblo3jno [ i ] += iowqpk3eub2 .
k04ingjquh [ maeq42maen ] . dombbngwxk [ i ] * n1giavbc35 [ 0 ] ; iowqpk3eub2
. k04ingjquh [ maeq42maen ] . cvsblo3jno [ i ] += iowqpk3eub2 . k04ingjquh [
maeq42maen ] . dombbngwxk [ i + 3 ] * n1giavbc35 [ 1 ] ; iowqpk3eub2 .
k04ingjquh [ maeq42maen ] . cvsblo3jno [ i ] += iowqpk3eub2 . k04ingjquh [
maeq42maen ] . dombbngwxk [ i + 6 ] * n1giavbc35 [ 2 ] ; iowqpk3eub2 .
pstm2khcrt [ i ] = iowqpk3eub2 . k04ingjquh [ maeq42maen ] . cvsblo3jno [ i ]
; } } iowqpk3eub2 . b4tu2y2jyw [ 3 * maeq42maen ] = iowqpk3eub2 . pstm2khcrt
[ 0 ] ; iowqpk3eub2 . b4tu2y2jyw [ 3 * maeq42maen + 1 ] = iowqpk3eub2 .
pstm2khcrt [ 1 ] ; iowqpk3eub2 . b4tu2y2jyw [ 3 * maeq42maen + 2 ] =
iowqpk3eub2 . pstm2khcrt [ 2 ] ; } static void k00clh00t0 ( real_T rhoz ,
real_T omega , real_T * Re , real_T * Fz ) { * Re = 0.0 * muDoubleScalarAbs (
omega ) + rhoz ; if ( * Re < 0.001 ) { * Re = 0.001 ; } * Fz = ( rtNaN ) ; }
static void gzymuludvm ( real_T u , real_T tol , real_T * y , real_T * yabs )
{ real_T d_data ; real_T varargin_1 ; int32_T trueCount ; boolean_T ytolinds
; * yabs = muDoubleScalarAbs ( u ) ; ytolinds = ( * yabs < tol ) ; trueCount
= 0 ; if ( ytolinds ) { trueCount = 1 ; } if ( trueCount - 1 >= 0 ) {
varargin_1 = * yabs / tol ; d_data = 2.0 * tol / ( 3.0 - varargin_1 *
varargin_1 ) ; } * y = * yabs ; if ( ytolinds ) { * y = d_data ; } * yabs = *
y ; ytolinds = ( u < 0.0 ) ; trueCount = - 1 ; if ( ytolinds ) { trueCount =
0 ; } if ( trueCount >= 0 ) { d_data = - * y ; } if ( ytolinds ) { * y =
d_data ; } } static real_T doumufelao ( real_T kappa , real_T Vx , real_T Fz
, real_T b_gamma , real_T LONGVL , real_T FNOMIN , real_T b_FZMIN , real_T
b_FZMAX , real_T press , real_T NOMPRES , real_T PRESMIN , real_T PRESMAX ,
real_T PCX1 , real_T PDX1 , real_T PDX2 , real_T PDX3 , real_T PEX1 , real_T
PEX2 , real_T PEX3 , real_T PEX4 , real_T PKX1 , real_T PKX2 , real_T PKX3 ,
real_T PHX1 , real_T PHX2 , real_T PVX1 , real_T PVX2 , real_T PPX1 , real_T
PPX2 , real_T PPX3 , real_T PPX4 , real_T lam_Fzo , real_T lam_muV , real_T
lam_mux , real_T lam_Kxkappa , real_T lam_Cx , real_T lam_Ex , real_T lam_Hx
, real_T lam_Vx ) { real_T Cx ; real_T Fxo ; real_T a__1 ; real_T b_idx_0 ;
real_T d_idx_0 ; real_T dfz ; real_T dpi ; real_T g_idx_0 ; real_T h_idx_0 ;
real_T kappa_x ; real_T lam_mux_star ; b_idx_0 = Fz ; if ( Fz < b_FZMIN ) {
b_idx_0 = b_FZMIN ; } if ( b_idx_0 > b_FZMAX ) { b_idx_0 = b_FZMAX ; }
d_idx_0 = press ; if ( press < PRESMIN ) { d_idx_0 = PRESMIN ; } if ( d_idx_0
> PRESMAX ) { d_idx_0 = PRESMAX ; } dpi = ( d_idx_0 - NOMPRES ) / NOMPRES ;
dfz = ( b_idx_0 - FNOMIN * lam_Fzo ) / FNOMIN * lam_Fzo ; kappa_x = ( PHX2 *
dfz + PHX1 ) * lam_Hx + kappa ; lam_mux_star = - muDoubleScalarAbs ( Vx ) *
kappa ; lam_mux_star = lam_mux / ( muDoubleScalarSqrt ( lam_mux_star *
lam_mux_star ) * lam_muV / LONGVL + 1.0 ) ; Cx = PCX1 * lam_Cx ; d_idx_0 = Cx
; if ( Cx < 0.0 ) { d_idx_0 = 0.0 ; } Cx = ( ( PPX3 * dpi + 1.0 ) + dpi * dpi
* PPX4 ) * ( PDX2 * dfz + PDX1 ) * ( 1.0 - b_gamma * b_gamma * PDX3 ) *
lam_mux_star * b_idx_0 ; g_idx_0 = Cx ; if ( Cx < 0.0 ) { g_idx_0 = 0.0 ; }
Cx = ( ( PEX2 * dfz + PEX1 ) + dfz * dfz * PEX3 ) * ( 1.0 -
muDoubleScalarTanh ( 10.0 * kappa_x ) * PEX4 ) * lam_Ex ; h_idx_0 = Cx ; if (
Cx > 1.0 ) { h_idx_0 = 1.0 ; } gzymuludvm ( d_idx_0 * g_idx_0 , 0.1 , & Cx ,
& a__1 ) ; dpi = ( PKX2 * dfz + PKX1 ) * b_idx_0 * muDoubleScalarExp ( PKX3 *
dfz ) * ( ( PPX1 * dpi + 1.0 ) + dpi * dpi * PPX2 ) * lam_Kxkappa / Cx ; Fxo
= muDoubleScalarSin ( muDoubleScalarAtan ( dpi * kappa_x - ( dpi * kappa_x -
muDoubleScalarAtan ( dpi * kappa_x ) ) * h_idx_0 ) * d_idx_0 ) * g_idx_0 + (
PVX2 * dfz + PVX1 ) * b_idx_0 * ( lam_mux_star * 10.0 / ( 9.0 * lam_mux_star
+ 1.0 ) ) * lam_Vx ; return Fxo ; } static real_T fgbe0mqijh ( real_T Fz ,
real_T omega , real_T Vx , real_T press , real_T QSY1 , real_T QSY2 , real_T
QSY3 , real_T QSY7 , real_T QSY8 , real_T UNLOADED_RADIUS , real_T b_FZMIN ,
real_T b_FZMAX , real_T PRESMIN , real_T PRESMAX ) { real_T b_idx_0 ; real_T
d_idx_0 ; b_idx_0 = press ; if ( press < PRESMIN ) { b_idx_0 = PRESMIN ; } if
( b_idx_0 > PRESMAX ) { b_idx_0 = PRESMAX ; } d_idx_0 = Fz ; if ( Fz <
b_FZMIN ) { d_idx_0 = b_FZMIN ; } if ( d_idx_0 > b_FZMAX ) { d_idx_0 =
b_FZMAX ; } return ( ( QSY2 * muDoubleScalarAbs ( Vx ) + QSY1 ) + Vx * Vx *
QSY3 ) * ( muDoubleScalarTanh ( omega ) * UNLOADED_RADIUS ) * (
muDoubleScalarPower ( d_idx_0 , QSY7 ) * muDoubleScalarPower ( b_idx_0 , QSY8
) ) ; } static real_T ml2kn1fbtj ( real_T Fz , real_T omega , real_T Tamb ,
real_T Fpl , real_T Cr , real_T Kt , real_T Tmeas , real_T Re , real_T
b_FZMIN , real_T b_FZMAX , real_T TMIN , real_T TMAX ) { real_T b_idx_0 ;
real_T d_idx_0 ; b_idx_0 = Tamb ; if ( Tamb < TMIN ) { b_idx_0 = TMIN ; } if
( b_idx_0 > TMAX ) { b_idx_0 = TMAX ; } d_idx_0 = Fz ; if ( Fz < b_FZMIN ) {
d_idx_0 = b_FZMIN ; } if ( d_idx_0 > b_FZMAX ) { d_idx_0 = b_FZMAX ; } return
( d_idx_0 * Cr * 0.001 / ( ( b_idx_0 - Tmeas ) * Kt + 1.0 ) + Fpl ) * ( -
muDoubleScalarTanh ( omega ) * Re ) ; } void jpsdmdkpvb ( real_T dktnql4rdc ,
real_T oibbbmluqf , real_T g5c3lpi21w , real_T jqwqb31imn , real_T jmt3wslcux
, real_T j5g0lv5w2t , real_T nyn2enrmqk , real_T flw3014l5l , real_T
dr2wwwgcqq , const real_T acyyt2c3sd [ 34 ] , const real_T nolzfnzgog [ 3 ] ,
const real_T np33baqv0z [ 3 ] , const real_T cuhb2c43r1 [ 9 ] , real_T
cwumy4oyzo , real_T mcbnhkacqv , real_T l3nteyfq0o , real_T kaatiy3pyo ,
real_T h5t5edhcvq , real_T cfx1ep5ajt , real_T lgbt4epz0h , real_T bwx0s11oqh
, real_T pirm10rjin , real_T aywbcc003i , real_T dlryh21pe3 , real_T
pe11e4jbil , real_T pcocdg01db , real_T f5vhwuclmf , real_T hjondtefj2 ,
real_T fi3dosih30 , const real_T afshqbq0nt [ 3 ] , const real_T flbqc2fzdk [
3 ] , const real_T pagz5bl3zm [ 9 ] , real_T e4irtzy4j3 , real_T lwkv2qjcc0 ,
real_T nxy44lipgr , real_T fwhderflnq , real_T btei1l52mj , real_T f24d4whz0n
, real_T jlmgxxzz04 , real_T l4jiflo2gi , real_T ldfeh0gkm2 , real_T
pqagd3mh0l , real_T ldxz1pnzq0 , real_T aro2ihjb1h , real_T fxasuepo1s ,
real_T hjktfap0mv , real_T kvv3xxnbot , real_T fmu01gtyh5 , real_T acfn1johsv
, real_T eedc14ohgn , real_T ajbhjifr3a , real_T nr4ldqqeqm , real_T
dc0lpymeql , real_T nqlcnuj2bo , real_T isyy3iaw5j , real_T j32f1t4ado ,
real_T enzz41djgg , real_T f1zrqmjzxe , real_T ehdypio5vy , real_T rtp_FZMAX
, real_T rtp_FZMIN , real_T rtp_VXLOW , real_T rtp_kappamax , f1t4wk0v1k *
localB ) { real_T cuhb2c43r1_p [ 9 ] ; real_T Re ; real_T Vxpabs ; real_T
b_FzTire ; int32_T trueCount ; localB -> b3ctjms5s3 [ 0 ] = jmt3wslcux ;
localB -> b3ctjms5s3 [ 1 ] = j5g0lv5w2t ; localB -> b3ctjms5s3 [ 2 ] =
nyn2enrmqk ; localB -> b3ctjms5s3 [ 3 ] = flw3014l5l ; localB -> b3ctjms5s3 [
4 ] = dr2wwwgcqq ; localB -> lfzo14qhui [ 0 ] = cwumy4oyzo ; localB ->
lfzo14qhui [ 1 ] = mcbnhkacqv ; localB -> lfzo14qhui [ 2 ] = l3nteyfq0o ;
localB -> lfzo14qhui [ 3 ] = kaatiy3pyo ; localB -> lfzo14qhui [ 4 ] =
h5t5edhcvq ; localB -> lfzo14qhui [ 5 ] = cfx1ep5ajt ; localB -> lfzo14qhui [
6 ] = lgbt4epz0h ; localB -> lfzo14qhui [ 7 ] = bwx0s11oqh ; localB ->
lfzo14qhui [ 8 ] = pirm10rjin ; localB -> lfzo14qhui [ 9 ] = aywbcc003i ;
localB -> lfzo14qhui [ 10 ] = dlryh21pe3 ; localB -> lfzo14qhui [ 11 ] =
pe11e4jbil ; localB -> lfzo14qhui [ 12 ] = pcocdg01db ; localB -> lfzo14qhui
[ 13 ] = f5vhwuclmf ; localB -> lfzo14qhui [ 14 ] = hjondtefj2 ; localB ->
lfzo14qhui [ 15 ] = fi3dosih30 ; localB -> g2citiqvw0 [ 0 ] = cwumy4oyzo ;
localB -> g2citiqvw0 [ 1 ] = lwkv2qjcc0 ; localB -> g2citiqvw0 [ 2 ] =
nxy44lipgr ; localB -> g2citiqvw0 [ 3 ] = fwhderflnq ; localB -> g2citiqvw0 [
4 ] = btei1l52mj ; localB -> g2citiqvw0 [ 5 ] = f24d4whz0n ; localB ->
g2citiqvw0 [ 6 ] = jlmgxxzz04 ; localB -> g2citiqvw0 [ 7 ] = l4jiflo2gi ;
localB -> g2citiqvw0 [ 8 ] = ldfeh0gkm2 ; localB -> g2citiqvw0 [ 9 ] =
pqagd3mh0l ; localB -> g2citiqvw0 [ 10 ] = ldxz1pnzq0 ; localB -> g2citiqvw0
[ 11 ] = aro2ihjb1h ; localB -> g2citiqvw0 [ 12 ] = fxasuepo1s ; localB ->
g2citiqvw0 [ 13 ] = hjktfap0mv ; localB -> g2citiqvw0 [ 14 ] = kvv3xxnbot ;
localB -> g2citiqvw0 [ 15 ] = fmu01gtyh5 ; localB -> g2citiqvw0 [ 16 ] =
acfn1johsv ; localB -> g2citiqvw0 [ 17 ] = eedc14ohgn ; localB -> g2citiqvw0
[ 18 ] = ajbhjifr3a ; localB -> g2citiqvw0 [ 19 ] = nr4ldqqeqm ; localB ->
g2citiqvw0 [ 20 ] = dc0lpymeql ; localB -> g2citiqvw0 [ 21 ] = nqlcnuj2bo ;
localB -> g2citiqvw0 [ 22 ] = isyy3iaw5j ; localB -> g2citiqvw0 [ 23 ] =
j32f1t4ado ; switch ( ( int32_T ) ehdypio5vy ) { case 0 : Re = dktnql4rdc ;
break ; case 1 : k00clh00t0 ( e4irtzy4j3 , g5c3lpi21w , & Re , & b_FzTire ) ;
break ; case 2 : Re = dktnql4rdc ; break ; default : Re = dktnql4rdc ; break
; } gzymuludvm ( jqwqb31imn , rtp_VXLOW , & b_FzTire , & Vxpabs ) ; b_FzTire
= ( dktnql4rdc * g5c3lpi21w - jqwqb31imn ) / Vxpabs ; trueCount = 0 ; if (
b_FzTire < - rtp_kappamax ) { trueCount = 1 ; } if ( trueCount - 1 >= 0 ) {
b_FzTire = - rtp_kappamax ; } Vxpabs = b_FzTire ; if ( b_FzTire >
rtp_kappamax ) { Vxpabs = rtp_kappamax ; } localB -> h3cfwzlt1t = Vxpabs ;
switch ( ( int32_T ) enzz41djgg ) { case 0 : b_FzTire = oibbbmluqf ; if (
oibbbmluqf < rtp_FZMIN ) { b_FzTire = rtp_FZMIN ; } if ( b_FzTire > rtp_FZMAX
) { b_FzTire = rtp_FZMAX ; } b_FzTire = muDoubleScalarSin (
muDoubleScalarAtan ( Vxpabs * localB -> b3ctjms5s3 [ 2 ] - ( Vxpabs * localB
-> b3ctjms5s3 [ 2 ] - muDoubleScalarAtan ( Vxpabs * localB -> b3ctjms5s3 [ 2
] ) ) * localB -> b3ctjms5s3 [ 3 ] ) * localB -> b3ctjms5s3 [ 1 ] ) * localB
-> b3ctjms5s3 [ 0 ] * ( b_FzTire * localB -> b3ctjms5s3 [ 4 ] ) ; break ;
case 2 : b_FzTire = doumufelao ( Vxpabs , jqwqb31imn , oibbbmluqf ,
acyyt2c3sd [ 0 ] , acyyt2c3sd [ 1 ] , acyyt2c3sd [ 2 ] , rtp_FZMIN ,
rtp_FZMAX , acyyt2c3sd [ 3 ] , acyyt2c3sd [ 4 ] , acyyt2c3sd [ 5 ] ,
acyyt2c3sd [ 6 ] , acyyt2c3sd [ 7 ] , acyyt2c3sd [ 8 ] , acyyt2c3sd [ 9 ] ,
acyyt2c3sd [ 10 ] , acyyt2c3sd [ 11 ] , acyyt2c3sd [ 12 ] , acyyt2c3sd [ 13 ]
, acyyt2c3sd [ 14 ] , acyyt2c3sd [ 15 ] , acyyt2c3sd [ 16 ] , acyyt2c3sd [ 17
] , acyyt2c3sd [ 18 ] , acyyt2c3sd [ 19 ] , acyyt2c3sd [ 20 ] , acyyt2c3sd [
21 ] , acyyt2c3sd [ 22 ] , acyyt2c3sd [ 23 ] , acyyt2c3sd [ 24 ] , acyyt2c3sd
[ 25 ] , acyyt2c3sd [ 26 ] , acyyt2c3sd [ 27 ] , acyyt2c3sd [ 28 ] ,
acyyt2c3sd [ 29 ] , acyyt2c3sd [ 30 ] , acyyt2c3sd [ 31 ] , acyyt2c3sd [ 32 ]
, acyyt2c3sd [ 33 ] ) ; break ; case 3 : b_FzTire = oibbbmluqf ; if (
oibbbmluqf < rtp_FZMIN ) { b_FzTire = rtp_FZMIN ; } if ( b_FzTire > rtp_FZMAX
) { b_FzTire = rtp_FZMAX ; } for ( trueCount = 0 ; trueCount < 3 ; trueCount
++ ) { cuhb2c43r1_p [ 3 * trueCount ] = cuhb2c43r1 [ trueCount ] ;
cuhb2c43r1_p [ 3 * trueCount + 1 ] = cuhb2c43r1 [ trueCount + 3 ] ;
cuhb2c43r1_p [ 3 * trueCount + 2 ] = cuhb2c43r1 [ trueCount + 6 ] ; }
b_FzTire = interp2_0XbyHNhZ ( nolzfnzgog , np33baqv0z , cuhb2c43r1_p , Vxpabs
, b_FzTire ) * localB -> b3ctjms5s3 [ 4 ] ; break ; default : b_FzTire = 0.0
; localB -> h3cfwzlt1t = 0.0 ; break ; } switch ( ( int32_T ) f1zrqmjzxe ) {
case 0 : localB -> ewiw2ra5at = 0.0 ; break ; case 1 : localB -> ewiw2ra5at =
fgbe0mqijh ( oibbbmluqf , g5c3lpi21w , jqwqb31imn , localB -> lfzo14qhui [ 0
] , localB -> lfzo14qhui [ 3 ] , localB -> lfzo14qhui [ 4 ] , localB ->
lfzo14qhui [ 5 ] , localB -> lfzo14qhui [ 9 ] , localB -> lfzo14qhui [ 10 ] ,
Re , rtp_FZMIN , rtp_FZMAX , localB -> lfzo14qhui [ 14 ] , localB ->
lfzo14qhui [ 15 ] ) ; break ; case 2 : localB -> ewiw2ra5at =
automltirelongMy_f1emABMi ( b_FzTire , oibbbmluqf , g5c3lpi21w , jqwqb31imn ,
localB -> lfzo14qhui [ 0 ] , localB -> lfzo14qhui [ 1 ] , localB ->
lfzo14qhui [ 2 ] , localB -> lfzo14qhui [ 3 ] , localB -> lfzo14qhui [ 4 ] ,
localB -> lfzo14qhui [ 5 ] , localB -> lfzo14qhui [ 6 ] , localB ->
lfzo14qhui [ 7 ] , localB -> lfzo14qhui [ 8 ] , localB -> lfzo14qhui [ 9 ] ,
localB -> lfzo14qhui [ 10 ] , localB -> lfzo14qhui [ 11 ] , localB ->
lfzo14qhui [ 12 ] , localB -> lfzo14qhui [ 13 ] , rtp_FZMAX , localB ->
lfzo14qhui [ 14 ] , localB -> lfzo14qhui [ 15 ] ) ; break ; case 3 : Vxpabs =
oibbbmluqf ; if ( oibbbmluqf < 0.0 ) { Vxpabs = 0.0 ; } if ( Vxpabs >
rtp_FZMAX ) { Vxpabs = rtp_FZMAX ; } for ( trueCount = 0 ; trueCount < 3 ;
trueCount ++ ) { cuhb2c43r1_p [ 3 * trueCount ] = pagz5bl3zm [ trueCount ] ;
cuhb2c43r1_p [ 3 * trueCount + 1 ] = pagz5bl3zm [ trueCount + 3 ] ;
cuhb2c43r1_p [ 3 * trueCount + 2 ] = pagz5bl3zm [ trueCount + 6 ] ; } localB
-> ewiw2ra5at = - ( muDoubleScalarTanh ( g5c3lpi21w ) * interp2_0XbyHNhZ (
afshqbq0nt , flbqc2fzdk , cuhb2c43r1_p , jqwqb31imn , Vxpabs ) ) ; break ;
case 4 : localB -> ewiw2ra5at = - ml2kn1fbtj ( oibbbmluqf , g5c3lpi21w ,
localB -> lfzo14qhui [ 0 ] , localB -> lfzo14qhui [ 3 ] , localB ->
lfzo14qhui [ 4 ] , localB -> lfzo14qhui [ 5 ] , localB -> lfzo14qhui [ 6 ] ,
Re , rtp_FZMIN , rtp_FZMAX , localB -> lfzo14qhui [ 14 ] , localB ->
lfzo14qhui [ 15 ] ) ; break ; default : localB -> ewiw2ra5at = 0.0 ; break ;
} localB -> lpoql10kbh = b_FzTire ; localB -> ozaa1drp55 = Re ; } void
ioxxeg3ii2 ( kkan3dtgqb * localB , hncqrffgba * localP ) { localB ->
myu2drybjk = localP -> yn_Y0 ; } void aejxmdeg1v ( kkan3dtgqb * localB ) {
localB -> myu2drybjk = false ; } void bsy0pqewaj ( real_T d0wvrywhyo , real_T
opik2pdxsr , kkan3dtgqb * localB , efbforbhag * localDW ) { localB ->
myu2drybjk = ( muDoubleScalarAbs ( d0wvrywhyo ) >= opik2pdxsr ) ; localDW ->
b1zred4rog = 4 ; } void loiaz0s5vi ( l4bjgijxai * localB , pbzhn4zoiu *
localDW , e1x3oofaiy * localP ) { localDW -> kq21ggndfv = localP ->
UnitDelay_InitialCondition ; localB -> ayfwykncou = localP -> yn_Y0 ; } void
bdgtgtn0zv ( l4bjgijxai * localB ) { localB -> ayfwykncou = false ; localB ->
mzqxxxozo5 = 0.0 ; } void ost4s50i5x ( real_T f3cqrubvgy , real_T hueeevgufm
, l4bjgijxai * localB , pbzhn4zoiu * localDW , e1x3oofaiy * localP ) { localB
-> ayfwykncou = localP -> CombinatorialLogic_table [ ( ( ( uint32_T ) (
muDoubleScalarAbs ( ( ( 0.0 - f3cqrubvgy ) - localB -> mzqxxxozo5 ) + localB
-> mzqxxxozo5 ) >= hueeevgufm ) + ( ( uint32_T ) ( muDoubleScalarAbs ( -
f3cqrubvgy ) <= hueeevgufm ) << 1 ) ) << 1 ) + localDW -> kq21ggndfv ] ;
localDW -> kq21ggndfv = localB -> ayfwykncou ; localDW -> nvixjavuae = 4 ; }
void ost4s50i5xTID5 ( real_T rtp_br , l4bjgijxai * localB , e1x3oofaiy *
localP ) { localB -> mzqxxxozo5 = rtp_br * localP -> Constant_Value ; } void
jqss0ipnij ( SimStruct * rtS_n ) { if ( ssGetTaskTime ( rtS_n , 0 ) !=
ssGetTStart ( rtS_n ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_n
) ; } } void pkh4t44ipy ( SimStruct * rtS_m ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; } void hleumlqoxf (
real_T * nnh0mwuk5o , real_T * dnc3ta04xv , real_T * no33oxrejn , real_T *
grsswsnfoe ) { * nnh0mwuk5o = 0.0 ; * dnc3ta04xv = 0.0 ; * no33oxrejn = 0.0 ;
* grsswsnfoe = 0.0 ; } void er0qshcg2f ( SimStruct * rtS_g , real_T
l5t1gh51gl , real_T * nnh0mwuk5o , real_T * dnc3ta04xv , real_T * no33oxrejn
, real_T * grsswsnfoe , oy5jc31flu * localP ) { * nnh0mwuk5o = - l5t1gh51gl ;
if ( ssIsSampleHit ( rtS_g , 1 , 0 ) ) { * dnc3ta04xv = localP ->
Constant_Value ; * no33oxrejn = localP -> Constant1_Value ; * grsswsnfoe =
localP -> Constant2_Value ; } } void ljvixv5dz0 ( real_T rtp_omegao ,
gr4zsd3ftb * localX ) { localX -> i1rcezf1gq = rtp_omegao ; } void diq0mu0o25
( SimStruct * rtS_d , fqxkd2q4va * localXdis ) { if ( ssGetTaskTime ( rtS_d ,
0 ) != ssGetTStart ( rtS_d ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS_d ) ; } localXdis -> i1rcezf1gq = 0 ; } void blj2blnlcv ( SimStruct *
rtS_j , fqxkd2q4va * localXdis ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS_j ) ; localXdis -> i1rcezf1gq = 1 ; } void pr0mh1uubi ( real_T *
oef4pyyqfb , real_T * cjz5vtfj3p , real_T * p11haannar , real_T * guoabe1ble
, blpitytuq4 * localB ) { localB -> pqkyknwcy0 = 0.0 ; localB -> gnnfdeep31 =
0.0 ; localB -> flv0itqepg = 0.0 ; localB -> irlsod2fw3 = 0.0 ; * guoabe1ble
= 0.0 ; * oef4pyyqfb = 0.0 ; localB -> l0ncirvkfw = 0.0 ; localB ->
dc1ukp4fgk = 0.0 ; * cjz5vtfj3p = 0.0 ; * p11haannar = 0.0 ; } void
koua2ggizf ( real_T koilylp1r0 , real_T njhr5exrgu , real_T * oef4pyyqfb ,
real_T * cjz5vtfj3p , real_T * p11haannar , real_T * guoabe1ble , real_T
rtp_br , real_T rtp_Iyy , blpitytuq4 * localB , pfusmvg4mq * localP ,
gr4zsd3ftb * localX ) { localB -> pqkyknwcy0 = localX -> i1rcezf1gq ; localB
-> gnnfdeep31 = localP -> u_Gain * localB -> pqkyknwcy0 ; localB ->
flv0itqepg = koilylp1r0 * muDoubleScalarTanh ( localB -> gnnfdeep31 ) ;
localB -> irlsod2fw3 = rtp_br * localB -> pqkyknwcy0 ; * guoabe1ble = localB
-> irlsod2fw3 ; * oef4pyyqfb = localB -> pqkyknwcy0 ; localB -> l0ncirvkfw =
( localB -> flv0itqepg - njhr5exrgu ) - localB -> irlsod2fw3 ; localB ->
dc1ukp4fgk = 1.0 / rtp_Iyy * localB -> l0ncirvkfw ; * cjz5vtfj3p = localB ->
dc1ukp4fgk ; * p11haannar = localB -> l0ncirvkfw ; } void nbekiifdnn (
blpitytuq4 * localB , k4grq5b0ie * localXdot ) { localXdot -> i1rcezf1gq =
localB -> dc1ukp4fgk ; } static boolean_T annl4eyeip ( real_T Tout , real_T
Tfmaxs , lj4asj5mcu * localB , jk5uxxpfl5 * localDW ) { boolean_T b_yn ;
localB -> l1npf2t5km = Tout ; localB -> fzqtuyqi2m = Tfmaxs ; bsy0pqewaj (
localB -> l1npf2t5km , localB -> fzqtuyqi2m , & localB -> bsy0pqewaju , &
localDW -> bsy0pqewaju ) ; b_yn = localB -> bsy0pqewaju . myu2drybjk ; return
b_yn ; } static boolean_T fw0imrounc ( real_T Tout , real_T Tfmaxs ,
lj4asj5mcu * localB , jk5uxxpfl5 * localDW , m3chvwfzhf * localP ) {
boolean_T b_yn ; localB -> nr0t3tcra1 = Tout ; localB -> mi4rs4gjdt = Tfmaxs
; ost4s50i5x ( localB -> nr0t3tcra1 , localB -> mi4rs4gjdt , & localB ->
ost4s50i5x5 , & localDW -> ost4s50i5x5 , & localP -> ost4s50i5x5 ) ; b_yn =
localB -> ost4s50i5x5 . ayfwykncou ; return b_yn ; } void pkedxe1l0n ( real_T
rtp_omegao , lj4asj5mcu * localB , jk5uxxpfl5 * localDW , m3chvwfzhf * localP
, p3n4530usz * localX ) { localDW -> inlsalkodh = dvbtnvzuaz ; localDW ->
jeid4kmorf = 0U ; localDW -> hor5qoll31 = cnzg5rpzmh ; localX -> koua2ggizf0
. i1rcezf1gq = 0.0 ; localB -> aseqcyqgtw = 0.0 ; localB -> dhjwhtydhg = 0.0
; localB -> adsixgkqky = 0.0 ; localB -> eqrog2hdmh = 0.0 ; ioxxeg3ii2 ( &
localB -> bsy0pqewaju , & localP -> bsy0pqewaju ) ; loiaz0s5vi ( & localB ->
ost4s50i5x5 , & localDW -> ost4s50i5x5 , & localP -> ost4s50i5x5 ) ;
ljvixv5dz0 ( rtp_omegao , & localX -> koua2ggizf0 ) ; } void ikid33ax2e (
lj4asj5mcu * localB ) { localB -> l1npf2t5km = 0.0 ; localB -> fzqtuyqi2m =
0.0 ; localB -> nr0t3tcra1 = 0.0 ; localB -> mi4rs4gjdt = 0.0 ; localB ->
aseqcyqgtw = 0.0 ; localB -> dhjwhtydhg = 0.0 ; localB -> eqrog2hdmh = 0.0 ;
localB -> adsixgkqky = 0.0 ; hleumlqoxf ( & localB -> eqrog2hdmh , & localB
-> aseqcyqgtw , & localB -> dhjwhtydhg , & localB -> adsixgkqky ) ;
aejxmdeg1v ( & localB -> bsy0pqewaju ) ; bdgtgtn0zv ( & localB -> ost4s50i5x5
) ; pr0mh1uubi ( & localB -> aseqcyqgtw , & localB -> dhjwhtydhg , & localB
-> eqrog2hdmh , & localB -> adsixgkqky , & localB -> koua2ggizf0 ) ; } void
ifd12z2us4 ( SimStruct * rtS_b , real_T d4rzxmd0tu , real_T k5zhllvll2 ,
real_T a1aakxb0kw , real_T rtp_omegao , real_T rtp_br , real_T rtp_Iyy ,
real_T rtp_OmegaTol , lj4asj5mcu * localB , jk5uxxpfl5 * localDW , m3chvwfzhf
* localP , p3n4530usz * localX , nntgsjyc2o * localXdis ) { if (
ssIsModeUpdateTimeStep ( rtS_b ) ) { localDW -> no1vbxkkq3 = ssGetTaskTime (
rtS_b , 0 ) ; localDW -> mzmvogimwr = false ; localDW -> inlsalkodh =
dvbtnvzuaz ; if ( localDW -> jeid4kmorf == 0U ) { localDW -> jeid4kmorf = 1U
; localX -> koua2ggizf0 . i1rcezf1gq = rtp_omegao ; localDW -> mzmvogimwr =
true ; localDW -> hor5qoll31 = i3gedaj1y0 ; diq0mu0o25 ( ( SimStruct * )
rtS_b , & localXdis -> koua2ggizf0 ) ; koua2ggizf ( a1aakxb0kw , d4rzxmd0tu ,
& localB -> aseqcyqgtw , & localB -> dhjwhtydhg , & localB -> eqrog2hdmh , &
localB -> adsixgkqky , rtp_br , rtp_Iyy , & localB -> koua2ggizf0 , & localP
-> koua2ggizf0 , & localX -> koua2ggizf0 ) ; localDW -> hg1u13cliy = true ; }
else if ( localDW -> hor5qoll31 == oyy4ffgkbi ) { if ( annl4eyeip (
d4rzxmd0tu , k5zhllvll2 , localB , localDW ) ) { localX -> koua2ggizf0 .
i1rcezf1gq = 0.0 ; pkh4t44ipy ( ( SimStruct * ) rtS_b ) ; localDW ->
ixpxwmj3uh = false ; localDW -> mzmvogimwr = true ; localDW -> hor5qoll31 =
i3gedaj1y0 ; diq0mu0o25 ( ( SimStruct * ) rtS_b , & localXdis -> koua2ggizf0
) ; koua2ggizf ( a1aakxb0kw , d4rzxmd0tu , & localB -> aseqcyqgtw , & localB
-> dhjwhtydhg , & localB -> eqrog2hdmh , & localB -> adsixgkqky , rtp_br ,
rtp_Iyy , & localB -> koua2ggizf0 , & localP -> koua2ggizf0 , & localX ->
koua2ggizf0 ) ; localDW -> hg1u13cliy = true ; } } else if ( fw0imrounc (
d4rzxmd0tu , k5zhllvll2 , localB , localDW , localP ) && ( muDoubleScalarAbs
( localB -> aseqcyqgtw ) <= rtp_OmegaTol ) ) { blj2blnlcv ( ( SimStruct * )
rtS_b , & localXdis -> koua2ggizf0 ) ; localDW -> hg1u13cliy = false ;
localDW -> mzmvogimwr = true ; localDW -> hor5qoll31 = oyy4ffgkbi ;
jqss0ipnij ( ( SimStruct * ) rtS_b ) ; er0qshcg2f ( ( SimStruct * ) rtS_b ,
d4rzxmd0tu , & localB -> eqrog2hdmh , & localB -> aseqcyqgtw , & localB ->
dhjwhtydhg , & localB -> adsixgkqky , & localP -> er0qshcg2fb ) ; localDW ->
ixpxwmj3uh = true ; } if ( localDW -> mzmvogimwr ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_b ) ; } } if ( localDW ->
hor5qoll31 == oyy4ffgkbi ) { if ( ! localDW -> ixpxwmj3uh ) { er0qshcg2f ( (
SimStruct * ) rtS_b , d4rzxmd0tu , & localB -> eqrog2hdmh , & localB ->
aseqcyqgtw , & localB -> dhjwhtydhg , & localB -> adsixgkqky , & localP ->
er0qshcg2fb ) ; } else { localDW -> ixpxwmj3uh = false ; } } else if ( !
localDW -> hg1u13cliy ) { koua2ggizf ( a1aakxb0kw , d4rzxmd0tu , & localB ->
aseqcyqgtw , & localB -> dhjwhtydhg , & localB -> eqrog2hdmh , & localB ->
adsixgkqky , rtp_br , rtp_Iyy , & localB -> koua2ggizf0 , & localP ->
koua2ggizf0 , & localX -> koua2ggizf0 ) ; } else { localDW -> hg1u13cliy =
false ; } } void ifd12z2us4TID5 ( real_T rtp_br , lj4asj5mcu * localB ,
m3chvwfzhf * localP ) { ost4s50i5xTID5 ( rtp_br , & localB -> ost4s50i5x5 , &
localP -> ost4s50i5x5 ) ; } void epfuneqdrc ( lj4asj5mcu * localB ,
jk5uxxpfl5 * localDW , i2a0hmsvxn * localXdot ) { localXdot -> koua2ggizf0 .
i1rcezf1gq = 0.0 ; if ( localDW -> hor5qoll31 == i3gedaj1y0 ) { nbekiifdnn (
& localB -> koua2ggizf0 , & localXdot -> koua2ggizf0 ) ; } if ( localDW ->
hor5qoll31 == oyy4ffgkbi ) { if ( localDW -> ixpxwmj3uh ) { localDW ->
ixpxwmj3uh = false ; } } else if ( localDW -> hg1u13cliy ) { localDW ->
hg1u13cliy = false ; } } static boolean_T hehd1pstki ( real_T Tout , real_T
Tfmaxs , c2fxpy2z1g * localB , mrsxdde3oa * localDW ) { boolean_T b_yn ;
localB -> fp3ahepphh = Tout ; localB -> hyfpurx0yo = Tfmaxs ; bsy0pqewaj (
localB -> fp3ahepphh , localB -> hyfpurx0yo , & localB -> o4j5vlwe14 , &
localDW -> o4j5vlwe14 ) ; b_yn = localB -> o4j5vlwe14 . myu2drybjk ; return
b_yn ; } static boolean_T izdw2nxrav ( real_T Tout , real_T Tfmaxs ,
c2fxpy2z1g * localB , mrsxdde3oa * localDW , epsb413ikh * localP ) {
boolean_T b_yn ; localB -> a0b3v1qg1i = Tout ; localB -> jmb0y2cftd = Tfmaxs
; ost4s50i5x ( localB -> a0b3v1qg1i , localB -> jmb0y2cftd , & localB ->
pjngj1ll1b , & localDW -> pjngj1ll1b , & localP -> pjngj1ll1b ) ; b_yn =
localB -> pjngj1ll1b . ayfwykncou ; return b_yn ; } void faznt0co0o ( real_T
rtp_omegao , c2fxpy2z1g * localB , mrsxdde3oa * localDW , epsb413ikh * localP
, d3hc2kyxu1 * localX ) { localDW -> bke41ski0c = e54rjne3kj ; localDW ->
ckcpmdbuxk = 0U ; localDW -> cwd4vpw3zu = j54zrnfi2r ; localX -> jl5e4qcf5y .
i1rcezf1gq = 0.0 ; localB -> j5ybwspdla = 0.0 ; localB -> pizt32ck1y = 0.0 ;
localB -> fjrzzbxuaj = 0.0 ; localB -> eykroya1zm = 0.0 ; ioxxeg3ii2 ( &
localB -> o4j5vlwe14 , & localP -> o4j5vlwe14 ) ; loiaz0s5vi ( & localB ->
pjngj1ll1b , & localDW -> pjngj1ll1b , & localP -> pjngj1ll1b ) ; ljvixv5dz0
( rtp_omegao , & localX -> jl5e4qcf5y ) ; } void ipqw4qhrhj ( c2fxpy2z1g *
localB ) { localB -> fp3ahepphh = 0.0 ; localB -> hyfpurx0yo = 0.0 ; localB
-> a0b3v1qg1i = 0.0 ; localB -> jmb0y2cftd = 0.0 ; localB -> j5ybwspdla = 0.0
; localB -> pizt32ck1y = 0.0 ; localB -> eykroya1zm = 0.0 ; localB ->
fjrzzbxuaj = 0.0 ; hleumlqoxf ( & localB -> eykroya1zm , & localB ->
j5ybwspdla , & localB -> pizt32ck1y , & localB -> fjrzzbxuaj ) ; aejxmdeg1v (
& localB -> o4j5vlwe14 ) ; bdgtgtn0zv ( & localB -> pjngj1ll1b ) ; pr0mh1uubi
( & localB -> j5ybwspdla , & localB -> pizt32ck1y , & localB -> eykroya1zm ,
& localB -> fjrzzbxuaj , & localB -> jl5e4qcf5y ) ; } void ox4yrtzjzo (
SimStruct * rtS_fd , real_T a42gq14v1q , real_T awxpau4z2l , real_T
lbjszii20x , real_T rtp_omegao , real_T rtp_br , real_T rtp_Iyy , real_T
rtp_OmegaTol , c2fxpy2z1g * localB , mrsxdde3oa * localDW , epsb413ikh *
localP , d3hc2kyxu1 * localX , iihlacg0mj * localXdis ) { if (
ssIsModeUpdateTimeStep ( rtS_fd ) ) { localDW -> gijsd2nxsh = ssGetTaskTime (
rtS_fd , 0 ) ; localDW -> ifu0e5plsq = false ; localDW -> bke41ski0c =
e54rjne3kj ; if ( localDW -> ckcpmdbuxk == 0U ) { localDW -> ckcpmdbuxk = 1U
; localX -> jl5e4qcf5y . i1rcezf1gq = rtp_omegao ; localDW -> ifu0e5plsq =
true ; localDW -> cwd4vpw3zu = o0yspya10c ; diq0mu0o25 ( ( SimStruct * )
rtS_fd , & localXdis -> jl5e4qcf5y ) ; koua2ggizf ( lbjszii20x , a42gq14v1q ,
& localB -> j5ybwspdla , & localB -> pizt32ck1y , & localB -> eykroya1zm , &
localB -> fjrzzbxuaj , rtp_br , rtp_Iyy , & localB -> jl5e4qcf5y , & localP
-> jl5e4qcf5y , & localX -> jl5e4qcf5y ) ; localDW -> ng4ch3t5fg = true ; }
else if ( localDW -> cwd4vpw3zu == bgxt5y230n ) { if ( hehd1pstki (
a42gq14v1q , awxpau4z2l , localB , localDW ) ) { localX -> jl5e4qcf5y .
i1rcezf1gq = 0.0 ; pkh4t44ipy ( ( SimStruct * ) rtS_fd ) ; localDW ->
i2d3dblxse = false ; localDW -> ifu0e5plsq = true ; localDW -> cwd4vpw3zu =
o0yspya10c ; diq0mu0o25 ( ( SimStruct * ) rtS_fd , & localXdis -> jl5e4qcf5y
) ; koua2ggizf ( lbjszii20x , a42gq14v1q , & localB -> j5ybwspdla , & localB
-> pizt32ck1y , & localB -> eykroya1zm , & localB -> fjrzzbxuaj , rtp_br ,
rtp_Iyy , & localB -> jl5e4qcf5y , & localP -> jl5e4qcf5y , & localX ->
jl5e4qcf5y ) ; localDW -> ng4ch3t5fg = true ; } } else if ( izdw2nxrav (
a42gq14v1q , awxpau4z2l , localB , localDW , localP ) && ( muDoubleScalarAbs
( localB -> j5ybwspdla ) <= rtp_OmegaTol ) ) { blj2blnlcv ( ( SimStruct * )
rtS_fd , & localXdis -> jl5e4qcf5y ) ; localDW -> ng4ch3t5fg = false ;
localDW -> ifu0e5plsq = true ; localDW -> cwd4vpw3zu = bgxt5y230n ;
jqss0ipnij ( ( SimStruct * ) rtS_fd ) ; er0qshcg2f ( ( SimStruct * ) rtS_fd ,
a42gq14v1q , & localB -> eykroya1zm , & localB -> j5ybwspdla , & localB ->
pizt32ck1y , & localB -> fjrzzbxuaj , & localP -> n4c32cozqj ) ; localDW ->
i2d3dblxse = true ; } if ( localDW -> ifu0e5plsq ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_fd ) ; } } if ( localDW ->
cwd4vpw3zu == bgxt5y230n ) { if ( ! localDW -> i2d3dblxse ) { er0qshcg2f ( (
SimStruct * ) rtS_fd , a42gq14v1q , & localB -> eykroya1zm , & localB ->
j5ybwspdla , & localB -> pizt32ck1y , & localB -> fjrzzbxuaj , & localP ->
n4c32cozqj ) ; } else { localDW -> i2d3dblxse = false ; } } else if ( !
localDW -> ng4ch3t5fg ) { koua2ggizf ( lbjszii20x , a42gq14v1q , & localB ->
j5ybwspdla , & localB -> pizt32ck1y , & localB -> eykroya1zm , & localB ->
fjrzzbxuaj , rtp_br , rtp_Iyy , & localB -> jl5e4qcf5y , & localP ->
jl5e4qcf5y , & localX -> jl5e4qcf5y ) ; } else { localDW -> ng4ch3t5fg =
false ; } } void ox4yrtzjzoTID5 ( real_T rtp_br , c2fxpy2z1g * localB ,
epsb413ikh * localP ) { ost4s50i5xTID5 ( rtp_br , & localB -> pjngj1ll1b , &
localP -> pjngj1ll1b ) ; } void keurgjamya ( c2fxpy2z1g * localB , mrsxdde3oa
* localDW , ln3hpsu2ij * localXdot ) { localXdot -> jl5e4qcf5y . i1rcezf1gq =
0.0 ; if ( localDW -> cwd4vpw3zu == o0yspya10c ) { nbekiifdnn ( & localB ->
jl5e4qcf5y , & localXdot -> jl5e4qcf5y ) ; } if ( localDW -> cwd4vpw3zu ==
bgxt5y230n ) { if ( localDW -> i2d3dblxse ) { localDW -> i2d3dblxse = false ;
} } else if ( localDW -> ng4ch3t5fg ) { localDW -> ng4ch3t5fg = false ; } }
static void oov4ikdzbn ( const real_T a [ 4 ] , real_T b , real_T c [ 4 ] ) {
__m128d tmp ; __m128d tmp_p ; real_T aBuffer [ 4 ] ; real_T b_a [ 4 ] ;
real_T cBuffer [ 4 ] ; real_T cBuffer_e [ 4 ] ; real_T cBuffer_p [ 4 ] ;
real_T y ; int32_T b_n ; int32_T n ; int32_T nb ; int32_T nbitson ; boolean_T
aBufferInUse ; boolean_T cBufferInUse ; boolean_T first ; if ( b == b ) { b_a
[ 0 ] = a [ 0 ] ; b_a [ 1 ] = a [ 1 ] ; b_a [ 2 ] = a [ 2 ] ; b_a [ 3 ] = a [
3 ] ; y = muDoubleScalarAbs ( b ) ; n = ( int32_T ) muDoubleScalarAbs ( b ) ;
b_n = ( int32_T ) y ; nbitson = 0 ; nb = - 2 ; while ( b_n > 0 ) { nb ++ ; if
( ( ( uint32_T ) b_n & 1U ) != 0U ) { nbitson ++ ; } b_n >>= 1 ; } if ( (
int32_T ) y <= 2 ) { if ( b == 2.0 ) { for ( b_n = 0 ; b_n < 2 ; b_n ++ ) { c
[ b_n << 1 ] = 0.0 ; c [ b_n << 1 ] += a [ b_n << 1 ] * a [ 0 ] ; c [ b_n <<
1 ] += a [ ( b_n << 1 ) + 1 ] * a [ 2 ] ; c [ ( b_n << 1 ) + 1 ] = 0.0 ; c [
( b_n << 1 ) + 1 ] += a [ b_n << 1 ] * a [ 1 ] ; c [ ( b_n << 1 ) + 1 ] += a
[ ( b_n << 1 ) + 1 ] * a [ 3 ] ; } } else if ( b == 1.0 ) { c [ 0 ] = a [ 0 ]
; c [ 1 ] = a [ 1 ] ; c [ 2 ] = a [ 2 ] ; c [ 3 ] = a [ 3 ] ; } else { first
= false ; if ( muDoubleScalarIsNaN ( a [ 0 ] ) || muDoubleScalarIsNaN ( a [ 1
] ) ) { first = true ; } if ( first || muDoubleScalarIsNaN ( a [ 2 ] ) ) {
first = true ; } if ( first || muDoubleScalarIsNaN ( a [ 3 ] ) ) { first =
true ; } if ( first ) { c [ 0 ] = ( rtNaN ) ; c [ 1 ] = ( rtNaN ) ; c [ 2 ] =
( rtNaN ) ; c [ 3 ] = ( rtNaN ) ; } else { c [ 1 ] = 0.0 ; c [ 2 ] = 0.0 ; c
[ 0 ] = 1.0 ; c [ 3 ] = 1.0 ; } } } else { first = true ; aBufferInUse =
false ; cBufferInUse = ( ( ( uint32_T ) nbitson & 1U ) == 0U ) ; for (
nbitson = 0 ; nbitson <= nb ; nbitson ++ ) { if ( ( ( uint32_T ) n & 1U ) !=
0U ) { if ( first ) { first = false ; if ( cBufferInUse ) { if ( aBufferInUse
) { cBuffer [ 0 ] = aBuffer [ 0 ] ; cBuffer [ 1 ] = aBuffer [ 1 ] ; cBuffer [
2 ] = aBuffer [ 2 ] ; cBuffer [ 3 ] = aBuffer [ 3 ] ; } else { cBuffer [ 0 ]
= b_a [ 0 ] ; cBuffer [ 1 ] = b_a [ 1 ] ; cBuffer [ 2 ] = b_a [ 2 ] ; cBuffer
[ 3 ] = b_a [ 3 ] ; } } else if ( aBufferInUse ) { c [ 0 ] = aBuffer [ 0 ] ;
c [ 1 ] = aBuffer [ 1 ] ; c [ 2 ] = aBuffer [ 2 ] ; c [ 3 ] = aBuffer [ 3 ] ;
} else { c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c [ 2 ] = b_a [ 2 ] ; c
[ 3 ] = b_a [ 3 ] ; } } else { if ( aBufferInUse ) { if ( cBufferInUse ) {
for ( b_n = 0 ; b_n <= 0 ; b_n += 2 ) { _mm_storeu_pd ( & c [ b_n ] ,
_mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; tmp_p =
_mm_loadu_pd ( & c [ b_n ] ) ; _mm_storeu_pd ( & c [ b_n ] , _mm_add_pd (
_mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 0 ] ) ) , tmp_p ) ) ; tmp =
_mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n ] )
; _mm_storeu_pd ( & c [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd (
aBuffer [ 1 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & c [ b_n + 2 ] , _mm_set1_pd
( 0.0 ) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd (
& c [ b_n + 2 ] ) ; _mm_storeu_pd ( & c [ b_n + 2 ] , _mm_add_pd ( tmp_p ,
_mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd (
& cBuffer [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n + 2 ] ) ;
_mm_storeu_pd ( & c [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd
( aBuffer [ 3 ] ) ) , tmp_p ) ) ; } } else { for ( b_n = 0 ; b_n <= 0 ; b_n
+= 2 ) { _mm_storeu_pd ( & cBuffer [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & c [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ;
_mm_storeu_pd ( & cBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( aBuffer [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & c [ b_n
+ 2 ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; _mm_storeu_pd ( &
cBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 1 ]
) ) , tmp_p ) ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_set1_pd ( 0.0 )
) ; tmp = _mm_loadu_pd ( & c [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [
b_n + 2 ] ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( tmp_p ,
_mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd (
& c [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ;
_mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( aBuffer [ 3 ] ) ) , tmp_p ) ) ; } } } else if ( cBufferInUse )
{ for ( b_n = 0 ; b_n <= 0 ; b_n += 2 ) { _mm_storeu_pd ( & c [ b_n ] ,
_mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; tmp_p =
_mm_loadu_pd ( & c [ b_n ] ) ; _mm_storeu_pd ( & c [ b_n ] , _mm_add_pd (
_mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 0 ] ) ) , tmp_p ) ) ; tmp =
_mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n ] )
; _mm_storeu_pd ( & c [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd (
b_a [ 1 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & c [ b_n + 2 ] , _mm_set1_pd (
0.0 ) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd ( &
c [ b_n + 2 ] ) ; _mm_storeu_pd ( & c [ b_n + 2 ] , _mm_add_pd ( tmp_p ,
_mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( &
cBuffer [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n + 2 ] ) ;
_mm_storeu_pd ( & c [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd
( b_a [ 3 ] ) ) , tmp_p ) ) ; } } else { for ( b_n = 0 ; b_n <= 0 ; b_n += 2
) { _mm_storeu_pd ( & cBuffer [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & c [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ;
_mm_storeu_pd ( & cBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & c [ b_n + 2
] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; _mm_storeu_pd ( & cBuffer
[ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 1 ] ) ) , tmp_p
) ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & c [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] )
; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd (
tmp , _mm_set1_pd ( b_a [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & c [ b_n + 2 ]
) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ; _mm_storeu_pd ( &
cBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 3 ]
) ) , tmp_p ) ) ; } } cBufferInUse = ! cBufferInUse ; } } n >>= 1 ; if (
aBufferInUse ) { for ( b_n = 0 ; b_n <= 0 ; b_n += 2 ) { _mm_storeu_pd ( &
b_a [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & aBuffer [ b_n ]
) ; tmp_p = _mm_loadu_pd ( & b_a [ b_n ] ) ; _mm_storeu_pd ( & b_a [ b_n ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 0 ] ) ) , tmp_p ) ) ;
tmp = _mm_loadu_pd ( & aBuffer [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & b_a [
b_n ] ) ; _mm_storeu_pd ( & b_a [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( aBuffer [ 1 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & b_a [ b_n + 2
] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & aBuffer [ b_n ] ) ; tmp_p
= _mm_loadu_pd ( & b_a [ b_n + 2 ] ) ; _mm_storeu_pd ( & b_a [ b_n + 2 ] ,
_mm_add_pd ( tmp_p , _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 2 ] ) ) ) ) ;
tmp = _mm_loadu_pd ( & aBuffer [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & b_a [
b_n + 2 ] ) ; _mm_storeu_pd ( & b_a [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd (
tmp , _mm_set1_pd ( aBuffer [ 3 ] ) ) , tmp_p ) ) ; } } else { for ( b_n = 0
; b_n <= 0 ; b_n += 2 ) { _mm_storeu_pd ( & aBuffer [ b_n ] , _mm_set1_pd (
0.0 ) ) ; tmp = _mm_loadu_pd ( & b_a [ b_n ] ) ; tmp_p = _mm_loadu_pd ( &
aBuffer [ b_n ] ) ; _mm_storeu_pd ( & aBuffer [ b_n ] , _mm_add_pd (
_mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 0 ] ) ) , tmp_p ) ) ; tmp =
_mm_loadu_pd ( & b_a [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & aBuffer [ b_n ]
) ; _mm_storeu_pd ( & aBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 1 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & aBuffer [ b_n + 2
] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & b_a [ b_n ] ) ; tmp_p =
_mm_loadu_pd ( & aBuffer [ b_n + 2 ] ) ; _mm_storeu_pd ( & aBuffer [ b_n + 2
] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 2 ] ) ) ) ) ;
tmp = _mm_loadu_pd ( & b_a [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & aBuffer [
b_n + 2 ] ) ; _mm_storeu_pd ( & aBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd
( tmp , _mm_set1_pd ( b_a [ 3 ] ) ) , tmp_p ) ) ; } } aBufferInUse = !
aBufferInUse ; } for ( b_n = 0 ; b_n < 2 ; b_n ++ ) { cBuffer_p [ b_n << 1 ]
= 0.0 ; cBuffer_e [ b_n << 1 ] = 0.0 ; cBuffer_p [ b_n << 1 ] += aBuffer [
b_n << 1 ] * cBuffer [ 0 ] ; cBuffer_e [ b_n << 1 ] += b_a [ b_n << 1 ] *
cBuffer [ 0 ] ; cBuffer_p [ b_n << 1 ] += aBuffer [ ( b_n << 1 ) + 1 ] *
cBuffer [ 2 ] ; cBuffer_e [ b_n << 1 ] += b_a [ ( b_n << 1 ) + 1 ] * cBuffer
[ 2 ] ; cBuffer_p [ ( b_n << 1 ) + 1 ] = 0.0 ; cBuffer_e [ ( b_n << 1 ) + 1 ]
= 0.0 ; cBuffer_p [ ( b_n << 1 ) + 1 ] += aBuffer [ b_n << 1 ] * cBuffer [ 1
] ; cBuffer_e [ ( b_n << 1 ) + 1 ] += b_a [ b_n << 1 ] * cBuffer [ 1 ] ;
cBuffer_p [ ( b_n << 1 ) + 1 ] += aBuffer [ ( b_n << 1 ) + 1 ] * cBuffer [ 3
] ; cBuffer_e [ ( b_n << 1 ) + 1 ] += b_a [ ( b_n << 1 ) + 1 ] * cBuffer [ 3
] ; } if ( first ) { if ( aBufferInUse ) { c [ 0 ] = aBuffer [ 0 ] ; c [ 1 ]
= aBuffer [ 1 ] ; c [ 2 ] = aBuffer [ 2 ] ; c [ 3 ] = aBuffer [ 3 ] ; } else
{ c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c [ 2 ] = b_a [ 2 ] ; c [ 3 ] =
b_a [ 3 ] ; } } else if ( aBufferInUse ) { c [ 0 ] = cBuffer_p [ 0 ] ; c [ 1
] = cBuffer_p [ 1 ] ; c [ 2 ] = cBuffer_p [ 2 ] ; c [ 3 ] = cBuffer_p [ 3 ] ;
} else { c [ 0 ] = cBuffer_e [ 0 ] ; c [ 1 ] = cBuffer_e [ 1 ] ; c [ 2 ] =
cBuffer_e [ 2 ] ; c [ 3 ] = cBuffer_e [ 3 ] ; } } } } static boolean_T
af5cauz3wt ( const real_T x [ 4 ] ) { boolean_T b_p ; b_p = true ; if (
muDoubleScalarIsInf ( x [ 0 ] ) || muDoubleScalarIsNaN ( x [ 0 ] ) ) { b_p =
false ; } if ( b_p && ( ( ! muDoubleScalarIsInf ( x [ 1 ] ) ) && ( !
muDoubleScalarIsNaN ( x [ 1 ] ) ) ) ) { } else { b_p = false ; } if ( b_p &&
( ( ! muDoubleScalarIsInf ( x [ 2 ] ) ) && ( ! muDoubleScalarIsNaN ( x [ 2 ]
) ) ) ) { } else { b_p = false ; } if ( b_p && ( ( ! muDoubleScalarIsInf ( x
[ 3 ] ) ) && ( ! muDoubleScalarIsNaN ( x [ 3 ] ) ) ) ) { } else { b_p = false
; } return ! b_p ; } static void fwa4u0lygc ( const real_T a [ 4 ] , real_T b
, real_T c [ 4 ] ) { __m128d tmp ; __m128d tmp_p ; real_T aBuffer [ 4 ] ;
real_T b_a [ 4 ] ; real_T cBuffer [ 4 ] ; real_T cBuffer_e [ 4 ] ; real_T
cBuffer_p [ 4 ] ; real_T e ; real_T ed2 ; int32_T b_n ; int32_T exitg1 ;
int32_T n ; int32_T nb ; int32_T nbitson ; boolean_T aBufferInUse ; boolean_T
cBufferInUse ; boolean_T firstmult ; if ( muDoubleScalarAbs ( b ) <=
2.147483647E+9 ) { b_a [ 0 ] = a [ 0 ] ; b_a [ 1 ] = a [ 1 ] ; b_a [ 2 ] = a
[ 2 ] ; b_a [ 3 ] = a [ 3 ] ; e = muDoubleScalarAbs ( b ) ; n = ( int32_T )
muDoubleScalarAbs ( b ) ; b_n = ( int32_T ) e ; nbitson = 0 ; nb = - 2 ;
while ( b_n > 0 ) { nb ++ ; if ( ( ( uint32_T ) b_n & 1U ) != 0U ) { nbitson
++ ; } b_n >>= 1 ; } if ( ( int32_T ) e <= 2 ) { if ( b == 2.0 ) { for ( b_n
= 0 ; b_n < 2 ; b_n ++ ) { c [ b_n << 1 ] = 0.0 ; c [ b_n << 1 ] += a [ b_n
<< 1 ] * a [ 0 ] ; c [ b_n << 1 ] += a [ ( b_n << 1 ) + 1 ] * a [ 2 ] ; c [ (
b_n << 1 ) + 1 ] = 0.0 ; c [ ( b_n << 1 ) + 1 ] += a [ b_n << 1 ] * a [ 1 ] ;
c [ ( b_n << 1 ) + 1 ] += a [ ( b_n << 1 ) + 1 ] * a [ 3 ] ; } } else {
firstmult = false ; if ( muDoubleScalarIsNaN ( a [ 0 ] ) ||
muDoubleScalarIsNaN ( a [ 1 ] ) ) { firstmult = true ; } if ( firstmult ||
muDoubleScalarIsNaN ( a [ 2 ] ) ) { firstmult = true ; } if ( firstmult ||
muDoubleScalarIsNaN ( a [ 3 ] ) ) { firstmult = true ; } if ( firstmult ) { c
[ 0 ] = ( rtNaN ) ; c [ 1 ] = ( rtNaN ) ; c [ 2 ] = ( rtNaN ) ; c [ 3 ] = (
rtNaN ) ; } else { c [ 1 ] = 0.0 ; c [ 2 ] = 0.0 ; c [ 0 ] = 1.0 ; c [ 3 ] =
1.0 ; } } } else { firstmult = true ; aBufferInUse = false ; cBufferInUse = (
( ( uint32_T ) nbitson & 1U ) == 0U ) ; for ( nbitson = 0 ; nbitson <= nb ;
nbitson ++ ) { if ( ( ( uint32_T ) n & 1U ) != 0U ) { if ( firstmult ) {
firstmult = false ; if ( cBufferInUse ) { if ( aBufferInUse ) { cBuffer [ 0 ]
= aBuffer [ 0 ] ; cBuffer [ 1 ] = aBuffer [ 1 ] ; cBuffer [ 2 ] = aBuffer [ 2
] ; cBuffer [ 3 ] = aBuffer [ 3 ] ; } else { cBuffer [ 0 ] = b_a [ 0 ] ;
cBuffer [ 1 ] = b_a [ 1 ] ; cBuffer [ 2 ] = b_a [ 2 ] ; cBuffer [ 3 ] = b_a [
3 ] ; } } else if ( aBufferInUse ) { c [ 0 ] = aBuffer [ 0 ] ; c [ 1 ] =
aBuffer [ 1 ] ; c [ 2 ] = aBuffer [ 2 ] ; c [ 3 ] = aBuffer [ 3 ] ; } else {
c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c [ 2 ] = b_a [ 2 ] ; c [ 3 ] =
b_a [ 3 ] ; } } else { if ( aBufferInUse ) { if ( cBufferInUse ) { for ( b_n
= 0 ; b_n <= 0 ; b_n += 2 ) { _mm_storeu_pd ( & c [ b_n ] , _mm_set1_pd ( 0.0
) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & c [
b_n ] ) ; _mm_storeu_pd ( & c [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( aBuffer [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & cBuffer
[ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n ] ) ; _mm_storeu_pd ( & c [
b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 1 ] ) ) ,
tmp_p ) ) ; _mm_storeu_pd ( & c [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & cBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n + 2 ] )
; _mm_storeu_pd ( & c [ b_n + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp ,
_mm_set1_pd ( aBuffer [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n +
2 ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n + 2 ] ) ; _mm_storeu_pd ( & c [ b_n
+ 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 3 ] ) ) ,
tmp_p ) ) ; } } else { for ( b_n = 0 ; b_n <= 0 ; b_n += 2 ) { _mm_storeu_pd
( & cBuffer [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & c [ b_n
] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; _mm_storeu_pd ( & cBuffer
[ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 0 ] ) ) ,
tmp_p ) ) ; tmp = _mm_loadu_pd ( & c [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( &
cBuffer [ b_n ] ) ; _mm_storeu_pd ( & cBuffer [ b_n ] , _mm_add_pd (
_mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 1 ] ) ) , tmp_p ) ) ;
_mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & c [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] )
; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd (
tmp , _mm_set1_pd ( aBuffer [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & c [ b_n +
2 ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ; _mm_storeu_pd ( &
cBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [
3 ] ) ) , tmp_p ) ) ; } } } else if ( cBufferInUse ) { for ( b_n = 0 ; b_n <=
0 ; b_n += 2 ) { _mm_storeu_pd ( & c [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & cBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n ] ) ;
_mm_storeu_pd ( & c [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd (
b_a [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ;
tmp_p = _mm_loadu_pd ( & c [ b_n ] ) ; _mm_storeu_pd ( & c [ b_n ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 1 ] ) ) , tmp_p ) ) ;
_mm_storeu_pd ( & c [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd
( & cBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & c [ b_n + 2 ] ) ;
_mm_storeu_pd ( & c [ b_n + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & cBuffer [ b_n + 2 ]
) ; tmp_p = _mm_loadu_pd ( & c [ b_n + 2 ] ) ; _mm_storeu_pd ( & c [ b_n + 2
] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 3 ] ) ) , tmp_p ) ) ;
} } else { for ( b_n = 0 ; b_n <= 0 ; b_n += 2 ) { _mm_storeu_pd ( & cBuffer
[ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & c [ b_n ] ) ; tmp_p
= _mm_loadu_pd ( & cBuffer [ b_n ] ) ; _mm_storeu_pd ( & cBuffer [ b_n ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 0 ] ) ) , tmp_p ) ) ; tmp
= _mm_loadu_pd ( & c [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ]
) ; _mm_storeu_pd ( & cBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 1 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2
] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & c [ b_n ] ) ; tmp_p =
_mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2
] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 2 ] ) ) ) ) ;
tmp = _mm_loadu_pd ( & c [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [
b_n + 2 ] ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd
( tmp , _mm_set1_pd ( b_a [ 3 ] ) ) , tmp_p ) ) ; } } cBufferInUse = !
cBufferInUse ; } } n >>= 1 ; if ( aBufferInUse ) { for ( b_n = 0 ; b_n <= 0 ;
b_n += 2 ) { _mm_storeu_pd ( & b_a [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & aBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & b_a [ b_n ] ) ;
_mm_storeu_pd ( & b_a [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd (
aBuffer [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & aBuffer [ b_n + 2 ] )
; tmp_p = _mm_loadu_pd ( & b_a [ b_n ] ) ; _mm_storeu_pd ( & b_a [ b_n ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 1 ] ) ) , tmp_p ) ) ;
_mm_storeu_pd ( & b_a [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & aBuffer [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & b_a [ b_n + 2 ]
) ; _mm_storeu_pd ( & b_a [ b_n + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp
, _mm_set1_pd ( aBuffer [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & aBuffer [ b_n
+ 2 ] ) ; tmp_p = _mm_loadu_pd ( & b_a [ b_n + 2 ] ) ; _mm_storeu_pd ( & b_a
[ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( aBuffer [ 3 ] ) )
, tmp_p ) ) ; } } else { for ( b_n = 0 ; b_n <= 0 ; b_n += 2 ) {
_mm_storeu_pd ( & aBuffer [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & b_a [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & aBuffer [ b_n ] ) ;
_mm_storeu_pd ( & aBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & b_a [ b_n +
2 ] ) ; tmp_p = _mm_loadu_pd ( & aBuffer [ b_n ] ) ; _mm_storeu_pd ( &
aBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 1 ] ) )
, tmp_p ) ) ; _mm_storeu_pd ( & aBuffer [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ;
tmp = _mm_loadu_pd ( & b_a [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & aBuffer [ b_n
+ 2 ] ) ; _mm_storeu_pd ( & aBuffer [ b_n + 2 ] , _mm_add_pd ( tmp_p ,
_mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( &
b_a [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & aBuffer [ b_n + 2 ] ) ;
_mm_storeu_pd ( & aBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 3 ] ) ) , tmp_p ) ) ; } } aBufferInUse = ! aBufferInUse ;
} for ( b_n = 0 ; b_n < 2 ; b_n ++ ) { cBuffer_p [ b_n << 1 ] = 0.0 ;
cBuffer_e [ b_n << 1 ] = 0.0 ; cBuffer_p [ b_n << 1 ] += aBuffer [ b_n << 1 ]
* cBuffer [ 0 ] ; cBuffer_e [ b_n << 1 ] += b_a [ b_n << 1 ] * cBuffer [ 0 ]
; cBuffer_p [ b_n << 1 ] += aBuffer [ ( b_n << 1 ) + 1 ] * cBuffer [ 2 ] ;
cBuffer_e [ b_n << 1 ] += b_a [ ( b_n << 1 ) + 1 ] * cBuffer [ 2 ] ;
cBuffer_p [ ( b_n << 1 ) + 1 ] = 0.0 ; cBuffer_e [ ( b_n << 1 ) + 1 ] = 0.0 ;
cBuffer_p [ ( b_n << 1 ) + 1 ] += aBuffer [ b_n << 1 ] * cBuffer [ 1 ] ;
cBuffer_e [ ( b_n << 1 ) + 1 ] += b_a [ b_n << 1 ] * cBuffer [ 1 ] ;
cBuffer_p [ ( b_n << 1 ) + 1 ] += aBuffer [ ( b_n << 1 ) + 1 ] * cBuffer [ 3
] ; cBuffer_e [ ( b_n << 1 ) + 1 ] += b_a [ ( b_n << 1 ) + 1 ] * cBuffer [ 3
] ; } if ( firstmult ) { if ( aBufferInUse ) { c [ 0 ] = aBuffer [ 0 ] ; c [
1 ] = aBuffer [ 1 ] ; c [ 2 ] = aBuffer [ 2 ] ; c [ 3 ] = aBuffer [ 3 ] ; }
else { c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c [ 2 ] = b_a [ 2 ] ; c [
3 ] = b_a [ 3 ] ; } } else if ( aBufferInUse ) { c [ 0 ] = cBuffer_p [ 0 ] ;
c [ 1 ] = cBuffer_p [ 1 ] ; c [ 2 ] = cBuffer_p [ 2 ] ; c [ 3 ] = cBuffer_p [
3 ] ; } else { c [ 0 ] = cBuffer_e [ 0 ] ; c [ 1 ] = cBuffer_e [ 1 ] ; c [ 2
] = cBuffer_e [ 2 ] ; c [ 3 ] = cBuffer_e [ 3 ] ; } } } else { b_a [ 0 ] = a
[ 0 ] ; b_a [ 1 ] = a [ 1 ] ; b_a [ 2 ] = a [ 2 ] ; b_a [ 3 ] = a [ 3 ] ; if
( ( ! muDoubleScalarIsInf ( b ) ) && ( ! muDoubleScalarIsNaN ( b ) ) ) { e =
muDoubleScalarAbs ( b ) ; firstmult = true ; do { exitg1 = 0 ; ed2 =
muDoubleScalarFloor ( e / 2.0 ) ; if ( 2.0 * ed2 != e ) { if ( firstmult ) {
c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c [ 2 ] = b_a [ 2 ] ; c [ 3 ] =
b_a [ 3 ] ; firstmult = false ; } else { for ( b_n = 0 ; b_n <= 0 ; b_n += 2
) { _mm_storeu_pd ( & cBuffer [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & c [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ;
_mm_storeu_pd ( & cBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & c [ b_n + 2
] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; _mm_storeu_pd ( & cBuffer
[ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 1 ] ) ) , tmp_p
) ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & c [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] )
; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd (
tmp , _mm_set1_pd ( b_a [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & c [ b_n + 2 ]
) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ; _mm_storeu_pd ( &
cBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 3 ]
) ) , tmp_p ) ) ; } c [ 0 ] = cBuffer [ 0 ] ; c [ 1 ] = cBuffer [ 1 ] ; c [ 2
] = cBuffer [ 2 ] ; c [ 3 ] = cBuffer [ 3 ] ; } } if ( ed2 == 0.0 ) { exitg1
= 1 ; } else { e = ed2 ; for ( b_n = 0 ; b_n <= 0 ; b_n += 2 ) {
_mm_storeu_pd ( & cBuffer [ b_n ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & b_a [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ;
_mm_storeu_pd ( & cBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd ( & b_a [ b_n +
2 ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n ] ) ; _mm_storeu_pd ( &
cBuffer [ b_n ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 1 ] ) )
, tmp_p ) ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_set1_pd ( 0.0 ) ) ;
tmp = _mm_loadu_pd ( & b_a [ b_n ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n
+ 2 ] ) ; _mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( tmp_p ,
_mm_mul_pd ( tmp , _mm_set1_pd ( b_a [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( &
b_a [ b_n + 2 ] ) ; tmp_p = _mm_loadu_pd ( & cBuffer [ b_n + 2 ] ) ;
_mm_storeu_pd ( & cBuffer [ b_n + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( b_a [ 3 ] ) ) , tmp_p ) ) ; } b_a [ 0 ] = cBuffer [ 0 ] ; b_a [
1 ] = cBuffer [ 1 ] ; b_a [ 2 ] = cBuffer [ 2 ] ; b_a [ 3 ] = cBuffer [ 3 ] ;
} } while ( exitg1 == 0 ) ; } else { c [ 0 ] = ( rtNaN ) ; c [ 1 ] = ( rtNaN
) ; c [ 2 ] = ( rtNaN ) ; c [ 3 ] = ( rtNaN ) ; } } } static void ao4ajfc0ke
( const real_T A [ 4 ] , real_T A2 [ 4 ] , real_T A4 [ 4 ] , real_T A6 [ 4 ]
, int32_T * m , real_T * s ) { __m128d tmp ; __m128d tmp_p ; real_T A4_p [ 4
] ; real_T T [ 4 ] ; real_T tmp_e [ 4 ] ; real_T d6 ; real_T eta1 ; int32_T
b_s ; int32_T i ; boolean_T guard1 = false ; boolean_T guard2 = false ;
boolean_T guard3 = false ; boolean_T guard4 = false ; * s = 0.0 ; for ( i = 0
; i < 2 ; i ++ ) { A2 [ i << 1 ] = 0.0 ; A2 [ i << 1 ] += A [ i << 1 ] * A [
0 ] ; A2 [ i << 1 ] += A [ ( i << 1 ) + 1 ] * A [ 2 ] ; A2 [ ( i << 1 ) + 1 ]
= 0.0 ; A2 [ ( i << 1 ) + 1 ] += A [ i << 1 ] * A [ 1 ] ; A2 [ ( i << 1 ) + 1
] += A [ ( i << 1 ) + 1 ] * A [ 3 ] ; } for ( i = 0 ; i <= 0 ; i += 2 ) {
_mm_storeu_pd ( & A4 [ i ] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( &
A2 [ i ] ) ; tmp_p = _mm_loadu_pd ( & A4 [ i ] ) ; _mm_storeu_pd ( & A4 [ i ]
, _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A2 [ 0 ] ) ) , tmp_p ) ) ;
tmp = _mm_loadu_pd ( & A2 [ i + 2 ] ) ; tmp_p = _mm_loadu_pd ( & A4 [ i ] ) ;
_mm_storeu_pd ( & A4 [ i ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A2
[ 1 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & A4 [ i + 2 ] , _mm_set1_pd ( 0.0 )
) ; tmp = _mm_loadu_pd ( & A2 [ i ] ) ; tmp_p = _mm_loadu_pd ( & A4 [ i + 2 ]
) ; _mm_storeu_pd ( & A4 [ i + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp ,
_mm_set1_pd ( A2 [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & A2 [ i + 2 ] ) ;
tmp_p = _mm_loadu_pd ( & A4 [ i + 2 ] ) ; _mm_storeu_pd ( & A4 [ i + 2 ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A2 [ 3 ] ) ) , tmp_p ) ) ;
_mm_storeu_pd ( & A6 [ i ] , _mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( &
A4 [ i ] ) ; tmp_p = _mm_loadu_pd ( & A6 [ i ] ) ; _mm_storeu_pd ( & A6 [ i ]
, _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A2 [ 0 ] ) ) , tmp_p ) ) ;
tmp = _mm_loadu_pd ( & A4 [ i + 2 ] ) ; tmp_p = _mm_loadu_pd ( & A6 [ i ] ) ;
_mm_storeu_pd ( & A6 [ i ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A2
[ 1 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & A6 [ i + 2 ] , _mm_set1_pd ( 0.0 )
) ; tmp = _mm_loadu_pd ( & A4 [ i ] ) ; tmp_p = _mm_loadu_pd ( & A6 [ i + 2 ]
) ; _mm_storeu_pd ( & A6 [ i + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp ,
_mm_set1_pd ( A2 [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & A4 [ i + 2 ] ) ;
tmp_p = _mm_loadu_pd ( & A6 [ i + 2 ] ) ; _mm_storeu_pd ( & A6 [ i + 2 ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A2 [ 3 ] ) ) , tmp_p ) ) ; } d6
= muDoubleScalarPower ( norm_CF3EtBNC ( A6 ) , 0.16666666666666666 ) ; eta1 =
muDoubleScalarMax ( muDoubleScalarPower ( norm_CF3EtBNC ( A4 ) , 0.25 ) , d6
) ; guard1 = false ; guard2 = false ; guard3 = false ; guard4 = false ; if (
eta1 <= 0.01495585217958292 ) { A4_p [ 0 ] = 0.19285012468241128 *
muDoubleScalarAbs ( A [ 0 ] ) ; A4_p [ 1 ] = 0.19285012468241128 *
muDoubleScalarAbs ( A [ 1 ] ) ; A4_p [ 2 ] = 0.19285012468241128 *
muDoubleScalarAbs ( A [ 2 ] ) ; A4_p [ 3 ] = 0.19285012468241128 *
muDoubleScalarAbs ( A [ 3 ] ) ; fwa4u0lygc ( A4_p , 7.0 , tmp_e ) ; if (
muDoubleScalarMax ( muDoubleScalarCeil ( log2_DgASG5hL ( norm_CF3EtBNC (
tmp_e ) / norm_CF3EtBNC ( A ) * 2.0 / 2.2204460492503131E-16 ) / 6.0 ) , 0.0
) == 0.0 ) { * m = 3 ; } else { guard4 = true ; } } else { guard4 = true ; }
if ( guard4 ) { if ( eta1 <= 0.253939833006323 ) { A4_p [ 0 ] =
0.12321872304378752 * muDoubleScalarAbs ( A [ 0 ] ) ; A4_p [ 1 ] =
0.12321872304378752 * muDoubleScalarAbs ( A [ 1 ] ) ; A4_p [ 2 ] =
0.12321872304378752 * muDoubleScalarAbs ( A [ 2 ] ) ; A4_p [ 3 ] =
0.12321872304378752 * muDoubleScalarAbs ( A [ 3 ] ) ; fwa4u0lygc ( A4_p ,
11.0 , tmp_e ) ; if ( muDoubleScalarMax ( muDoubleScalarCeil ( log2_DgASG5hL
( norm_CF3EtBNC ( tmp_e ) / norm_CF3EtBNC ( A ) * 2.0 /
2.2204460492503131E-16 ) / 10.0 ) , 0.0 ) == 0.0 ) { * m = 5 ; } else {
guard3 = true ; } } else { guard3 = true ; } } if ( guard3 ) { fwa4u0lygc (
A4 , 2.0 , tmp_e ) ; eta1 = muDoubleScalarPower ( norm_CF3EtBNC ( tmp_e ) ,
0.125 ) ; d6 = muDoubleScalarMax ( d6 , eta1 ) ; if ( d6 <=
0.95041789961629319 ) { A4_p [ 0 ] = 0.090475336558796943 * muDoubleScalarAbs
( A [ 0 ] ) ; A4_p [ 1 ] = 0.090475336558796943 * muDoubleScalarAbs ( A [ 1 ]
) ; A4_p [ 2 ] = 0.090475336558796943 * muDoubleScalarAbs ( A [ 2 ] ) ; A4_p
[ 3 ] = 0.090475336558796943 * muDoubleScalarAbs ( A [ 3 ] ) ; fwa4u0lygc (
A4_p , 15.0 , tmp_e ) ; if ( muDoubleScalarMax ( muDoubleScalarCeil (
log2_DgASG5hL ( norm_CF3EtBNC ( tmp_e ) / norm_CF3EtBNC ( A ) * 2.0 /
2.2204460492503131E-16 ) / 14.0 ) , 0.0 ) == 0.0 ) { * m = 7 ; } else {
guard2 = true ; } } else { guard2 = true ; } } if ( guard2 ) { if ( d6 <=
2.097847961257068 ) { A4_p [ 0 ] = 0.071467735648795785 * muDoubleScalarAbs (
A [ 0 ] ) ; A4_p [ 1 ] = 0.071467735648795785 * muDoubleScalarAbs ( A [ 1 ] )
; A4_p [ 2 ] = 0.071467735648795785 * muDoubleScalarAbs ( A [ 2 ] ) ; A4_p [
3 ] = 0.071467735648795785 * muDoubleScalarAbs ( A [ 3 ] ) ; fwa4u0lygc (
A4_p , 19.0 , tmp_e ) ; if ( muDoubleScalarMax ( muDoubleScalarCeil (
log2_DgASG5hL ( norm_CF3EtBNC ( tmp_e ) / norm_CF3EtBNC ( A ) * 2.0 /
2.2204460492503131E-16 ) / 18.0 ) , 0.0 ) == 0.0 ) { * m = 9 ; } else {
guard1 = true ; } } else { guard1 = true ; } } if ( guard1 ) { for ( i = 0 ;
i < 2 ; i ++ ) { A4_p [ i << 1 ] = 0.0 ; A4_p [ i << 1 ] += A6 [ i << 1 ] *
A4 [ 0 ] ; A4_p [ i << 1 ] += A6 [ ( i << 1 ) + 1 ] * A4 [ 2 ] ; A4_p [ ( i
<< 1 ) + 1 ] = 0.0 ; A4_p [ ( i << 1 ) + 1 ] += A6 [ i << 1 ] * A4 [ 1 ] ;
A4_p [ ( i << 1 ) + 1 ] += A6 [ ( i << 1 ) + 1 ] * A4 [ 3 ] ; } * s =
muDoubleScalarMax ( muDoubleScalarCeil ( log2_DgASG5hL ( muDoubleScalarMin (
d6 , muDoubleScalarMax ( eta1 , muDoubleScalarPower ( norm_CF3EtBNC ( A4_p )
, 0.1 ) ) ) / 5.3719203511481517 ) ) , 0.0 ) ; d6 = muDoubleScalarPower ( 2.0
, * s ) ; eta1 = A [ 0 ] / d6 ; A4_p [ 0 ] = 0.05031554467093536 *
muDoubleScalarAbs ( eta1 ) ; T [ 0 ] = eta1 ; eta1 = A [ 1 ] / d6 ; A4_p [ 1
] = 0.05031554467093536 * muDoubleScalarAbs ( eta1 ) ; T [ 1 ] = eta1 ; eta1
= A [ 2 ] / d6 ; A4_p [ 2 ] = 0.05031554467093536 * muDoubleScalarAbs ( eta1
) ; T [ 2 ] = eta1 ; eta1 = A [ 3 ] / d6 ; A4_p [ 3 ] = 0.05031554467093536 *
muDoubleScalarAbs ( eta1 ) ; T [ 3 ] = eta1 ; fwa4u0lygc ( A4_p , 27.0 ,
tmp_e ) ; * s += muDoubleScalarMax ( muDoubleScalarCeil ( log2_DgASG5hL (
norm_CF3EtBNC ( tmp_e ) / norm_CF3EtBNC ( T ) * 2.0 / 2.2204460492503131E-16
) / 26.0 ) , 0.0 ) ; if ( muDoubleScalarIsInf ( * s ) ) { d6 = norm_CF3EtBNC
( A ) / 5.3719203511481517 ; if ( ( ! muDoubleScalarIsInf ( d6 ) ) && ( !
muDoubleScalarIsNaN ( d6 ) ) ) { d6 = frexp ( d6 , & b_s ) ; } else { b_s = 0
; } * s = b_s ; if ( d6 == 0.5 ) { * s = ( real_T ) b_s - 1.0 ; } } * m = 13
; } } static void hyrmdcu10r ( const real_T A [ 4 ] , real_T V [ 4 ] , real_T
T [ 4 ] ) { if ( af5cauz3wt ( A ) ) { V [ 0 ] = ( rtNaN ) ; V [ 2 ] = ( rtNaN
) ; V [ 3 ] = ( rtNaN ) ; V [ 1 ] = 0.0 ; T [ 0 ] = ( rtNaN ) ; T [ 1 ] = (
rtNaN ) ; T [ 2 ] = ( rtNaN ) ; T [ 3 ] = ( rtNaN ) ; } else { T [ 0 ] = A [
0 ] ; T [ 2 ] = A [ 2 ] ; T [ 3 ] = A [ 3 ] ; T [ 1 ] = A [ 1 ] ; V [ 2 ] =
0.0 ; V [ 1 ] = 0.0 ; V [ 0 ] = 1.0 ; V [ 3 ] = 1.0 ; xhseqr_H6eRN0gF ( T , V
) ; } } static void f5zhbt2mc4 ( real_T A [ 4 ] , real_T F [ 4 ] ) { __m128d
tmp ; __m128d tmp_e ; __m128d tmp_p ; real_T A2 [ 4 ] ; real_T A4 [ 4 ] ;
real_T A6 [ 4 ] ; real_T A6_p [ 4 ] ; real_T U [ 4 ] ; real_T V [ 4 ] ;
real_T A6_idx_2 ; real_T A6_idx_3 ; real_T a22 ; real_T d ; real_T exptj ;
int32_T blockFormat ; int32_T exitg1 ; int32_T i ; int32_T r1 ; int32_T r2 ;
boolean_T exitg2 ; boolean_T recomputeDiags ; if ( af5cauz3wt ( A ) ) { F [ 0
] = ( rtNaN ) ; F [ 1 ] = ( rtNaN ) ; F [ 2 ] = ( rtNaN ) ; F [ 3 ] = ( rtNaN
) ; } else { recomputeDiags = true ; blockFormat = 0 ; exitg2 = false ; while
( ( ! exitg2 ) && ( blockFormat < 2 ) ) { r1 = 0 ; do { exitg1 = 0 ; if ( r1
< 2 ) { if ( ( r1 != blockFormat ) && ( ! ( A [ ( blockFormat << 1 ) + r1 ]
== 0.0 ) ) ) { recomputeDiags = false ; exitg1 = 1 ; } else { r1 ++ ; } }
else { blockFormat ++ ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1
== 1 ) { exitg2 = true ; } } if ( recomputeDiags ) { F [ 1 ] = 0.0 ; F [ 2 ]
= 0.0 ; F [ 0 ] = muDoubleScalarExp ( A [ 0 ] ) ; F [ 3 ] = muDoubleScalarExp
( A [ 3 ] ) ; } else { recomputeDiags = true ; blockFormat = 0 ; exitg2 =
false ; while ( ( ! exitg2 ) && ( blockFormat < 2 ) ) { r1 = 0 ; do { exitg1
= 0 ; if ( r1 <= blockFormat ) { if ( ! ( A [ ( blockFormat << 1 ) + r1 ] ==
A [ ( r1 << 1 ) + blockFormat ] ) ) { recomputeDiags = false ; exitg1 = 1 ; }
else { r1 ++ ; } } else { blockFormat ++ ; exitg1 = 2 ; } } while ( exitg1 ==
0 ) ; if ( exitg1 == 1 ) { exitg2 = true ; } } if ( recomputeDiags ) {
hyrmdcu10r ( A , A4 , A2 ) ; exptj = muDoubleScalarExp ( A2 [ 0 ] ) ; A6 [ 0
] = A4 [ 0 ] * exptj ; A6 [ 1 ] = A4 [ 1 ] * exptj ; exptj =
muDoubleScalarExp ( A2 [ 3 ] ) ; A6 [ 2 ] = A4 [ 2 ] * exptj ; A6 [ 3 ] = A4
[ 3 ] * exptj ; for ( i = 0 ; i <= 0 ; i += 2 ) { _mm_storeu_pd ( & F [ i ] ,
_mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & A6 [ i ] ) ; tmp_p =
_mm_loadu_pd ( & F [ i ] ) ; _mm_storeu_pd ( & F [ i ] , _mm_add_pd (
_mm_mul_pd ( tmp , _mm_set1_pd ( A4 [ 0 ] ) ) , tmp_p ) ) ; tmp =
_mm_loadu_pd ( & A6 [ i + 2 ] ) ; tmp_p = _mm_loadu_pd ( & F [ i ] ) ;
_mm_storeu_pd ( & F [ i ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A4
[ 2 ] ) ) , tmp_p ) ) ; _mm_storeu_pd ( & F [ i + 2 ] , _mm_set1_pd ( 0.0 ) )
; tmp = _mm_loadu_pd ( & A6 [ i ] ) ; tmp_p = _mm_loadu_pd ( & F [ i + 2 ] )
; _mm_storeu_pd ( & F [ i + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp ,
_mm_set1_pd ( A4 [ 1 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & A6 [ i + 2 ] ) ;
tmp_p = _mm_loadu_pd ( & F [ i + 2 ] ) ; _mm_storeu_pd ( & F [ i + 2 ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( A4 [ 3 ] ) ) , tmp_p ) ) ; }
exptj = ( F [ 1 ] + F [ 2 ] ) / 2.0 ; F [ 3 ] = ( F [ 3 ] + F [ 3 ] ) / 2.0 ;
F [ 0 ] = ( F [ 0 ] + F [ 0 ] ) / 2.0 ; F [ 1 ] = ( F [ 1 ] + F [ 2 ] ) / 2.0
; F [ 2 ] = exptj ; } else { recomputeDiags = true ; if ( ( A [ 1 ] != 0.0 )
&& ( ( A [ 0 ] != A [ 3 ] ) || ( muDoubleScalarSign ( A [ 1 ] ) *
muDoubleScalarSign ( A [ 2 ] ) != - 1.0 ) ) ) { recomputeDiags = false ; }
ao4ajfc0ke ( A , A2 , A4 , A6 , & r1 , & exptj ) ; if ( exptj != 0.0 ) { d =
muDoubleScalarPower ( 2.0 , exptj ) ; A [ 0 ] /= d ; A [ 1 ] /= d ; A [ 2 ]
/= d ; A [ 3 ] /= d ; d = muDoubleScalarPower ( 2.0 , 2.0 * exptj ) ; A2 [ 0
] /= d ; A2 [ 1 ] /= d ; A2 [ 2 ] /= d ; A2 [ 3 ] /= d ; d =
muDoubleScalarPower ( 2.0 , 4.0 * exptj ) ; A4 [ 0 ] /= d ; A4 [ 1 ] /= d ;
A4 [ 2 ] /= d ; A4 [ 3 ] /= d ; d = muDoubleScalarPower ( 2.0 , 6.0 * exptj )
; A6 [ 0 ] /= d ; A6 [ 1 ] /= d ; A6 [ 2 ] /= d ; A6 [ 3 ] /= d ; } if (
recomputeDiags ) { if ( A [ 1 ] == 0.0 ) { blockFormat = 1 ; } else {
blockFormat = 2 ; } } if ( r1 == 3 ) { U [ 1 ] = A2 [ 1 ] ; U [ 2 ] = A2 [ 2
] ; U [ 0 ] = A2 [ 0 ] + 60.0 ; U [ 3 ] = A2 [ 3 ] + 60.0 ; for ( i = 0 ; i <
2 ; i ++ ) { A6_p [ i << 1 ] = 0.0 ; A6_p [ i << 1 ] += U [ i << 1 ] * A [ 0
] ; A6_p [ i << 1 ] += U [ ( i << 1 ) + 1 ] * A [ 2 ] ; A6_p [ ( i << 1 ) + 1
] = 0.0 ; A6_p [ ( i << 1 ) + 1 ] += U [ i << 1 ] * A [ 1 ] ; A6_p [ ( i << 1
) + 1 ] += U [ ( i << 1 ) + 1 ] * A [ 3 ] ; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ]
= 12.0 * A2 [ 0 ] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1 ] = 12.0 * A2 [ 1 ] ; U [ 2
] = A6_p [ 2 ] ; V [ 2 ] = 12.0 * A2 [ 2 ] ; U [ 3 ] = A6_p [ 3 ] ; V [ 3 ] =
12.0 * A2 [ 3 ] ; d = 120.0 ; } else if ( r1 == 5 ) { U [ 0 ] = 420.0 * A2 [
0 ] + A4 [ 0 ] ; U [ 1 ] = 420.0 * A2 [ 1 ] + A4 [ 1 ] ; U [ 2 ] = 420.0 * A2
[ 2 ] + A4 [ 2 ] ; U [ 3 ] = 420.0 * A2 [ 3 ] + A4 [ 3 ] ; U [ 0 ] += 15120.0
; U [ 3 ] += 15120.0 ; for ( i = 0 ; i < 2 ; i ++ ) { A6_p [ i << 1 ] = 0.0 ;
A6_p [ i << 1 ] += U [ i << 1 ] * A [ 0 ] ; A6_p [ i << 1 ] += U [ ( i << 1 )
+ 1 ] * A [ 2 ] ; A6_p [ ( i << 1 ) + 1 ] = 0.0 ; A6_p [ ( i << 1 ) + 1 ] +=
U [ i << 1 ] * A [ 1 ] ; A6_p [ ( i << 1 ) + 1 ] += U [ ( i << 1 ) + 1 ] * A
[ 3 ] ; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ] = 30.0 * A4 [ 0 ] + 3360.0 * A2 [ 0
] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1 ] = 30.0 * A4 [ 1 ] + 3360.0 * A2 [ 1 ] ; U
[ 2 ] = A6_p [ 2 ] ; V [ 2 ] = 30.0 * A4 [ 2 ] + 3360.0 * A2 [ 2 ] ; U [ 3 ]
= A6_p [ 3 ] ; V [ 3 ] = 30.0 * A4 [ 3 ] + 3360.0 * A2 [ 3 ] ; d = 30240.0 ;
} else if ( r1 == 7 ) { U [ 0 ] = ( 1512.0 * A4 [ 0 ] + A6 [ 0 ] ) + 277200.0
* A2 [ 0 ] ; U [ 1 ] = ( 1512.0 * A4 [ 1 ] + A6 [ 1 ] ) + 277200.0 * A2 [ 1 ]
; U [ 2 ] = ( 1512.0 * A4 [ 2 ] + A6 [ 2 ] ) + 277200.0 * A2 [ 2 ] ; U [ 3 ]
= ( 1512.0 * A4 [ 3 ] + A6 [ 3 ] ) + 277200.0 * A2 [ 3 ] ; U [ 0 ] +=
8.64864E+6 ; U [ 3 ] += 8.64864E+6 ; for ( i = 0 ; i < 2 ; i ++ ) { A6_p [ i
<< 1 ] = 0.0 ; A6_p [ i << 1 ] += U [ i << 1 ] * A [ 0 ] ; A6_p [ i << 1 ] +=
U [ ( i << 1 ) + 1 ] * A [ 2 ] ; A6_p [ ( i << 1 ) + 1 ] = 0.0 ; A6_p [ ( i
<< 1 ) + 1 ] += U [ i << 1 ] * A [ 1 ] ; A6_p [ ( i << 1 ) + 1 ] += U [ ( i
<< 1 ) + 1 ] * A [ 3 ] ; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ] = ( 56.0 * A6 [ 0 ]
+ 25200.0 * A4 [ 0 ] ) + 1.99584E+6 * A2 [ 0 ] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1
] = ( 56.0 * A6 [ 1 ] + 25200.0 * A4 [ 1 ] ) + 1.99584E+6 * A2 [ 1 ] ; U [ 2
] = A6_p [ 2 ] ; V [ 2 ] = ( 56.0 * A6 [ 2 ] + 25200.0 * A4 [ 2 ] ) +
1.99584E+6 * A2 [ 2 ] ; U [ 3 ] = A6_p [ 3 ] ; V [ 3 ] = ( 56.0 * A6 [ 3 ] +
25200.0 * A4 [ 3 ] ) + 1.99584E+6 * A2 [ 3 ] ; d = 1.729728E+7 ; } else if (
r1 == 9 ) { for ( i = 0 ; i < 2 ; i ++ ) { V [ i << 1 ] = 0.0 ; V [ i << 1 ]
+= A2 [ i << 1 ] * A6 [ 0 ] ; V [ i << 1 ] += A2 [ ( i << 1 ) + 1 ] * A6 [ 2
] ; V [ ( i << 1 ) + 1 ] = 0.0 ; V [ ( i << 1 ) + 1 ] += A2 [ i << 1 ] * A6 [
1 ] ; V [ ( i << 1 ) + 1 ] += A2 [ ( i << 1 ) + 1 ] * A6 [ 3 ] ; } U [ 0 ] =
( ( 3960.0 * A6 [ 0 ] + V [ 0 ] ) + 2.16216E+6 * A4 [ 0 ] ) + 3.027024E+8 *
A2 [ 0 ] ; U [ 1 ] = ( ( 3960.0 * A6 [ 1 ] + V [ 1 ] ) + 2.16216E+6 * A4 [ 1
] ) + 3.027024E+8 * A2 [ 1 ] ; U [ 2 ] = ( ( 3960.0 * A6 [ 2 ] + V [ 2 ] ) +
2.16216E+6 * A4 [ 2 ] ) + 3.027024E+8 * A2 [ 2 ] ; U [ 3 ] = ( ( 3960.0 * A6
[ 3 ] + V [ 3 ] ) + 2.16216E+6 * A4 [ 3 ] ) + 3.027024E+8 * A2 [ 3 ] ; U [ 0
] += 8.8216128E+9 ; U [ 3 ] += 8.8216128E+9 ; for ( i = 0 ; i < 2 ; i ++ ) {
A6_p [ i << 1 ] = 0.0 ; A6_p [ i << 1 ] += U [ i << 1 ] * A [ 0 ] ; A6_p [ i
<< 1 ] += U [ ( i << 1 ) + 1 ] * A [ 2 ] ; A6_p [ ( i << 1 ) + 1 ] = 0.0 ;
A6_p [ ( i << 1 ) + 1 ] += U [ i << 1 ] * A [ 1 ] ; A6_p [ ( i << 1 ) + 1 ]
+= U [ ( i << 1 ) + 1 ] * A [ 3 ] ; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ] = ( (
90.0 * V [ 0 ] + 110880.0 * A6 [ 0 ] ) + 3.027024E+7 * A4 [ 0 ] ) +
2.0756736E+9 * A2 [ 0 ] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1 ] = ( ( 90.0 * V [ 1 ]
+ 110880.0 * A6 [ 1 ] ) + 3.027024E+7 * A4 [ 1 ] ) + 2.0756736E+9 * A2 [ 1 ]
; U [ 2 ] = A6_p [ 2 ] ; V [ 2 ] = ( ( 90.0 * V [ 2 ] + 110880.0 * A6 [ 2 ] )
+ 3.027024E+7 * A4 [ 2 ] ) + 2.0756736E+9 * A2 [ 2 ] ; U [ 3 ] = A6_p [ 3 ] ;
V [ 3 ] = ( ( 90.0 * V [ 3 ] + 110880.0 * A6 [ 3 ] ) + 3.027024E+7 * A4 [ 3 ]
) + 2.0756736E+9 * A2 [ 3 ] ; d = 1.76432256E+10 ; } else { U [ 0 ] = (
3.352212864E+10 * A6 [ 0 ] + 1.05594705216E+13 * A4 [ 0 ] ) +
1.1873537964288E+15 * A2 [ 0 ] ; U [ 1 ] = ( 3.352212864E+10 * A6 [ 1 ] +
1.05594705216E+13 * A4 [ 1 ] ) + 1.1873537964288E+15 * A2 [ 1 ] ; U [ 2 ] = (
3.352212864E+10 * A6 [ 2 ] + 1.05594705216E+13 * A4 [ 2 ] ) +
1.1873537964288E+15 * A2 [ 2 ] ; U [ 3 ] = ( 3.352212864E+10 * A6 [ 3 ] +
1.05594705216E+13 * A4 [ 3 ] ) + 1.1873537964288E+15 * A2 [ 3 ] ; U [ 0 ] +=
3.238237626624E+16 ; U [ 3 ] += 3.238237626624E+16 ; d = ( 16380.0 * A4 [ 0 ]
+ A6 [ 0 ] ) + 4.08408E+7 * A2 [ 0 ] ; a22 = ( 16380.0 * A4 [ 1 ] + A6 [ 1 ]
) + 4.08408E+7 * A2 [ 1 ] ; A6_idx_2 = ( 16380.0 * A4 [ 2 ] + A6 [ 2 ] ) +
4.08408E+7 * A2 [ 2 ] ; A6_idx_3 = ( 16380.0 * A4 [ 3 ] + A6 [ 3 ] ) +
4.08408E+7 * A2 [ 3 ] ; for ( i = 0 ; i <= 0 ; i += 2 ) { tmp = _mm_loadu_pd
( & A6 [ i + 2 ] ) ; tmp_p = _mm_loadu_pd ( & A6 [ i ] ) ; tmp_e =
_mm_loadu_pd ( & U [ i ] ) ; _mm_storeu_pd ( & A6_p [ i ] , _mm_add_pd (
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( a22 ) ) , _mm_mul_pd ( tmp_p ,
_mm_set1_pd ( d ) ) ) , tmp_e ) ) ; tmp = _mm_loadu_pd ( & A6 [ i + 2 ] ) ;
tmp_p = _mm_loadu_pd ( & A6 [ i ] ) ; tmp_e = _mm_loadu_pd ( & U [ i + 2 ] )
; _mm_storeu_pd ( & A6_p [ i + 2 ] , _mm_add_pd ( _mm_add_pd ( _mm_mul_pd (
tmp , _mm_set1_pd ( A6_idx_3 ) ) , _mm_mul_pd ( tmp_p , _mm_set1_pd (
A6_idx_2 ) ) ) , tmp_e ) ) ; } d = ( 182.0 * A6 [ 0 ] + 960960.0 * A4 [ 0 ] )
+ 1.32324192E+9 * A2 [ 0 ] ; a22 = ( 182.0 * A6 [ 1 ] + 960960.0 * A4 [ 1 ] )
+ 1.32324192E+9 * A2 [ 1 ] ; A6_idx_2 = ( 182.0 * A6 [ 2 ] + 960960.0 * A4 [
2 ] ) + 1.32324192E+9 * A2 [ 2 ] ; A6_idx_3 = ( 182.0 * A6 [ 3 ] + 960960.0 *
A4 [ 3 ] ) + 1.32324192E+9 * A2 [ 3 ] ; for ( i = 0 ; i < 2 ; i ++ ) { U [ i
<< 1 ] = 0.0 ; U [ i << 1 ] += A6_p [ i << 1 ] * A [ 0 ] ; U [ i << 1 ] +=
A6_p [ ( i << 1 ) + 1 ] * A [ 2 ] ; U [ ( i << 1 ) + 1 ] = 0.0 ; U [ ( i << 1
) + 1 ] += A6_p [ i << 1 ] * A [ 1 ] ; U [ ( i << 1 ) + 1 ] += A6_p [ ( i <<
1 ) + 1 ] * A [ 3 ] ; V [ i ] = ( ( ( A6 [ i + 2 ] * a22 + A6 [ i ] * d ) +
6.704425728E+11 * A6 [ i ] ) + 1.29060195264E+14 * A4 [ i ] ) +
7.7717703038976E+15 * A2 [ i ] ; V [ i + 2 ] = ( ( ( A6 [ i + 2 ] * A6_idx_3
+ A6 [ i ] * A6_idx_2 ) + A6 [ i + 2 ] * 6.704425728E+11 ) + A4 [ i + 2 ] *
1.29060195264E+14 ) + A2 [ i + 2 ] * 7.7717703038976E+15 ; } d =
6.476475253248E+16 ; } V [ 0 ] += d ; V [ 0 ] -= U [ 0 ] ; U [ 0 ] *= 2.0 ; V
[ 1 ] -= U [ 1 ] ; U [ 1 ] *= 2.0 ; V [ 2 ] -= U [ 2 ] ; U [ 2 ] *= 2.0 ; V [
3 ] = ( V [ 3 ] + d ) - U [ 3 ] ; U [ 3 ] *= 2.0 ; if ( muDoubleScalarAbs ( V
[ 1 ] ) > muDoubleScalarAbs ( V [ 0 ] ) ) { r1 = 1 ; r2 = 0 ; } else { r1 = 0
; r2 = 1 ; } d = V [ r2 ] / V [ r1 ] ; a22 = V [ r2 + 2 ] - V [ r1 + 2 ] * d
; F [ 1 ] = ( U [ r2 ] - U [ r1 ] * d ) / a22 ; F [ 0 ] = ( U [ r1 ] - V [ r1
+ 2 ] * F [ 1 ] ) / V [ r1 ] ; F [ 3 ] = ( U [ r2 + 2 ] - U [ r1 + 2 ] * d )
/ a22 ; F [ 2 ] = ( U [ r1 + 2 ] - V [ r1 + 2 ] * F [ 3 ] ) / V [ r1 ] ; F [
0 ] ++ ; F [ 3 ] ++ ; if ( recomputeDiags ) { recomputeBlockDiag_gs6kEciD ( A
, F , blockFormat ) ; } r1 = ( int32_T ) exptj ; for ( r2 = 0 ; r2 < r1 ; r2
++ ) { for ( i = 0 ; i <= 0 ; i += 2 ) { _mm_storeu_pd ( & A4 [ i ] ,
_mm_set1_pd ( 0.0 ) ) ; tmp = _mm_loadu_pd ( & F [ i ] ) ; tmp_p =
_mm_loadu_pd ( & A4 [ i ] ) ; _mm_storeu_pd ( & A4 [ i ] , _mm_add_pd (
_mm_mul_pd ( tmp , _mm_set1_pd ( F [ 0 ] ) ) , tmp_p ) ) ; tmp = _mm_loadu_pd
( & F [ i + 2 ] ) ; tmp_p = _mm_loadu_pd ( & A4 [ i ] ) ; _mm_storeu_pd ( &
A4 [ i ] , _mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( F [ 1 ] ) ) , tmp_p
) ) ; _mm_storeu_pd ( & A4 [ i + 2 ] , _mm_set1_pd ( 0.0 ) ) ; tmp =
_mm_loadu_pd ( & F [ i ] ) ; tmp_p = _mm_loadu_pd ( & A4 [ i + 2 ] ) ;
_mm_storeu_pd ( & A4 [ i + 2 ] , _mm_add_pd ( tmp_p , _mm_mul_pd ( tmp ,
_mm_set1_pd ( F [ 2 ] ) ) ) ) ; tmp = _mm_loadu_pd ( & F [ i + 2 ] ) ; tmp_p
= _mm_loadu_pd ( & A4 [ i + 2 ] ) ; _mm_storeu_pd ( & A4 [ i + 2 ] ,
_mm_add_pd ( _mm_mul_pd ( tmp , _mm_set1_pd ( F [ 3 ] ) ) , tmp_p ) ) ; } F [
0 ] = A4 [ 0 ] ; F [ 1 ] = A4 [ 1 ] ; F [ 2 ] = A4 [ 2 ] ; F [ 3 ] = A4 [ 3 ]
; if ( recomputeDiags ) { A [ 0 ] *= 2.0 ; A [ 1 ] *= 2.0 ; A [ 2 ] *= 2.0 ;
A [ 3 ] *= 2.0 ; recomputeBlockDiag_gs6kEciD ( A , F , blockFormat ) ; } } }
} } } void MdlInitialize ( void ) { boolean_T kehdr1wwi1 [ 4 ] ; int32_T
imarvxjq4b ; int32_T iwcjrd5qos ; boolean_T tmp ; chmgkez0tpf . h3jcgsxl3g =
kjmvupbl2i . Integrator1_IC ; cz5yqt3r3xb . bk5zchkp0d = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { chmgkez0tpf . nu0uj5bmhw [ 0 ] = 0.0 ;
chmgkez0tpf . nu0uj5bmhw [ 1 ] = 0.0 ; tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ;
cz5yqt3r3xb . bk5zchkp0d = ! tmp ; } else { cz5yqt3r3xb . bk5zchkp0d = 1 ; }
chmgkez0tpf . bkhbsrsujg = 0.0 ; } cz5yqt3r3xb . csyymkwdxj = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if (
tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; cz5yqt3r3xb .
csyymkwdxj = ! tmp ; } else { cz5yqt3r3xb . csyymkwdxj = 1 ; } chmgkez0tpf .
idw3fynbuy = 0.0 ; } cz5yqt3r3xb . dkt3lps5cz = 1 ; if ( ssIsFirstInitCond (
rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; cz5yqt3r3xb . dkt3lps5cz = ! tmp
; } else { cz5yqt3r3xb . dkt3lps5cz = 1 ; } chmgkez0tpf . gd53vwvy1z = 0.0 ;
} chmgkez0tpf . ozjmimh0zs = rtP__PlntEM1InitVel2f2Drivetrain_sldd_ ;
chmgkez0tpf . ptjew1tdci = kjmvupbl2i . Integrator_IC ; chmgkez0tpf .
ovuztebk3m = 0.0 ; chmgkez0tpf . dnh4xblb2m = kjmvupbl2i .
VehicleBody3DOFLongitudinal_q_o ; chmgkez0tpf . frrsnlydio = kjmvupbl2i .
VehicleBody3DOFLongitudinal_theta_o ; chmgkez0tpf . gqe2iwaq4w = kjmvupbl2i .
Integrator1_IC_mcnartj4ei ; cz5yqt3r3xb . kodqgqrf0p = kjmvupbl2i .
Memory_InitialCondition ; cz5yqt3r3xb . phh4r25dqx = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if (
tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; cz5yqt3r3xb .
phh4r25dqx = ! tmp ; } else { cz5yqt3r3xb . phh4r25dqx = 1 ; } chmgkez0tpf .
hys5vfyni2 = 0.0 ; } chmgkez0tpf . b3wjkyrln3 =
rtP__PlntDriveshftInitDeflect2f2Drivetrain_sldd_ ; cz5yqt3r3xb . eo23of04rz =
kjmvupbl2i . Memory_InitialCondition_le3kqxuyfm ; cz5yqt3r3xb . jpnae2oihw =
1 ; if ( ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ;
cz5yqt3r3xb . jpnae2oihw = ! tmp ; } else { cz5yqt3r3xb . jpnae2oihw = 1 ; }
chmgkez0tpf . hzhiczi0l3 = 0.0 ; } chmgkez0tpf . hlouk1zoiv =
rtP__PlntDriveshftInitDeflect2f2Drivetrain_sldd_ ; chmgkez0tpf . gvprqgkyrb =
kjmvupbl2i . Integrator_IC_h1e41bii31 ; chmgkez0tpf . fs3asrx1bi [ 0 ] =
kjmvupbl2i . Integrator1_IC_mwxgl4nrr1 ; chmgkez0tpf . fs3asrx1bi [ 1 ] =
kjmvupbl2i . Integrator1_IC_mwxgl4nrr1 ; chmgkez0tpf . fs3asrx1bi [ 2 ] =
kjmvupbl2i . Integrator1_IC_mwxgl4nrr1 ; chmgkez0tpf . fs3asrx1bi [ 3 ] =
kjmvupbl2i . Integrator1_IC_mwxgl4nrr1 ; chmgkez0tpf . loymnatkey =
kjmvupbl2i . Integrator1_IC_iuffdm3tby ; chmgkez0tpf . njzuxe2cj0 =
kjmvupbl2i . Integrator_IC_k10nspe4rb ; chmgkez0tpf . iysy5igbzt = kjmvupbl2i
. Integrator_IC_aozxujrrto ; chmgkez0tpf . bhmvyo1hjl = kjmvupbl2i .
Integrator_IC_giy1ho51ik ; chmgkez0tpf . iarnkoswlx = kjmvupbl2i .
Integrator1_IC_b5h1v25iea ; chmgkez0tpf . lywux4fr45 = kjmvupbl2i .
Integrator_IC_m2ei5srufe ; chmgkez0tpf . igaknrnpbi = kjmvupbl2i .
Integrator1_IC_exhcff4x2k ; chmgkez0tpf . fnlgzvne04 = kjmvupbl2i .
Integrator2_IC ; chmgkez0tpf . blfalouxud = kjmvupbl2i . Integrator3_IC ;
chmgkez0tpf . icfrc3vdyk = kjmvupbl2i . Integrator4_IC ; chmgkez0tpf .
e3mnx1zztt = kjmvupbl2i . Integrator2_IC_fjcqqry33i ; chmgkez0tpf .
lz5qf1zk2o [ 0 ] = kjmvupbl2i . uDOFBodyAxes_pos_ini [ 0 ] ; cz5yqt3r3xb .
ovftuesk53 [ 0 ] = kjmvupbl2i . UnitDelay_InitialCondition [ 0 ] ;
chmgkez0tpf . lz5qf1zk2o [ 1 ] = kjmvupbl2i . uDOFBodyAxes_pos_ini [ 1 ] ;
cz5yqt3r3xb . ovftuesk53 [ 1 ] = kjmvupbl2i . UnitDelay_InitialCondition [ 1
] ; cz5yqt3r3xb . hqv0oirn0q = ( rtInf ) ; cz5yqt3r3xb . lzovmgc1ye [ 0 ] =
kjmvupbl2i . FirstOrderHold1_IniOut ; cz5yqt3r3xb . ipqlah0gj1 [ 0 ] = (
rtInf ) ; cz5yqt3r3xb . ggdayeevtv [ 0 ] = 0.0 ; cz5yqt3r3xb . lzovmgc1ye [ 1
] = kjmvupbl2i . FirstOrderHold1_IniOut ; cz5yqt3r3xb . ipqlah0gj1 [ 1 ] = (
rtInf ) ; cz5yqt3r3xb . ggdayeevtv [ 1 ] = 0.0 ; cz5yqt3r3xb . lzovmgc1ye [ 2
] = kjmvupbl2i . FirstOrderHold1_IniOut ; cz5yqt3r3xb . ipqlah0gj1 [ 2 ] = (
rtInf ) ; cz5yqt3r3xb . ggdayeevtv [ 2 ] = 0.0 ; cz5yqt3r3xb . lzovmgc1ye [ 3
] = kjmvupbl2i . FirstOrderHold1_IniOut ; cz5yqt3r3xb . ipqlah0gj1 [ 3 ] = (
rtInf ) ; cz5yqt3r3xb . ggdayeevtv [ 3 ] = 0.0 ; cz5yqt3r3xb . dfwjuauqhh = (
rtInf ) ; cz5yqt3r3xb . dci24ewo3n = kjmvupbl2i . FirstOrderHold_IniOut ;
cz5yqt3r3xb . akmdrfe3wk = ( rtInf ) ; cz5yqt3r3xb . n20oxvozfr = 0.0 ;
chmgkez0tpf . ifte0hcjd1 = rtP__PlntVehInitLongVel2f2PassVeh_sldd_ ;
cz5yqt3r3xb . asn3ailf0a = kjmvupbl2i . Memory_InitialCondition_cwhmkrh11u ;
cz5yqt3r3xb . himiqz4m3m = 1 ; if ( ssIsFirstInitCond ( rtS ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; cz5yqt3r3xb . himiqz4m3m = ! tmp
; } else { cz5yqt3r3xb . himiqz4m3m = 1 ; } chmgkez0tpf . kkyrf40rpz [ 0 ] =
0.0 ; chmgkez0tpf . kkyrf40rpz [ 1 ] = 0.0 ; } chmgkez0tpf . ftygsqggs5 =
rtP__PlntDriveshftInitDeflect2f2Drivetrain_sldd_ ; cz5yqt3r3xb . cwrrpplnpb =
1 ; if ( ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ;
cz5yqt3r3xb . cwrrpplnpb = ! tmp ; } else { cz5yqt3r3xb . cwrrpplnpb = 1 ; }
} kkt5tjhslu ( kjmvupbl2i . SignalHold_IC , & iowqpk3eub2 . fuob0ddam2h ) ;
kkt5tjhslu ( kjmvupbl2i . SignalHold_IC_bl0xhwyuht , & iowqpk3eub2 .
dwnfs4t0ur ) ; cz5yqt3r3xb . hndyq1p4da = - 1 ; cz5yqt3r3xb . iyzfufaeyj = 0U
; cz5yqt3r3xb . metkb44aex = hsey4nk0xq ; cz5yqt3r3xb . em1wbmdjow = 0.0 ;
cz5yqt3r3xb . ldpanoehpw = 0U ; cz5yqt3r3xb . eck5rxblzt = 0.0 ; iowqpk3eub2
. ivqnpc0uok = 0.0 ; cz5yqt3r3xb . jmm4c105ye = 0.0 ; cz5yqt3r3xb .
f05boyvyxi = 0.0 ; cz5yqt3r3xb . dukvvezhh4 = 0.0 ; for ( iwcjrd5qos = 0 ;
iwcjrd5qos < 1 ; iwcjrd5qos ++ ) { pkedxe1l0n (
rtP__PlntWhlInitAngVel2f2PassVeh_sldd_ , & iowqpk3eub2 . gugymbw2iq [
iwcjrd5qos ] . eq332hab4o , & cz5yqt3r3xb . gugymbw2iq [ iwcjrd5qos ] .
eq332hab4o , & kjmvupbl2i . gugymbw2iq . eq332hab4o , & chmgkez0tpf .
gugymbw2iq [ iwcjrd5qos ] . eq332hab4o ) ; } for ( imarvxjq4b = 0 ;
imarvxjq4b < 1 ; imarvxjq4b ++ ) { faznt0co0o (
rtP__PlntWhlInitAngVel2f2PassVeh_sldd_ , & iowqpk3eub2 . ngpegw05gp [
imarvxjq4b ] . neijo20b0e , & cz5yqt3r3xb . ngpegw05gp [ imarvxjq4b ] .
neijo20b0e , & kjmvupbl2i . ngpegw05gp . neijo20b0e , & chmgkez0tpf .
ngpegw05gp [ imarvxjq4b ] . neijo20b0e ) ; } n5x0ejbjln ( & kehdr1wwi1 [ 0 ]
, & ( cz5yqt3r3xb . lofhsz2swn . rtb ) ) ; izmowyu5rx ( & iowqpk3eub2 .
gwnl2155xk , & iowqpk3eub2 . icp2bbe015 , & iowqpk3eub2 . msjuqz2cog , &
iowqpk3eub2 . dnjk2135yv , & iowqpk3eub2 . crfjrsqdom ) ; { int_T
rootPeriodicContStateIndices [ 1 ] = { 9 } ; real_T
rootPeriodicContStateRanges [ 2 ] = { - 3.1415926535897931 ,
3.1415926535897931 } ; ( void ) memcpy ( ( void * ) psrnl3geoqh ,
rootPeriodicContStateIndices , 1 * sizeof ( int_T ) ) ; ( void ) memcpy ( (
void * ) pfsggdhooaf , rootPeriodicContStateRanges , 2 * sizeof ( real_T ) )
; } } void MdlEnable ( void ) { cz5yqt3r3xb . jmm4c105ye = ssGetTaskTime (
rtS , 1 ) ; cz5yqt3r3xb . dukvvezhh4 = cz5yqt3r3xb . jmm4c105ye ; } void
MdlStart ( void ) { int32_T imarvxjq4b ; int32_T iwcjrd5qos ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<SteerFdbk>" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "<SteerFdbk>" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "SparkEV/Visualization/DataLogging/Bus Selector" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<SteerFdbk>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cz5yqt3r3xb . kzgixjdqqa . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"c403305e-226e-4cdb-a88a-a7d8f3cdb7e8" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; sdiCompleteAsyncioQueueCreation (
cz5yqt3r3xb . kzgixjdqqa . AQHandles , hDT , & srcInfo ) ; if ( cz5yqt3r3xb .
kzgixjdqqa . AQHandles ) { sdiSetSignalSampleTimeString ( cz5yqt3r3xb .
kzgixjdqqa . AQHandles , "Parameter" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cz5yqt3r3xb . kzgixjdqqa . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cz5yqt3r3xb . kzgixjdqqa . AQHandles , ssGetTaskTime (
rtS , 5 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . kzgixjdqqa
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb .
kzgixjdqqa . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<EngTrq>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<EngTrq>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<EngTrq>" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 13 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . gynuv0krsy . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "f5e9ddf8-2f9b-4e24-9891-15abf116084f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . gynuv0krsy . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . gynuv0krsy . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . gynuv0krsy . AQHandles ,
"Parameter" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( cz5yqt3r3xb
. gynuv0krsy . AQHandles , 0.0 ) ; sdiSetRunStartTime ( cz5yqt3r3xb .
gynuv0krsy . AQHandles , ssGetTaskTime ( rtS , 5 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . gynuv0krsy . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . gynuv0krsy .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<EngSpdOut>" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "<EngSpdOut>" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "SparkEV/Visualization/DataLogging/Bus Selector" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<EngSpdOut>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 14 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cz5yqt3r3xb . cismfzyk15 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"c1f75eb7-069e-4d63-8083-5eee40ce32ad" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
cz5yqt3r3xb . cismfzyk15 . AQHandles , hDT , & srcInfo ) ; if ( cz5yqt3r3xb .
cismfzyk15 . AQHandles ) { sdiSetSignalSampleTimeString ( cz5yqt3r3xb .
cismfzyk15 . AQHandles , "Parameter" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cz5yqt3r3xb . cismfzyk15 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cz5yqt3r3xb . cismfzyk15 . AQHandles , ssGetTaskTime (
rtS , 5 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . cismfzyk15
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb .
cismfzyk15 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<AccelFdbk>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<AccelFdbk>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<AccelFdbk>"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 1 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . dqdopzr2jv . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "f3b4e077-5919-4b4f-a3f8-3d46d1ec7044" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "1" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . dqdopzr2jv . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . dqdopzr2jv . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . dqdopzr2jv . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . dqdopzr2jv . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . dqdopzr2jv . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . dqdopzr2jv . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . dqdopzr2jv .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<BattVolt>" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "<BattVolt>" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "SparkEV/Visualization/DataLogging/Bus Selector" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<BattVolt>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 10 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cz5yqt3r3xb . ate5v5wkj2 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"6aa25d34-7fbc-4648-86ea-e48dde49f819" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; sdiCompleteAsyncioQueueCreation (
cz5yqt3r3xb . ate5v5wkj2 . AQHandles , hDT , & srcInfo ) ; if ( cz5yqt3r3xb .
ate5v5wkj2 . AQHandles ) { sdiSetSignalSampleTimeString ( cz5yqt3r3xb .
ate5v5wkj2 . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cz5yqt3r3xb . ate5v5wkj2 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cz5yqt3r3xb . ate5v5wkj2 . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . ate5v5wkj2
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb .
ate5v5wkj2 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<BattCurr>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<BattCurr>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<BattCurr>" )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 11 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . cj0ldup5gu . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "537e76af-0746-4355-9371-675c6e881cca" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "A" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . cj0ldup5gu . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . cj0ldup5gu . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . cj0ldup5gu . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . cj0ldup5gu . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . cj0ldup5gu . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . cj0ldup5gu . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . cj0ldup5gu .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<EMTrq>" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "<EMTrq>" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "SparkEV/Visualization/DataLogging/Bus Selector" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<EMTrq>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 12 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cz5yqt3r3xb . jgeac3tq21 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"eef55606-953e-4736-9157-5859679c66f3" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "N*m" ) ; sdiCompleteAsyncioQueueCreation (
cz5yqt3r3xb . jgeac3tq21 . AQHandles , hDT , & srcInfo ) ; if ( cz5yqt3r3xb .
jgeac3tq21 . AQHandles ) { sdiSetSignalSampleTimeString ( cz5yqt3r3xb .
jgeac3tq21 . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cz5yqt3r3xb . jgeac3tq21 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cz5yqt3r3xb . jgeac3tq21 . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . jgeac3tq21
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb .
jgeac3tq21 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<DecelFdbk>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<DecelFdbk>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<DecelFdbk>"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 2 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . irudyghn3o . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "4bd313d1-db77-4c60-a57c-c45ff53fccc9" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "1" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . irudyghn3o . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . irudyghn3o . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . irudyghn3o . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . irudyghn3o . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . irudyghn3o . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . irudyghn3o . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . irudyghn3o .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<GearFdbk>" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "<GearFdbk>" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "SparkEV/Visualization/DataLogging/Bus Selector" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<GearFdbk>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 3 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cz5yqt3r3xb . nikehp134v . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"bbeb7344-44ad-4f12-9dc2-a39e078aa784" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
cz5yqt3r3xb . nikehp134v . AQHandles , hDT , & srcInfo ) ; if ( cz5yqt3r3xb .
nikehp134v . AQHandles ) { sdiSetSignalSampleTimeString ( cz5yqt3r3xb .
nikehp134v . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cz5yqt3r3xb . nikehp134v . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cz5yqt3r3xb . nikehp134v . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . nikehp134v
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb .
nikehp134v . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<xdot>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<xdot>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<xdot>" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 4 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . gxisg0jsgi . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "5f832290-4f21-4d13-8b14-182d2eed6368" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "m/s" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . gxisg0jsgi . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . gxisg0jsgi . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . gxisg0jsgi . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . gxisg0jsgi . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . gxisg0jsgi . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . gxisg0jsgi . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . gxisg0jsgi .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<ax>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<ax>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<ax>" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 5 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . ibizqnzh0w . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "f8b49a6f-00d1-45d2-aa39-a35c21e46f7e" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "gn" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . ibizqnzh0w . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . ibizqnzh0w . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . ibizqnzh0w . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . ibizqnzh0w . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . ibizqnzh0w . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . ibizqnzh0w . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . ibizqnzh0w .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<ay>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<ay>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<ay>" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 6 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . aj1d134nmk . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "008fe5bc-3adf-4a91-8d15-3ac88946a40e" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "gn" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . aj1d134nmk . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . aj1d134nmk . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . aj1d134nmk . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . aj1d134nmk . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . aj1d134nmk . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . aj1d134nmk . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . aj1d134nmk .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<az>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<az>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<az>" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 7 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . frybx0mj1e . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "a7c6415a-1109-4f7e-9e53-3c6b65c3110c" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "gn" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . frybx0mj1e . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . frybx0mj1e . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . frybx0mj1e . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . frybx0mj1e . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . frybx0mj1e . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . frybx0mj1e . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . frybx0mj1e .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<EMSpd>" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "<EMSpd>" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "SparkEV/Visualization/DataLogging/Bus Selector" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<EMSpd>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 8 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cz5yqt3r3xb . kx02fuyglo . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"05f859e6-8c0d-4e62-98a8-831c5bca577f" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "rad/s" ) ; sdiCompleteAsyncioQueueCreation
( cz5yqt3r3xb . kx02fuyglo . AQHandles , hDT , & srcInfo ) ; if ( cz5yqt3r3xb
. kx02fuyglo . AQHandles ) { sdiSetSignalSampleTimeString ( cz5yqt3r3xb .
kx02fuyglo . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cz5yqt3r3xb . kx02fuyglo . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cz5yqt3r3xb . kx02fuyglo . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . kx02fuyglo
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb .
kx02fuyglo . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<BattSoc>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<BattSoc>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<BattSoc>" )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 9 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . ivzabugs2u . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "cb9228ff-dc64-4e2b-88c3-5b4896aaf941" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . ivzabugs2u . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . ivzabugs2u . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . ivzabugs2u . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . ivzabugs2u . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . ivzabugs2u . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . ivzabugs2u . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . ivzabugs2u .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "miles" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "miles" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/Integrator" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "miles" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . jzwhcyoyki . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "8e791406-b990-471a-8aef-9633ac14b0d5" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . jzwhcyoyki . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . jzwhcyoyki . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . jzwhcyoyki . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . jzwhcyoyki . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . jzwhcyoyki . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . jzwhcyoyki . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . jzwhcyoyki .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"US Fuel Economy MPGe" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"US Fuel Economy MPGe" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/Performance Calculations" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"US Fuel Economy MPGe" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cz5yqt3r3xb . bqlccsba5g . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"bad643b1-6e29-40c7-8b0f-cc577be80383" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
cz5yqt3r3xb . bqlccsba5g . AQHandles , hDT , & srcInfo ) ; if ( cz5yqt3r3xb .
bqlccsba5g . AQHandles ) { sdiSetSignalSampleTimeString ( cz5yqt3r3xb .
bqlccsba5g . AQHandles , "0.1" , 0.1 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cz5yqt3r3xb . bqlccsba5g . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cz5yqt3r3xb . bqlccsba5g . AQHandles , ssGetTaskTime (
rtS , 3 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . bqlccsba5g
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb .
bqlccsba5g . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "mph" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "mph" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/Signal Specification6" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "mph" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . i01ezsocmb . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "d2beaf57-d264-4770-a496-1c6dcac5d22f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "mph" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . i01ezsocmb . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . i01ezsocmb . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . i01ezsocmb . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . i01ezsocmb . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . i01ezsocmb . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . i01ezsocmb . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . i01ezsocmb .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "EMPwrMech" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "EMPwrMech" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "SparkEV/Vehicle/Plant Models/Simulink Models/Electrical System/Electrical System 1EM/Electric Machine 1"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "EMPwrMech" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 2 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cz5yqt3r3xb . hlhqdk1445 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"e96d0777-df42-4cc0-be30-7629cdf81858" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
cz5yqt3r3xb . hlhqdk1445 . AQHandles , hDT , & srcInfo ) ; if ( cz5yqt3r3xb .
hlhqdk1445 . AQHandles ) { sdiSetSignalSampleTimeString ( cz5yqt3r3xb .
hlhqdk1445 . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cz5yqt3r3xb . hlhqdk1445 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cz5yqt3r3xb . hlhqdk1445 . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . hlhqdk1445
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb .
hlhqdk1445 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } hc3tptuv0o ( & ( cz5yqt3r3xb .
lofhsz2swn . rtb ) ) ; hrsc30l345 ( & iowqpk3eub2 . gwnl2155xk , &
iowqpk3eub2 . icp2bbe015 , & iowqpk3eub2 . msjuqz2cog , & iowqpk3eub2 .
dnjk2135yv , & iowqpk3eub2 . crfjrsqdom ) ; plzq12jdos ( ) ; for ( iwcjrd5qos
= 0 ; iwcjrd5qos < 1 ; iwcjrd5qos ++ ) { ikid33ax2e ( & iowqpk3eub2 .
gugymbw2iq [ iwcjrd5qos ] . eq332hab4o ) ; } for ( imarvxjq4b = 0 ;
imarvxjq4b < 1 ; imarvxjq4b ++ ) { ipqw4qhrhj ( & iowqpk3eub2 . ngpegw05gp [
imarvxjq4b ] . neijo20b0e ) ; } iowqpk3eub2 . d1uv3awlwx =
rtP__PlntDriveshftInitVel2f2Drivetrain_sldd_ ; iowqpk3eub2 . k45bb5csjy =
rtP__PlntDriveshftInitVel2f2Drivetrain_sldd_ ; iowqpk3eub2 . gk34ntrgmq =
rtP__PlntDriveshftInitVel2f2Drivetrain_sldd_ ; bnlff5ayna ( rtS , &
cz5yqt3r3xb . fuob0ddam2h ) ; bnlff5ayna ( rtS , & cz5yqt3r3xb . dwnfs4t0ur )
; cz5yqt3r3xb . j3jayeyudr = 0 ; cz5yqt3r3xb . e2wr3vcmsf = 0 ; cz5yqt3r3xb .
jekggfsago = 0 ; cz5yqt3r3xb . dpc4gpu00e = 0 ; MdlInitialize ( ) ; MdlEnable
( ) ; } void MdlOutputs ( int_T tid ) { real_T hchtvncnnw ; real_T fgllbh5cfi
; real_T mabslh5ftc ; real_T mygikvcog4 ; real_T iakuel5r1b ; real_T
ljkhidnsry ; real_T nc0kxbwjpe ; real_T ky35uthna1 ; real_T ciom3cwcfo ;
real_T hglixnprmy ; int32_T imarvxjq4b ; int32_T iwcjrd5qos ; __m128d tmp ;
real_T b_a [ 4 ] ; real_T du5r1qer1m [ 4 ] ; real_T lhbkn3qgoo [ 4 ] ; real_T
sigmaA [ 4 ] ; real_T guicqfizux [ 3 ] ; real_T axn1d2xjab_idx_1 ; real_T
bafqqszzsf ; real_T bgnvcvf3bg_idx_0 ; real_T bgnvcvf3bg_idx_1 ; real_T
bgnvcvf3bg_idx_2 ; real_T bsbjaaxu1h ; real_T bvq1hwe3s4 ; real_T fl3dumv41q
; real_T g_data ; real_T hbjgnzk0ke ; real_T heevn31eio ; real_T inakimlcb3 ;
real_T l4fni1levc ; real_T lq2sjwrvwv_idx_0 ; real_T lq2sjwrvwv_idx_1 ;
real_T lq2sjwrvwv_idx_2 ; real_T pybjjcy2x4 ; int32_T i ; boolean_T
dlepxyenjj ; ZCEventType zcEvent ; static const real_T e [ 170 ] = { 1.0 ,
2.0 , 6.0 , 24.0 , 120.0 , 720.0 , 5040.0 , 40320.0 , 362880.0 , 3.6288E+6 ,
3.99168E+7 , 4.790016E+8 , 6.2270208E+9 , 8.71782912E+10 , 1.307674368E+12 ,
2.0922789888E+13 , 3.55687428096E+14 , 6.402373705728E+15 ,
1.21645100408832E+17 , 2.43290200817664E+18 , 5.109094217170944E+19 ,
1.1240007277776077E+21 , 2.5852016738884978E+22 , 6.2044840173323941E+23 ,
1.5511210043330986E+25 , 4.0329146112660565E+26 , 1.0888869450418352E+28 ,
3.0488834461171384E+29 , 8.8417619937397008E+30 , 2.6525285981219103E+32 ,
8.2228386541779224E+33 , 2.6313083693369352E+35 , 8.6833176188118859E+36 ,
2.9523279903960412E+38 , 1.0333147966386144E+40 , 3.7199332678990118E+41 ,
1.3763753091226343E+43 , 5.23022617466601E+44 , 2.0397882081197442E+46 ,
8.1591528324789768E+47 , 3.3452526613163803E+49 , 1.4050061177528798E+51 ,
6.0415263063373834E+52 , 2.6582715747884485E+54 , 1.1962222086548019E+56 ,
5.5026221598120885E+57 , 2.5862324151116818E+59 , 1.2413915592536073E+61 ,
6.0828186403426752E+62 , 3.0414093201713376E+64 , 1.5511187532873822E+66 ,
8.0658175170943877E+67 , 4.2748832840600255E+69 , 2.3084369733924138E+71 ,
1.2696403353658276E+73 , 7.1099858780486348E+74 , 4.0526919504877221E+76 ,
2.3505613312828789E+78 , 1.3868311854568986E+80 , 8.3209871127413916E+81 ,
5.0758021387722484E+83 , 3.1469973260387939E+85 , 1.98260831540444E+87 ,
1.2688693218588417E+89 , 8.2476505920824715E+90 , 5.4434493907744307E+92 ,
3.6471110918188683E+94 , 2.4800355424368305E+96 , 1.711224524281413E+98 ,
1.197857166996989E+100 , 8.5047858856786218E+101 , 6.1234458376886077E+103 ,
4.4701154615126834E+105 , 3.3078854415193856E+107 , 2.4809140811395391E+109 ,
1.8854947016660498E+111 , 1.4518309202828584E+113 , 1.1324281178206295E+115 ,
8.9461821307829729E+116 , 7.1569457046263779E+118 , 5.7971260207473655E+120 ,
4.75364333701284E+122 , 3.9455239697206569E+124 , 3.314240134565352E+126 ,
2.8171041143805494E+128 , 2.4227095383672724E+130 , 2.1077572983795269E+132 ,
1.8548264225739836E+134 , 1.6507955160908452E+136 , 1.4857159644817607E+138 ,
1.3520015276784023E+140 , 1.24384140546413E+142 , 1.1567725070816409E+144 ,
1.0873661566567424E+146 , 1.0329978488239052E+148 , 9.916779348709491E+149 ,
9.6192759682482062E+151 , 9.426890448883242E+153 , 9.33262154439441E+155 ,
9.33262154439441E+157 , 9.4259477598383536E+159 , 9.6144667150351211E+161 ,
9.9029007164861754E+163 , 1.0299016745145622E+166 , 1.0813967582402903E+168 ,
1.1462805637347078E+170 , 1.2265202031961373E+172 , 1.3246418194518284E+174 ,
1.4438595832024928E+176 , 1.5882455415227421E+178 , 1.7629525510902437E+180 ,
1.9745068572210728E+182 , 2.2311927486598123E+184 , 2.5435597334721862E+186 ,
2.9250936934930141E+188 , 3.3931086844518965E+190 , 3.969937160808719E+192 ,
4.6845258497542883E+194 , 5.5745857612076033E+196 , 6.6895029134491239E+198 ,
8.09429852527344E+200 , 9.8750442008335976E+202 , 1.2146304367025325E+205 ,
1.5061417415111404E+207 , 1.8826771768889254E+209 , 2.3721732428800459E+211 ,
3.0126600184576582E+213 , 3.8562048236258025E+215 , 4.9745042224772855E+217 ,
6.4668554892204716E+219 , 8.4715806908788174E+221 , 1.1182486511960039E+224 ,
1.4872707060906852E+226 , 1.9929427461615181E+228 , 2.6904727073180495E+230 ,
3.6590428819525472E+232 , 5.01288874827499E+234 , 6.9177864726194859E+236 ,
9.6157231969410859E+238 , 1.346201247571752E+241 , 1.89814375907617E+243 ,
2.6953641378881614E+245 , 3.8543707171800706E+247 , 5.5502938327393013E+249 ,
8.0479260574719866E+251 , 1.17499720439091E+254 , 1.7272458904546376E+256 ,
2.5563239178728637E+258 , 3.8089226376305671E+260 , 5.7133839564458505E+262 ,
8.6272097742332346E+264 , 1.3113358856834518E+267 , 2.0063439050956811E+269 ,
3.0897696138473489E+271 , 4.7891429014633912E+273 , 7.47106292628289E+275 ,
1.1729568794264138E+278 , 1.8532718694937338E+280 , 2.9467022724950369E+282 ,
4.714723635992059E+284 , 7.5907050539472148E+286 , 1.2296942187394488E+289 ,
2.0044015765453015E+291 , 3.2872185855342945E+293 , 5.423910666131586E+295 ,
9.0036917057784329E+297 , 1.5036165148649983E+300 , 2.5260757449731969E+302 ,
4.2690680090047027E+304 , 7.257415615307994E+306 } ; srClearBC ( cz5yqt3r3xb
. fuob0ddam2h . k44bc5mjbl ) ; iowqpk3eub2 . atfdsr0huc = chmgkez0tpf .
h3jcgsxl3g ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( kjmvupbl2i .
GradeSource_CurrentSetting == 1 ) { inakimlcb3 = muDoubleScalarAtan (
iowqpk3eub2 . hpa0jnkmab / ( rtP__PlntVehDstCGFrntAxl2f2PassVeh_sldd_ +
rtP__PlntVehDstCGRearAxl2f2PassVeh_sldd_ ) ) * 57.295779513082323 ; } else {
inakimlcb3 = rtP__EnvNominalGrade2f2Environment_sldd_ ; } iowqpk3eub2 .
ciy0n0fvf4 = rtP__EnvGrvty2f2Environment_sldd_ *
rtP__PlntVehMass2f2PassVeh_sldd_ * rtP__PlntVehMass2f2PassVeh_sldd_ /
rtP__DriverTractiveForce2f2Driver_sldd_ * muDoubleScalarSin (
0.017453292519943295 * inakimlcb3 ) ; } iowqpk3eub2 . m3s2vgesq4 =
iowqpk3eub2 . atfdsr0huc - iowqpk3eub2 . ciy0n0fvf4 ; if ( iowqpk3eub2 .
np15oib1kn ) { hbjgnzk0ke = kjmvupbl2i . Constant8_Value_orsngthdfl ; } else
if ( kjmvupbl2i . Constant9_Value_bderlrgqtg ) { hbjgnzk0ke = kjmvupbl2i .
Constant_Value_i0lrc5dd0p ; } else if ( iowqpk3eub2 . m3s2vgesq4 > kjmvupbl2i
. u1_UpperSat ) { hbjgnzk0ke = kjmvupbl2i . u1_UpperSat ; } else if (
iowqpk3eub2 . m3s2vgesq4 < kjmvupbl2i . u1_LowerSat ) { hbjgnzk0ke =
kjmvupbl2i . u1_LowerSat ; } else { hbjgnzk0ke = iowqpk3eub2 . m3s2vgesq4 ; }
if ( hbjgnzk0ke > kjmvupbl2i . Saturation_UpperSat ) { hchtvncnnw =
kjmvupbl2i . Saturation_UpperSat ; } else if ( hbjgnzk0ke < kjmvupbl2i .
Saturation_LowerSat ) { hchtvncnnw = kjmvupbl2i . Saturation_LowerSat ; }
else { hchtvncnnw = hbjgnzk0ke ; } fuob0ddam2 ( rtS , iowqpk3eub2 .
puwtafzry1 , hchtvncnnw , & iowqpk3eub2 . fuob0ddam2h , & cz5yqt3r3xb .
fuob0ddam2h ) ; iowqpk3eub2 . hy1torfg4w [ 0 ] = kjmvupbl2i .
uDOFBodyAxes_v_ini * muDoubleScalarCos ( muDoubleScalarAtan2 ( kjmvupbl2i .
VehicleBody3DOFLongitudinal_zdot_o , rtP__PlntVehInitLongVel2f2PassVeh_sldd_
) ) ; iowqpk3eub2 . hy1torfg4w [ 1 ] = kjmvupbl2i . uDOFBodyAxes_v_ini *
muDoubleScalarSin ( muDoubleScalarAtan2 ( kjmvupbl2i .
VehicleBody3DOFLongitudinal_zdot_o , rtP__PlntVehInitLongVel2f2PassVeh_sldd_
) ) ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { if ( cz5yqt3r3xb . bk5zchkp0d
!= 0 ) { chmgkez0tpf . nu0uj5bmhw [ 0 ] = iowqpk3eub2 . hy1torfg4w [ 0 ] ;
chmgkez0tpf . nu0uj5bmhw [ 1 ] = iowqpk3eub2 . hy1torfg4w [ 1 ] ; }
iowqpk3eub2 . pcflqp2d2t [ 0 ] = chmgkez0tpf . nu0uj5bmhw [ 0 ] ; iowqpk3eub2
. pcflqp2d2t [ 1 ] = chmgkez0tpf . nu0uj5bmhw [ 1 ] ; } else { iowqpk3eub2 .
pcflqp2d2t [ 0 ] = chmgkez0tpf . nu0uj5bmhw [ 0 ] ; iowqpk3eub2 . pcflqp2d2t
[ 1 ] = chmgkez0tpf . nu0uj5bmhw [ 1 ] ; } iowqpk3eub2 . ieofldeqy2 [ 0 ] =
iowqpk3eub2 . pcflqp2d2t [ 0 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
iowqpk3eub2 . ieofldeqy2 [ 1 ] = kjmvupbl2i . Constant4_Value ; } iowqpk3eub2
. ieofldeqy2 [ 2 ] = iowqpk3eub2 . pcflqp2d2t [ 1 ] ; dlepxyenjj = (
iowqpk3eub2 . ieofldeqy2 [ 0 ] <= kjmvupbl2i . CompareToConstant3_const ) ;
if ( ssIsModeUpdateTimeStep ( rtS ) ) { if ( cz5yqt3r3xb . csyymkwdxj != 0 )
{ chmgkez0tpf . bkhbsrsujg = iowqpk3eub2 . fahxrqmdmd ; } if ( chmgkez0tpf .
bkhbsrsujg >= rtP__batt_cap_init2f2SparkBat_sldd_ /
rtP__soc_init2f2SparkBat_sldd_ / rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_
) { if ( rtP__batt_cap_init2f2SparkBat_sldd_ / rtP__soc_init2f2SparkBat_sldd_
/ rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ != chmgkez0tpf . bkhbsrsujg ) {
chmgkez0tpf . bkhbsrsujg = rtP__batt_cap_init2f2SparkBat_sldd_ /
rtP__soc_init2f2SparkBat_sldd_ / rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_
; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } else if ( (
chmgkez0tpf . bkhbsrsujg <= kjmvupbl2i . IntegratorLimited_LowerSat ) && (
chmgkez0tpf . bkhbsrsujg != kjmvupbl2i . IntegratorLimited_LowerSat ) ) {
chmgkez0tpf . bkhbsrsujg = kjmvupbl2i . IntegratorLimited_LowerSat ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } iowqpk3eub2 .
haybfyc2q4 = chmgkez0tpf . bkhbsrsujg ; } else if ( chmgkez0tpf . bkhbsrsujg
>= rtP__batt_cap_init2f2SparkBat_sldd_ / rtP__soc_init2f2SparkBat_sldd_ /
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ) { iowqpk3eub2 . haybfyc2q4 =
rtP__batt_cap_init2f2SparkBat_sldd_ / rtP__soc_init2f2SparkBat_sldd_ /
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ; } else if ( chmgkez0tpf .
bkhbsrsujg <= kjmvupbl2i . IntegratorLimited_LowerSat ) { iowqpk3eub2 .
haybfyc2q4 = kjmvupbl2i . IntegratorLimited_LowerSat ; } else { iowqpk3eub2 .
haybfyc2q4 = chmgkez0tpf . bkhbsrsujg ; } iowqpk3eub2 . dqkowwdyo5 =
iowqpk3eub2 . haybfyc2q4 / ( rtP__batt_cap_init2f2SparkBat_sldd_ /
rtP__soc_init2f2SparkBat_sldd_ / rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_
) ; iowqpk3eub2 . cgnfgn223x = kjmvupbl2i . SOCRatioto_Gain * iowqpk3eub2 .
dqkowwdyo5 ; hbjgnzk0ke = ssGetT ( rtS ) ; if ( kjmvupbl2i . repeat_Value >
kjmvupbl2i . Switch_Threshold ) { iowqpk3eub2 . dqh4oe22xa =
muDoubleScalarMod ( hbjgnzk0ke , kjmvupbl2i . tFinal_Value ) ; } else {
iowqpk3eub2 . dqh4oe22xa = hbjgnzk0ke ; } fl3dumv41q = look1_pbinlcapw (
iowqpk3eub2 . dqh4oe22xa , kjmvupbl2i . uDLookupTable_bp01Data , kjmvupbl2i .
uDLookupTable_tableData , & cz5yqt3r3xb . mhe3tr5m1h , 600U ) ; iowqpk3eub2 .
jfa1nbks1u = 2.236936292054402 * fl3dumv41q ; iowqpk3eub2 . o4djdimsdm =
0.44704000000000005 * iowqpk3eub2 . jfa1nbks1u ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { iowqpk3eub2 . fjkq3v532f = ( muDoubleScalarAbs ( inakimlcb3 ) >=
kjmvupbl2i . CompareToConstant1_const ) ; } dlepxyenjj = ( ( iowqpk3eub2 .
jtrhoigdxv && dlepxyenjj && ( iowqpk3eub2 . cgnfgn223x <= kjmvupbl2i .
CompareToConstant4_const ) ) || ( ( muDoubleScalarAbs ( iowqpk3eub2 .
o4djdimsdm ) <= kjmvupbl2i . CompareToConstant_const ) && iowqpk3eub2 .
fjkq3v532f ) ) ; if ( ( kjmvupbl2i . Constant10_Value_ok4kguqinp ||
dlepxyenjj ) && iowqpk3eub2 . jiym3rqvan ) { if ( kjmvupbl2i .
Constant10_Value_ok4kguqinp ) { fl3dumv41q = kjmvupbl2i .
Constant2_Value_cv5k10omis ; } else { fl3dumv41q = dlepxyenjj ; } } else if (
kjmvupbl2i . Constant12_Value_lr1o3jzrdw ) { fl3dumv41q = kjmvupbl2i .
Constant_Value_lmvdjicp50 ; } else if ( iowqpk3eub2 . m3s2vgesq4 > kjmvupbl2i
. u0_UpperSat ) { fl3dumv41q = - kjmvupbl2i . u0_UpperSat ; } else if (
iowqpk3eub2 . m3s2vgesq4 < kjmvupbl2i . u0_LowerSat ) { fl3dumv41q = -
kjmvupbl2i . u0_LowerSat ; } else { fl3dumv41q = - iowqpk3eub2 . m3s2vgesq4 ;
} if ( fl3dumv41q > kjmvupbl2i . Saturation_UpperSat_ncjkk1jucd ) {
fgllbh5cfi = kjmvupbl2i . Saturation_UpperSat_ncjkk1jucd ; } else if (
fl3dumv41q < kjmvupbl2i . Saturation_LowerSat_g5xnm5rrtb ) { fgllbh5cfi =
kjmvupbl2i . Saturation_LowerSat_g5xnm5rrtb ; } else { fgllbh5cfi =
fl3dumv41q ; } fuob0ddam2 ( rtS , iowqpk3eub2 . gcn3sxipyq , fgllbh5cfi , &
iowqpk3eub2 . dwnfs4t0ur , & cz5yqt3r3xb . dwnfs4t0ur ) ; if ( iowqpk3eub2 .
ieofldeqy2 [ 0 ] > kjmvupbl2i . DeadZone_End ) { iowqpk3eub2 . jpcr1f245w =
iowqpk3eub2 . ieofldeqy2 [ 0 ] - kjmvupbl2i . DeadZone_End ; } else if (
iowqpk3eub2 . ieofldeqy2 [ 0 ] >= kjmvupbl2i . DeadZone_Start ) { iowqpk3eub2
. jpcr1f245w = 0.0 ; } else { iowqpk3eub2 . jpcr1f245w = iowqpk3eub2 .
ieofldeqy2 [ 0 ] - kjmvupbl2i . DeadZone_Start ; } if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { cz5yqt3r3xb . jmm4c105ye = ssGetTaskTime ( rtS , 1 ) ;
cz5yqt3r3xb . f05boyvyxi = cz5yqt3r3xb . jmm4c105ye - cz5yqt3r3xb .
dukvvezhh4 ; cz5yqt3r3xb . dukvvezhh4 = cz5yqt3r3xb . jmm4c105ye ;
cz5yqt3r3xb . em1wbmdjow += cz5yqt3r3xb . f05boyvyxi ; cz5yqt3r3xb .
hndyq1p4da = - 1 ; if ( cz5yqt3r3xb . ldpanoehpw == 0U ) { cz5yqt3r3xb .
ldpanoehpw = 1U ; cz5yqt3r3xb . iyzfufaeyj = 1U ; iowqpk3eub2 . ivqnpc0uok =
rtP__DriverInitialGear2f2Driver_sldd_ ; cz5yqt3r3xb . eck5rxblzt =
rtP__DriverInitialGear2f2Driver_sldd_ ; if (
rtP__DriverInitialGear2f2Driver_sldd_ < 0.0 ) { cz5yqt3r3xb . metkb44aex =
nz1er2u5yq ; cz5yqt3r3xb . em1wbmdjow = 0.0 ; iowqpk3eub2 . ivqnpc0uok = -
1.0 ; } else if ( rtP__DriverInitialGear2f2Driver_sldd_ == 0.0 ) {
cz5yqt3r3xb . metkb44aex = mtch1eyo22 ; cz5yqt3r3xb . em1wbmdjow = 0.0 ;
iowqpk3eub2 . ivqnpc0uok = 0.0 ; } else { cz5yqt3r3xb . metkb44aex =
bvcpbrrjdc ; cz5yqt3r3xb . em1wbmdjow = 0.0 ; } } else { switch ( cz5yqt3r3xb
. metkb44aex ) { case mtch1eyo22 : if ( ( ( ssGetTaskTime ( rtS , 1 ) -
cz5yqt3r3xb . dukvvezhh4 ) + cz5yqt3r3xb . em1wbmdjow >=
rtP__DriverShiftTime2f2Driver_sldd_ ) && ( ( iowqpk3eub2 . o4djdimsdm > 0.0 )
&& ( iowqpk3eub2 . fuob0ddam2h . motv0pybyv > 0.0 ) ) ) { cz5yqt3r3xb .
eck5rxblzt ++ ; cz5yqt3r3xb . metkb44aex = bvcpbrrjdc ; cz5yqt3r3xb .
em1wbmdjow = 0.0 ; iowqpk3eub2 . ivqnpc0uok = cz5yqt3r3xb . eck5rxblzt ; }
else if ( ( ( ssGetTaskTime ( rtS , 1 ) - cz5yqt3r3xb . dukvvezhh4 ) +
cz5yqt3r3xb . em1wbmdjow >= rtP__DriverShiftTime2f2Driver_sldd_ ) && (
iowqpk3eub2 . o4djdimsdm < 0.0 ) ) { cz5yqt3r3xb . eck5rxblzt -- ;
cz5yqt3r3xb . metkb44aex = nz1er2u5yq ; cz5yqt3r3xb . em1wbmdjow = 0.0 ;
iowqpk3eub2 . ivqnpc0uok = - 1.0 ; } break ; case bvcpbrrjdc : if ( ( (
ssGetTaskTime ( rtS , 1 ) - cz5yqt3r3xb . dukvvezhh4 ) + cz5yqt3r3xb .
em1wbmdjow >= rtP__DriverShiftTime2f2Driver_sldd_ ) && ( ( ( iowqpk3eub2 .
dwnfs4t0ur . motv0pybyv >= 0.0 ) && ( iowqpk3eub2 . jpcr1f245w <= 0.0 ) && (
iowqpk3eub2 . fuob0ddam2h . motv0pybyv <= 0.0 ) ) || ( iowqpk3eub2 .
o4djdimsdm <= 0.0 ) ) ) { cz5yqt3r3xb . eck5rxblzt -- ; cz5yqt3r3xb .
metkb44aex = mtch1eyo22 ; cz5yqt3r3xb . em1wbmdjow = 0.0 ; iowqpk3eub2 .
ivqnpc0uok = 0.0 ; } break ; default : if ( ( ( ssGetTaskTime ( rtS , 1 ) -
cz5yqt3r3xb . dukvvezhh4 ) + cz5yqt3r3xb . em1wbmdjow >=
rtP__DriverShiftTime2f2Driver_sldd_ ) && ( iowqpk3eub2 . o4djdimsdm >= 0.0 )
) { cz5yqt3r3xb . eck5rxblzt ++ ; cz5yqt3r3xb . metkb44aex = mtch1eyo22 ;
cz5yqt3r3xb . em1wbmdjow = 0.0 ; iowqpk3eub2 . ivqnpc0uok = 0.0 ; } break ; }
} if ( ssIsModeUpdateTimeStep ( rtS ) ) { cz5yqt3r3xb . hxfbtrll0m = (
iowqpk3eub2 . o4djdimsdm != kjmvupbl2i . Constant_Value ) ; } iowqpk3eub2 .
ceqisvxe55 = ( cz5yqt3r3xb . hxfbtrll0m && ( iowqpk3eub2 . ivqnpc0uok >
kjmvupbl2i . Constant_Value_agm4xpnhd5 ) ) ; } if ( iowqpk3eub2 . ceqisvxe55
) { if ( iowqpk3eub2 . ivqnpc0uok != 0.0 ) { fl3dumv41q = iowqpk3eub2 .
fuob0ddam2h . motv0pybyv ; } else { fl3dumv41q = kjmvupbl2i .
Constant1_Value_krev4j2l44 ; } axn1d2xjab_idx_1 = iowqpk3eub2 . dwnfs4t0ur .
motv0pybyv ; } else if ( iowqpk3eub2 . ivqnpc0uok != 0.0 ) { fl3dumv41q =
iowqpk3eub2 . dwnfs4t0ur . motv0pybyv ; axn1d2xjab_idx_1 = iowqpk3eub2 .
fuob0ddam2h . motv0pybyv ; } else { fl3dumv41q = kjmvupbl2i .
Constant_Value_gn4owpvnhh ; axn1d2xjab_idx_1 = muDoubleScalarMax (
iowqpk3eub2 . dwnfs4t0ur . motv0pybyv , iowqpk3eub2 . fuob0ddam2h .
motv0pybyv ) ; } if ( fl3dumv41q > kjmvupbl2i . DeadZone2_End ) { iowqpk3eub2
. h2mcwsniul = fl3dumv41q - kjmvupbl2i . DeadZone2_End ; } else if (
fl3dumv41q >= kjmvupbl2i . DeadZone2_Start ) { iowqpk3eub2 . h2mcwsniul = 0.0
; } else { iowqpk3eub2 . h2mcwsniul = fl3dumv41q - kjmvupbl2i .
DeadZone2_Start ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( cz5yqt3r3xb
. dqdopzr2jv . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
cz5yqt3r3xb . dqdopzr2jv . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * )
& iowqpk3eub2 . h2mcwsniul + 0 ) ; } } } if ( ssIsModeUpdateTimeStep ( rtS )
) { if ( cz5yqt3r3xb . dkt3lps5cz != 0 ) { chmgkez0tpf . idw3fynbuy =
iowqpk3eub2 . mcfo01bafi ; } iowqpk3eub2 . n3drdbfr2d = chmgkez0tpf .
idw3fynbuy ; } else { iowqpk3eub2 . n3drdbfr2d = chmgkez0tpf . idw3fynbuy ; }
iowqpk3eub2 . p1wsp4msvl = 1.0 / rtP__PlntBattTimeCnst2f2BatteryDCDC_sldd_ *
iowqpk3eub2 . n3drdbfr2d ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if (
cz5yqt3r3xb . ate5v5wkj2 . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( cz5yqt3r3xb . ate5v5wkj2 . AQHandles , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & iowqpk3eub2 . p1wsp4msvl + 0 ) ; } } } iowqpk3eub2 .
dqqdmdpyoe = chmgkez0tpf . ozjmimh0zs ; fl3dumv41q = look1_binlcapw (
iowqpk3eub2 . dqqdmdpyoe , kjmvupbl2i . MaxTorqueLimit_bp01Data , kjmvupbl2i
. MaxTorqueLimit_tableData , 57U ) ; iowqpk3eub2 . dknfaxifuu = chmgkez0tpf .
ptjew1tdci ; iowqpk3eub2 . jnpzg142hx = 1.0 /
rtP__PlntEM1TimeCnst2f2ElectricMachine1_sldd_ * iowqpk3eub2 . dknfaxifuu ;
iowqpk3eub2 . jztvbzsesd = 1.0 / fl3dumv41q * iowqpk3eub2 . jnpzg142hx ;
iowqpk3eub2 . hq4ll3qyzp = fl3dumv41q * look1_binlcpw ( iowqpk3eub2 .
jztvbzsesd , kjmvupbl2i . Interpolatedzerocrossing_bp01Data , kjmvupbl2i .
Interpolatedzerocrossing_tableData , 1U ) ; iowqpk3eub2 . ok34kzchcv =
iowqpk3eub2 . dqqdmdpyoe * iowqpk3eub2 . hq4ll3qyzp ; iowqpk3eub2 .
mlr1surpas = iowqpk3eub2 . ok34kzchcv + look2_binlcapw ( iowqpk3eub2 .
dqqdmdpyoe , iowqpk3eub2 . hq4ll3qyzp , kjmvupbl2i .
uDLookupTable_bp01Data_j0jelwswp2 , kjmvupbl2i . uDLookupTable_bp02Data ,
kjmvupbl2i . uDLookupTable_tableData_boreho334u , kjmvupbl2i .
uDLookupTable_maxIndex , 42U ) ; if ( ssIsModeUpdateTimeStep ( rtS ) ) {
cz5yqt3r3xb . plgoio1geg = iowqpk3eub2 . p1wsp4msvl >= kjmvupbl2i .
Saturation_UpperSat_eo55tnq2by ? 1 : iowqpk3eub2 . p1wsp4msvl > kjmvupbl2i .
Saturation_LowerSat_l32n30czhn ? 0 : - 1 ; } iowqpk3eub2 . c3irmcv4ar =
cz5yqt3r3xb . plgoio1geg == 1 ? kjmvupbl2i . Saturation_UpperSat_eo55tnq2by :
cz5yqt3r3xb . plgoio1geg == - 1 ? kjmvupbl2i . Saturation_LowerSat_l32n30czhn
: iowqpk3eub2 . p1wsp4msvl ; iowqpk3eub2 . l0jn2lsago = iowqpk3eub2 .
mlr1surpas / iowqpk3eub2 . c3irmcv4ar ; if ( ssIsSampleHit ( rtS , 1 , 0 ) )
{ { if ( cz5yqt3r3xb . cj0ldup5gu . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( cz5yqt3r3xb . cj0ldup5gu . AQHandles , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & iowqpk3eub2 . l0jn2lsago + 0 ) ; } } } iowqpk3eub2 .
nzrgmpq2kc = 0.0 ; iowqpk3eub2 . nzrgmpq2kc += kjmvupbl2i .
MotorCouplingDynamics_C * chmgkez0tpf . ovuztebk3m ; if ( ssIsSampleHit ( rtS
, 1 , 0 ) ) { { if ( cz5yqt3r3xb . jgeac3tq21 . AQHandles && ssGetLogOutput (
rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb . jgeac3tq21 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & iowqpk3eub2 . nzrgmpq2kc + 0 ) ; } }
} if ( axn1d2xjab_idx_1 > kjmvupbl2i . DeadZone1_End ) { iowqpk3eub2 .
l05au4wqsc = axn1d2xjab_idx_1 - kjmvupbl2i . DeadZone1_End ; } else if (
axn1d2xjab_idx_1 >= kjmvupbl2i . DeadZone1_Start ) { iowqpk3eub2 . l05au4wqsc
= 0.0 ; } else { iowqpk3eub2 . l05au4wqsc = axn1d2xjab_idx_1 - kjmvupbl2i .
DeadZone1_Start ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( cz5yqt3r3xb
. irudyghn3o . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
cz5yqt3r3xb . irudyghn3o . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * )
& iowqpk3eub2 . l05au4wqsc + 0 ) ; } } { if ( cz5yqt3r3xb . nikehp134v .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb .
nikehp134v . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & iowqpk3eub2
. ivqnpc0uok + 0 ) ; } } { if ( cz5yqt3r3xb . gxisg0jsgi . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb . gxisg0jsgi .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & iowqpk3eub2 . ieofldeqy2
[ 0 ] + 0 ) ; } } iowqpk3eub2 . it0brydt4y [ 0 ] = kjmvupbl2i .
Constant8_Value ; } iowqpk3eub2 . fyfoh3jqvh = chmgkez0tpf . dnh4xblb2m ;
iowqpk3eub2 . it0brydt4y [ 1 ] = iowqpk3eub2 . fyfoh3jqvh ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { iowqpk3eub2 . it0brydt4y [ 2 ] = kjmvupbl2i
. Constant9_Value ; iowqpk3eub2 . ixwcnrrmnz = cz5yqt3r3xb . kodqgqrf0p ; }
fl3dumv41q = iowqpk3eub2 . it0brydt4y [ 1 ] * iowqpk3eub2 . ieofldeqy2 [ 2 ]
; axn1d2xjab_idx_1 = iowqpk3eub2 . ieofldeqy2 [ 0 ] * iowqpk3eub2 .
it0brydt4y [ 2 ] ; heevn31eio = iowqpk3eub2 . it0brydt4y [ 0 ] * iowqpk3eub2
. ieofldeqy2 [ 1 ] ; bsbjaaxu1h = iowqpk3eub2 . ieofldeqy2 [ 1 ] *
iowqpk3eub2 . it0brydt4y [ 2 ] ; pybjjcy2x4 = iowqpk3eub2 . it0brydt4y [ 0 ]
* iowqpk3eub2 . ieofldeqy2 [ 2 ] ; bvq1hwe3s4 = iowqpk3eub2 . ieofldeqy2 [ 0
] * iowqpk3eub2 . it0brydt4y [ 1 ] ; iowqpk3eub2 . excv5bvsnq = chmgkez0tpf .
frrsnlydio ; muDoubleScalarSinCos ( iowqpk3eub2 . excv5bvsnq , & bafqqszzsf ,
& l4fni1levc ) ; iowqpk3eub2 . ipitix1sph [ 0 ] = - bafqqszzsf * kjmvupbl2i .
uDOFBodyAxes_g ; iowqpk3eub2 . ipitix1sph [ 1 ] = l4fni1levc * kjmvupbl2i .
uDOFBodyAxes_g ; iowqpk3eub2 . eulnmgegcl = chmgkez0tpf . gqe2iwaq4w ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING
, & noe4wlvctth . hiezj5oam5 , ( iowqpk3eub2 . ixwcnrrmnz ) ) ; if ( (
zcEvent != NO_ZCEVENT ) || ( cz5yqt3r3xb . phh4r25dqx != 0 ) ) { dlepxyenjj =
( chmgkez0tpf . gd53vwvy1z != iowqpk3eub2 . d1uv3awlwx ) ; chmgkez0tpf .
gd53vwvy1z = iowqpk3eub2 . d1uv3awlwx ; if ( dlepxyenjj ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } iowqpk3eub2 .
me1friqgpo = chmgkez0tpf . gd53vwvy1z ; } else { iowqpk3eub2 . me1friqgpo =
chmgkez0tpf . gd53vwvy1z ; } iowqpk3eub2 . om2tfdfzpf =
rtP__PlntDriveshftDamp2f2Drivetrain_sldd_ * iowqpk3eub2 . me1friqgpo ;
iowqpk3eub2 . mnx3jlre3e = chmgkez0tpf . b3wjkyrln3 ; iowqpk3eub2 .
ltojpdf1ny = rtP__PlntDriveshftStiff2f2Drivetrain_sldd_ * iowqpk3eub2 .
mnx3jlre3e ; iowqpk3eub2 . hreyyfol5z = iowqpk3eub2 . om2tfdfzpf +
iowqpk3eub2 . ltojpdf1ny ; iowqpk3eub2 . nodgw2f1ru [ 0 ] = iowqpk3eub2 .
hreyyfol5z ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { iowqpk3eub2 . oytg0154s1
= cz5yqt3r3xb . eo23of04rz ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) {
zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING , & noe4wlvctth . b5lqrekcd2 , (
iowqpk3eub2 . oytg0154s1 ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || (
cz5yqt3r3xb . jpnae2oihw != 0 ) ) { dlepxyenjj = ( chmgkez0tpf . hys5vfyni2
!= iowqpk3eub2 . k45bb5csjy ) ; chmgkez0tpf . hys5vfyni2 = iowqpk3eub2 .
k45bb5csjy ; if ( dlepxyenjj ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } } iowqpk3eub2 . jca5e2ozdf = chmgkez0tpf . hys5vfyni2 ; } else {
iowqpk3eub2 . jca5e2ozdf = chmgkez0tpf . hys5vfyni2 ; } iowqpk3eub2 .
ghrf1v1zl1 = rtP__PlntDriveshftDamp2f2Drivetrain_sldd_ * iowqpk3eub2 .
jca5e2ozdf ; iowqpk3eub2 . jwausjpzws = chmgkez0tpf . hlouk1zoiv ;
iowqpk3eub2 . era2dgtrck = rtP__PlntDriveshftStiff2f2Drivetrain_sldd_ *
iowqpk3eub2 . jwausjpzws ; iowqpk3eub2 . jbgfcwpebf = iowqpk3eub2 .
ghrf1v1zl1 + iowqpk3eub2 . era2dgtrck ; iowqpk3eub2 . nodgw2f1ru [ 1 ] =
iowqpk3eub2 . jbgfcwpebf ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { iowqpk3eub2
. nodgw2f1ru [ 2 ] = kjmvupbl2i . Constant1_Value ; iowqpk3eub2 . nodgw2f1ru
[ 3 ] = kjmvupbl2i . Constant3_Value ; iowqpk3eub2 . mubnbbme0n =
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ ; iowqpk3eub2 . a4b5yp1ztb =
rtP__PlntBrkRearBias2f2PassVeh_sldd_ ; } iowqpk3eub2 . kggvpu401a =
chmgkez0tpf . gvprqgkyrb ; iowqpk3eub2 . jzibsxlg2x = iowqpk3eub2 .
kggvpu401a * iowqpk3eub2 . c5qsn10kon ; iowqpk3eub2 . hmrl2pnkei =
iowqpk3eub2 . nodgw2f1ru [ 0 ] - iowqpk3eub2 . jzibsxlg2x ; iowqpk3eub2 .
npw2p1gyxa = kjmvupbl2i . Signconvention_Gain * iowqpk3eub2 . hmrl2pnkei ;
iowqpk3eub2 . d4rqnnq3qc [ 0 ] = chmgkez0tpf . fs3asrx1bi [ 0 ] ; iowqpk3eub2
. d4rqnnq3qc [ 1 ] = chmgkez0tpf . fs3asrx1bi [ 1 ] ; iowqpk3eub2 .
d4rqnnq3qc [ 2 ] = chmgkez0tpf . fs3asrx1bi [ 2 ] ; iowqpk3eub2 . d4rqnnq3qc
[ 3 ] = chmgkez0tpf . fs3asrx1bi [ 3 ] ; iowqpk3eub2 . d23gupiqyg [ 0 ] =
iowqpk3eub2 . mubnbbme0n * iowqpk3eub2 . d4rqnnq3qc [ 0 ] ; iowqpk3eub2 .
d23gupiqyg [ 1 ] = iowqpk3eub2 . mubnbbme0n * iowqpk3eub2 . d4rqnnq3qc [ 1 ]
; iowqpk3eub2 . d23gupiqyg [ 2 ] = iowqpk3eub2 . a4b5yp1ztb * iowqpk3eub2 .
d4rqnnq3qc [ 2 ] ; iowqpk3eub2 . d23gupiqyg [ 3 ] = iowqpk3eub2 . a4b5yp1ztb
* iowqpk3eub2 . d4rqnnq3qc [ 3 ] ; iowqpk3eub2 . a0xxw4glf3 [ 0 ] =
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ * iowqpk3eub2 . d23gupiqyg [ 0 ] ;
iowqpk3eub2 . a0xxw4glf3 [ 1 ] = rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ *
iowqpk3eub2 . d23gupiqyg [ 1 ] ; iowqpk3eub2 . a0xxw4glf3 [ 2 ] =
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ * iowqpk3eub2 . d23gupiqyg [ 2 ] ;
iowqpk3eub2 . a0xxw4glf3 [ 3 ] = rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ *
iowqpk3eub2 . d23gupiqyg [ 3 ] ; iowqpk3eub2 . mdv0kbjtue = iowqpk3eub2 .
a0xxw4glf3 [ 0 ] * iowqpk3eub2 . eiobpiy5iw *
rtP__PlntBrkActrBoreFrnt2f2PassVeh_sldd_ *
rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ ; if ( iowqpk3eub2 . mdv0kbjtue >
kjmvupbl2i . DisallowNegativeBrakeTorque_UpperSat ) { iowqpk3eub2 .
lbrhvvx0as = kjmvupbl2i . DisallowNegativeBrakeTorque_UpperSat ; } else if (
iowqpk3eub2 . mdv0kbjtue < kjmvupbl2i . DisallowNegativeBrakeTorque_LowerSat
) { iowqpk3eub2 . lbrhvvx0as = kjmvupbl2i .
DisallowNegativeBrakeTorque_LowerSat ; } else { iowqpk3eub2 . lbrhvvx0as =
iowqpk3eub2 . mdv0kbjtue ; } iowqpk3eub2 . bor30mivo0 =
rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ *
rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ * iowqpk3eub2 . lbrhvvx0as ;
iowqpk3eub2 . esrwu2tlga = rtP__PlntBrkStcFricCffFrnt2f2PassVeh_sldd_ /
rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ * iowqpk3eub2 . bor30mivo0 ;
iowqpk3eub2 . o24lfarmih = rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ /
rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ * iowqpk3eub2 . bor30mivo0 ; for (
iwcjrd5qos = 0 ; iwcjrd5qos < 1 ; iwcjrd5qos ++ ) { ky35uthna1 = iowqpk3eub2
. npw2p1gyxa ; ciom3cwcfo = iowqpk3eub2 . esrwu2tlga ; hglixnprmy =
iowqpk3eub2 . o24lfarmih ; ifd12z2us4 ( rtS , ky35uthna1 , ciom3cwcfo ,
hglixnprmy , rtP__PlntWhlInitAngVel2f2PassVeh_sldd_ ,
rtP__PlntWhlDampCoeffFrnt2f2PassVeh_sldd_ ,
rtP__PlntWhlInertiaFrnt2f2PassVeh_sldd_ ,
rtP__PlntWhlVelTolLowVel2f2PassVeh_sldd_ *
rtP__PlntWhlLdRadius2f2PassVeh_sldd_ * 0.0 , & iowqpk3eub2 . gugymbw2iq [
iwcjrd5qos ] . eq332hab4o , & cz5yqt3r3xb . gugymbw2iq [ iwcjrd5qos ] .
eq332hab4o , & kjmvupbl2i . gugymbw2iq . eq332hab4o , & chmgkez0tpf .
gugymbw2iq [ iwcjrd5qos ] . eq332hab4o , & ( ( csjfowx4jp * )
ssGetContStateDisabled ( rtS ) ) -> gugymbw2iq [ iwcjrd5qos ] . eq332hab4o )
; iowqpk3eub2 . bnugi4f5zh = iowqpk3eub2 . gugymbw2iq [ iwcjrd5qos ] .
eq332hab4o . aseqcyqgtw ; } iowqpk3eub2 . hbi3xwos1i = iowqpk3eub2 .
it0brydt4y [ 1 ] * iowqpk3eub2 . dsgbg2ev15 [ 2 ] ; iowqpk3eub2 . nc1n0ec5qh
= iowqpk3eub2 . dsgbg2ev15 [ 0 ] * iowqpk3eub2 . it0brydt4y [ 2 ] ;
iowqpk3eub2 . oobfcqh5ys = iowqpk3eub2 . it0brydt4y [ 0 ] * iowqpk3eub2 .
dsgbg2ev15 [ 1 ] ; iowqpk3eub2 . jaeul1jr5j = iowqpk3eub2 . dsgbg2ev15 [ 1 ]
* iowqpk3eub2 . it0brydt4y [ 2 ] ; iowqpk3eub2 . j0r5bjaq2v = iowqpk3eub2 .
it0brydt4y [ 0 ] * iowqpk3eub2 . dsgbg2ev15 [ 2 ] ; iowqpk3eub2 . a1ph325uji
= iowqpk3eub2 . dsgbg2ev15 [ 0 ] * iowqpk3eub2 . it0brydt4y [ 1 ] ;
iowqpk3eub2 . kfyckqnkve [ 0 ] = iowqpk3eub2 . hbi3xwos1i - iowqpk3eub2 .
jaeul1jr5j ; iowqpk3eub2 . kfyckqnkve [ 1 ] = iowqpk3eub2 . nc1n0ec5qh -
iowqpk3eub2 . j0r5bjaq2v ; iowqpk3eub2 . kfyckqnkve [ 2 ] = iowqpk3eub2 .
oobfcqh5ys - iowqpk3eub2 . a1ph325uji ; iowqpk3eub2 . lfmebcy0qq [ 0 ] =
iowqpk3eub2 . kfyckqnkve [ 0 ] + iowqpk3eub2 . ieofldeqy2 [ 0 ] ; iowqpk3eub2
. lfmebcy0qq [ 1 ] = iowqpk3eub2 . kfyckqnkve [ 1 ] + iowqpk3eub2 .
ieofldeqy2 [ 1 ] ; iowqpk3eub2 . lfmebcy0qq [ 2 ] = iowqpk3eub2 . kfyckqnkve
[ 2 ] + iowqpk3eub2 . ieofldeqy2 [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) )
{ iowqpk3eub2 . ig54gcy1dp [ 0 ] =
rtP__EnvNomFrictionScaling2f2Environment_sldd_ ; iowqpk3eub2 . ig54gcy1dp [ 1
] = rtP__EnvNomFrictionScaling2f2Environment_sldd_ ; iowqpk3eub2 . ig54gcy1dp
[ 2 ] = rtP__EnvNomFrictionScaling2f2Environment_sldd_ ; iowqpk3eub2 .
ig54gcy1dp [ 3 ] = rtP__EnvNomFrictionScaling2f2Environment_sldd_ ; }
jpsdmdkpvb ( iowqpk3eub2 . c5qsn10kon , iowqpk3eub2 . eulnmgegcl ,
iowqpk3eub2 . bnugi4f5zh , iowqpk3eub2 . lfmebcy0qq [ 0 ] , kjmvupbl2i .
Constant_Value_ox4b0qmmua , kjmvupbl2i . Constant1_Value_madrljuz5s ,
kjmvupbl2i . Constant7_Value_jw4525ferj , kjmvupbl2i .
Constant6_Value_haqashkspo , iowqpk3eub2 . ig54gcy1dp [ 0 ] , kjmvupbl2i .
Constant2_Value_hrl4h1nv5h , kjmvupbl2i . Constant19_Value , kjmvupbl2i .
Constant12_Value_i31yk0uobv , kjmvupbl2i . Constant14_Value ,
rtP__PlntWhlPrsFrnt2f2PassVeh_sldd_ , kjmvupbl2i . Constant5_Value_dacbkkfpn1
, kjmvupbl2i . Constant2_Value_oxwaq1rttm ,
rtP__PlntWhlVelIndpntForceCff2f2PassVeh_sldd_ ,
rtP__PlntWhlLnrVelForceComp2f2PassVeh_sldd_ ,
rtP__PlntWhlQuadVelForceComp2f2PassVeh_sldd_ , kjmvupbl2i . Constant16_Value
, kjmvupbl2i . Constant7_Value_foxxbjtyrb , kjmvupbl2i .
Constant9_Value_eysw0sbbzh , rtP__PlntWhlNrmlForceExp2f2PassVeh_sldd_ ,
rtP__PlntWhlTirPrsExp2f2PassVeh_sldd_ , kjmvupbl2i .
Constant11_Value_nocbm1rgns , kjmvupbl2i . Constant10_Value_avvpfk2yix ,
rtP__PlntWhlUnldRadius2f2PassVeh_sldd_ , kjmvupbl2i .
Constant1_Value_mn3owz1rml , kjmvupbl2i . Constant3_Value_k0ow21geiu ,
kjmvupbl2i . Constant19_Value_oenymaoxve , kjmvupbl2i .
Constant12_Value_farpfklrnv , kjmvupbl2i . Constant14_Value_lybnj0wjpu , 0.0
, kjmvupbl2i . Constant14_Value_lvkuq2smhk , kjmvupbl2i .
Constant1_Value_cfz1jt3mva , kjmvupbl2i . Constant19_Value_n1gnmpmhhz ,
kjmvupbl2i . Constant2_Value_oss1gtz0qr , kjmvupbl2i .
Constant3_Value_cfl5diz1lh , kjmvupbl2i . Constant4_Value_fhufcungmj ,
kjmvupbl2i . Constant5_Value_a24smbxcxn , kjmvupbl2i .
Constant6_Value_gp2r5vw2mo , kjmvupbl2i . Constant7_Value_k2q5ccyqdb ,
kjmvupbl2i . Constant8_Value_h25n4izmhu , kjmvupbl2i .
Constant9_Value_drrybtftp2 , kjmvupbl2i . Constant10_Value_mqgatp2bxz ,
kjmvupbl2i . Constant11_Value_b51kwi1veq , kjmvupbl2i .
Constant16_Value_lkmy5w415o , kjmvupbl2i . Constant17_Value , kjmvupbl2i .
Constant13_Value , kjmvupbl2i . Constant15_Value , kjmvupbl2i .
Constant21_Value , kjmvupbl2i . Constant22_Value , kjmvupbl2i .
Constant18_Value , kjmvupbl2i . Constant20_Value , kjmvupbl2i .
Constant24_Value , kjmvupbl2i . Constant23_Value , kjmvupbl2i . FxType_Value
, kjmvupbl2i . rollType_Value , kjmvupbl2i . vertType_Value ,
rtP__PlntWhlMaxFz2f2PassVeh_sldd_ , rtP__PlntWhlMinFz2f2PassVeh_sldd_ ,
rtP__PlntWhlVelTolLowVel2f2PassVeh_sldd_ ,
rtP__PlntWhlMaxSlipRatio2f2PassVeh_sldd_ , & iowqpk3eub2 . hl3n1vp0xp ) ;
iowqpk3eub2 . a043amhdpn [ 0 ] = iowqpk3eub2 . hl3n1vp0xp . lpoql10kbh ;
iowqpk3eub2 . a043amhdpn [ 1 ] = iowqpk3eub2 . hl3n1vp0xp . lpoql10kbh ;
iowqpk3eub2 . bdac45x5j4 = chmgkez0tpf . loymnatkey ; iowqpk3eub2 .
cjintpfg52 = chmgkez0tpf . njzuxe2cj0 ; iowqpk3eub2 . f4hqazlsnx =
iowqpk3eub2 . cjintpfg52 * iowqpk3eub2 . ha4njibf2o ; iowqpk3eub2 .
nn3knanxji = iowqpk3eub2 . nodgw2f1ru [ 2 ] - iowqpk3eub2 . f4hqazlsnx ;
iowqpk3eub2 . moec5qfiw2 = kjmvupbl2i . Signconvention_Gain_mp05x1ag5n *
iowqpk3eub2 . nn3knanxji ; iowqpk3eub2 . oblub0q0xy = iowqpk3eub2 .
a0xxw4glf3 [ 2 ] * iowqpk3eub2 . g3u0z4mibd *
rtP__PlntBrkActrBoreRear2f2PassVeh_sldd_ *
rtP__PlntBrkNumPadsRear2f2PassVeh_sldd_ ; if ( iowqpk3eub2 . oblub0q0xy >
kjmvupbl2i . DisallowNegativeBrakeTorque_UpperSat_o1kzlkoiof ) { iowqpk3eub2
. cz5uwjohsf = kjmvupbl2i . DisallowNegativeBrakeTorque_UpperSat_o1kzlkoiof ;
} else if ( iowqpk3eub2 . oblub0q0xy < kjmvupbl2i .
DisallowNegativeBrakeTorque_LowerSat_dih5vnpzw3 ) { iowqpk3eub2 . cz5uwjohsf
= kjmvupbl2i . DisallowNegativeBrakeTorque_LowerSat_dih5vnpzw3 ; } else {
iowqpk3eub2 . cz5uwjohsf = iowqpk3eub2 . oblub0q0xy ; } iowqpk3eub2 .
ngroqkt0pw = rtP__PlntBrkPadMeanRadiusRear2f2PassVeh_sldd_ *
rtP__PlntBrkKinFricCffRear2f2PassVeh_sldd_ * iowqpk3eub2 . cz5uwjohsf ;
iowqpk3eub2 . awed5xcf4w = rtP__PlntBrkStcFricCffRear2f2PassVeh_sldd_ /
rtP__PlntBrkKinFricCffRear2f2PassVeh_sldd_ * iowqpk3eub2 . ngroqkt0pw ;
iowqpk3eub2 . ptvh2on4rv = rtP__PlntBrkKinFricCffRear2f2PassVeh_sldd_ /
rtP__PlntBrkKinFricCffRear2f2PassVeh_sldd_ * iowqpk3eub2 . ngroqkt0pw ; for (
imarvxjq4b = 0 ; imarvxjq4b < 1 ; imarvxjq4b ++ ) { iakuel5r1b = iowqpk3eub2
. moec5qfiw2 ; ljkhidnsry = iowqpk3eub2 . awed5xcf4w ; nc0kxbwjpe =
iowqpk3eub2 . ptvh2on4rv ; ox4yrtzjzo ( rtS , iakuel5r1b , ljkhidnsry ,
nc0kxbwjpe , rtP__PlntWhlInitAngVel2f2PassVeh_sldd_ ,
rtP__PlntWhlDampCoeffRear2f2PassVeh_sldd_ ,
rtP__PlntWhlInertiaRear2f2PassVeh_sldd_ ,
rtP__PlntWhlVelTolLowVel2f2PassVeh_sldd_ *
rtP__PlntWhlLdRadius2f2PassVeh_sldd_ * 0.0 , & iowqpk3eub2 . ngpegw05gp [
imarvxjq4b ] . neijo20b0e , & cz5yqt3r3xb . ngpegw05gp [ imarvxjq4b ] .
neijo20b0e , & kjmvupbl2i . ngpegw05gp . neijo20b0e , & chmgkez0tpf .
ngpegw05gp [ imarvxjq4b ] . neijo20b0e , & ( ( csjfowx4jp * )
ssGetContStateDisabled ( rtS ) ) -> ngpegw05gp [ imarvxjq4b ] . neijo20b0e )
; iowqpk3eub2 . bugorax2wv = iowqpk3eub2 . ngpegw05gp [ imarvxjq4b ] .
neijo20b0e . j5ybwspdla ; } iowqpk3eub2 . ogn0f5pp4g = iowqpk3eub2 .
it0brydt4y [ 1 ] * iowqpk3eub2 . ha5st20hrl [ 2 ] ; iowqpk3eub2 . k0hqlnc5zr
= iowqpk3eub2 . ha5st20hrl [ 0 ] * iowqpk3eub2 . it0brydt4y [ 2 ] ;
iowqpk3eub2 . f3b5qs3y2i = iowqpk3eub2 . it0brydt4y [ 0 ] * iowqpk3eub2 .
ha5st20hrl [ 1 ] ; iowqpk3eub2 . lhxhxansdi = iowqpk3eub2 . ha5st20hrl [ 1 ]
* iowqpk3eub2 . it0brydt4y [ 2 ] ; iowqpk3eub2 . ankpmmyhrc = iowqpk3eub2 .
it0brydt4y [ 0 ] * iowqpk3eub2 . ha5st20hrl [ 2 ] ; iowqpk3eub2 . lqcbudindy
= iowqpk3eub2 . ha5st20hrl [ 0 ] * iowqpk3eub2 . it0brydt4y [ 1 ] ;
iowqpk3eub2 . ieuul0ehou [ 0 ] = iowqpk3eub2 . ogn0f5pp4g - iowqpk3eub2 .
lhxhxansdi ; iowqpk3eub2 . ieuul0ehou [ 1 ] = iowqpk3eub2 . k0hqlnc5zr -
iowqpk3eub2 . ankpmmyhrc ; iowqpk3eub2 . ieuul0ehou [ 2 ] = iowqpk3eub2 .
f3b5qs3y2i - iowqpk3eub2 . lqcbudindy ; iowqpk3eub2 . b0ut3x2rou [ 0 ] =
iowqpk3eub2 . ieuul0ehou [ 0 ] + iowqpk3eub2 . ieofldeqy2 [ 0 ] ; iowqpk3eub2
. b0ut3x2rou [ 1 ] = iowqpk3eub2 . ieuul0ehou [ 1 ] + iowqpk3eub2 .
ieofldeqy2 [ 1 ] ; iowqpk3eub2 . b0ut3x2rou [ 2 ] = iowqpk3eub2 . ieuul0ehou
[ 2 ] + iowqpk3eub2 . ieofldeqy2 [ 2 ] ; jpsdmdkpvb ( iowqpk3eub2 .
ha4njibf2o , iowqpk3eub2 . bdac45x5j4 , iowqpk3eub2 . bugorax2wv ,
iowqpk3eub2 . b0ut3x2rou [ 0 ] , kjmvupbl2i . Constant_Value_lrohdfumq0 ,
kjmvupbl2i . Constant1_Value_axx41mppte , kjmvupbl2i .
Constant7_Value_i21l0p1igp , kjmvupbl2i . Constant6_Value_fa5rtppirt ,
iowqpk3eub2 . ig54gcy1dp [ 2 ] , kjmvupbl2i . Constant2_Value_iowj05grf3 ,
kjmvupbl2i . Constant19_Value_dpn5hbziwd , kjmvupbl2i .
Constant12_Value_ivwhvv2f32 , kjmvupbl2i . Constant14_Value_lrrto4y5wk ,
rtP__PlntWhlPrsRear2f2PassVeh_sldd_ , kjmvupbl2i . Constant5_Value_nrupuvlr2x
, kjmvupbl2i . Constant2_Value_btgexx4rdf ,
rtP__PlntWhlVelIndpntForceCff2f2PassVeh_sldd_ ,
rtP__PlntWhlLnrVelForceComp2f2PassVeh_sldd_ ,
rtP__PlntWhlQuadVelForceComp2f2PassVeh_sldd_ , kjmvupbl2i .
Constant16_Value_outaov0n1i , kjmvupbl2i . Constant7_Value_jc1h2p4tmo ,
kjmvupbl2i . Constant9_Value_bpp23kljtg ,
rtP__PlntWhlNrmlForceExp2f2PassVeh_sldd_ ,
rtP__PlntWhlTirPrsExp2f2PassVeh_sldd_ , kjmvupbl2i .
Constant11_Value_k5z1c1pccv , kjmvupbl2i . Constant10_Value_chawn1iunv ,
rtP__PlntWhlUnldRadius2f2PassVeh_sldd_ , kjmvupbl2i .
Constant1_Value_ijjucdpx4z , kjmvupbl2i . Constant3_Value_kd1cdwvsmq ,
kjmvupbl2i . Constant19_Value_carumowgfd , kjmvupbl2i .
Constant12_Value_p41n2rkj3c , kjmvupbl2i . Constant14_Value_iudgfqgatl , 0.0
, kjmvupbl2i . Constant14_Value_ejjg4lvjbm , kjmvupbl2i .
Constant1_Value_lssuufufgs , kjmvupbl2i . Constant19_Value_ie2icqjt3r ,
kjmvupbl2i . Constant2_Value_gto0akxltq , kjmvupbl2i .
Constant3_Value_pwu4uracio , kjmvupbl2i . Constant4_Value_hwugnn04il ,
kjmvupbl2i . Constant5_Value_gfvvgq5u2g , kjmvupbl2i .
Constant6_Value_bhkz5yhocd , kjmvupbl2i . Constant7_Value_ht4v3ntoks ,
kjmvupbl2i . Constant8_Value_dxmm43aqzd , kjmvupbl2i .
Constant9_Value_c24m3kfu3n , kjmvupbl2i . Constant10_Value_beeuojsfr5 ,
kjmvupbl2i . Constant11_Value_hxdnpy4b1i , kjmvupbl2i .
Constant16_Value_ouvmeicr45 , kjmvupbl2i . Constant17_Value_m0zpppdh3a ,
kjmvupbl2i . Constant13_Value_j2lsewktzu , kjmvupbl2i .
Constant15_Value_fipekdq3rg , kjmvupbl2i . Constant21_Value_ellpoqjiq3 ,
kjmvupbl2i . Constant22_Value_bc01pf1do2 , kjmvupbl2i .
Constant18_Value_pgi4gobtba , kjmvupbl2i . Constant20_Value_iazvmhwnvz ,
kjmvupbl2i . Constant24_Value_ocljdcjnlv , kjmvupbl2i .
Constant23_Value_njgl4ivha2 , kjmvupbl2i . FxType_Value_ia5teaumdj ,
kjmvupbl2i . rollType_Value_antrfjfwjn , kjmvupbl2i .
vertType_Value_gb2pmxm2ig , rtP__PlntWhlMaxFz2f2PassVeh_sldd_ ,
rtP__PlntWhlMinFz2f2PassVeh_sldd_ , rtP__PlntWhlVelTolLowVel2f2PassVeh_sldd_
, rtP__PlntWhlMaxSlipRatio2f2PassVeh_sldd_ , & iowqpk3eub2 . kzv4bjyp4c ) ;
iowqpk3eub2 . a043amhdpn [ 2 ] = iowqpk3eub2 . kzv4bjyp4c . lpoql10kbh ;
iowqpk3eub2 . a043amhdpn [ 3 ] = iowqpk3eub2 . kzv4bjyp4c . lpoql10kbh ;
iowqpk3eub2 . gi0w2rdunb = iowqpk3eub2 . a043amhdpn [ 0 ] + iowqpk3eub2 .
a043amhdpn [ 1 ] ; iowqpk3eub2 . oozbsuyo0w = iowqpk3eub2 . a043amhdpn [ 2 ]
+ iowqpk3eub2 . a043amhdpn [ 3 ] ; iowqpk3eub2 . l5capshjmg = iowqpk3eub2 .
gi0w2rdunb + iowqpk3eub2 . oozbsuyo0w ; if ( ssIsSampleHit ( rtS , 1 , 0 ) )
{ iowqpk3eub2 . i42qwfv1dk [ 0 ] = - rtP__EnvWindVelX2f2Environment_sldd_ ;
iowqpk3eub2 . i42qwfv1dk [ 1 ] = - rtP__EnvWindVelY2f2Environment_sldd_ ;
iowqpk3eub2 . i42qwfv1dk [ 2 ] = - rtP__EnvWindVelZ2f2Environment_sldd_ ; }
iowqpk3eub2 . i42qwfv1dk [ 3 ] = 0.0 ; iowqpk3eub2 . i42qwfv1dk [ 4 ] = 0.0 ;
iowqpk3eub2 . mxj1ezdble [ 0 ] = chmgkez0tpf . lz5qf1zk2o [ 0 ] ; iowqpk3eub2
. mxj1ezdble [ 1 ] = chmgkez0tpf . lz5qf1zk2o [ 1 ] ; iowqpk3eub2 .
jx23o501wt [ 0 ] = iowqpk3eub2 . mxj1ezdble [ 0 ] ; if ( ssIsSampleHit ( rtS
, 1 , 0 ) ) { iowqpk3eub2 . jx23o501wt [ 1 ] = kjmvupbl2i .
Constant3_Value_m0hpy20xls ; iowqpk3eub2 . ptmq24ign2 [ 0 ] = kjmvupbl2i .
Constant6_Value ; } iowqpk3eub2 . jx23o501wt [ 2 ] = iowqpk3eub2 . mxj1ezdble
[ 1 ] ; iowqpk3eub2 . ptmq24ign2 [ 1 ] = iowqpk3eub2 . excv5bvsnq ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { iowqpk3eub2 . ptmq24ign2 [ 2 ] = kjmvupbl2i
. Constant7_Value ; } iowqpk3eub2 . pbsshwqr4c [ 0 ] = kjmvupbl2i .
Constant2_Value_k1kw5pzbeu ; iowqpk3eub2 . pbsshwqr4c [ 1 ] = iowqpk3eub2 .
ptmq24ign2 [ 1 ] ; iowqpk3eub2 . pbsshwqr4c [ 2 ] = kjmvupbl2i .
Constant1_Value_ieeszgtdrd ; muDoubleScalarSinCos ( iowqpk3eub2 . pbsshwqr4c
[ 0 ] , & lq2sjwrvwv_idx_0 , & bgnvcvf3bg_idx_0 ) ; muDoubleScalarSinCos (
iowqpk3eub2 . pbsshwqr4c [ 1 ] , & lq2sjwrvwv_idx_1 , & bgnvcvf3bg_idx_1 ) ;
muDoubleScalarSinCos ( iowqpk3eub2 . pbsshwqr4c [ 2 ] , & lq2sjwrvwv_idx_2 ,
& bgnvcvf3bg_idx_2 ) ; iowqpk3eub2 . iwn3v1eud0 [ 0 ] = bgnvcvf3bg_idx_0 *
bgnvcvf3bg_idx_1 ; iowqpk3eub2 . iwn3v1eud0 [ 1 ] = lq2sjwrvwv_idx_1 *
lq2sjwrvwv_idx_2 * bgnvcvf3bg_idx_0 - lq2sjwrvwv_idx_0 * bgnvcvf3bg_idx_2 ;
iowqpk3eub2 . iwn3v1eud0 [ 2 ] = lq2sjwrvwv_idx_1 * bgnvcvf3bg_idx_2 *
bgnvcvf3bg_idx_0 + lq2sjwrvwv_idx_0 * lq2sjwrvwv_idx_2 ; iowqpk3eub2 .
iwn3v1eud0 [ 3 ] = lq2sjwrvwv_idx_0 * bgnvcvf3bg_idx_1 ; iowqpk3eub2 .
iwn3v1eud0 [ 4 ] = lq2sjwrvwv_idx_1 * lq2sjwrvwv_idx_2 * lq2sjwrvwv_idx_0 +
bgnvcvf3bg_idx_0 * bgnvcvf3bg_idx_2 ; iowqpk3eub2 . iwn3v1eud0 [ 5 ] =
lq2sjwrvwv_idx_1 * bgnvcvf3bg_idx_2 * lq2sjwrvwv_idx_0 - bgnvcvf3bg_idx_0 *
lq2sjwrvwv_idx_2 ; iowqpk3eub2 . iwn3v1eud0 [ 6 ] = - lq2sjwrvwv_idx_1 ;
iowqpk3eub2 . iwn3v1eud0 [ 7 ] = bgnvcvf3bg_idx_1 * lq2sjwrvwv_idx_2 ;
iowqpk3eub2 . iwn3v1eud0 [ 8 ] = bgnvcvf3bg_idx_1 * bgnvcvf3bg_idx_2 ; for (
i = 0 ; i < 3 ; i ++ ) { iowqpk3eub2 . mybqcz32qe [ 3 * i ] = iowqpk3eub2 .
iwn3v1eud0 [ i ] ; iowqpk3eub2 . mybqcz32qe [ 3 * i + 1 ] = iowqpk3eub2 .
iwn3v1eud0 [ i + 3 ] ; iowqpk3eub2 . mybqcz32qe [ 3 * i + 2 ] = iowqpk3eub2 .
iwn3v1eud0 [ i + 6 ] ; } for ( i = 0 ; i < 3 ; i ++ ) { iowqpk3eub2 .
cueeis35rw [ i ] = 0.0 ; iowqpk3eub2 . cueeis35rw [ i ] += iowqpk3eub2 .
mybqcz32qe [ i ] * iowqpk3eub2 . dsgbg2ev15 [ 0 ] ; iowqpk3eub2 . cueeis35rw
[ i ] += iowqpk3eub2 . mybqcz32qe [ i + 3 ] * iowqpk3eub2 . dsgbg2ev15 [ 1 ]
; iowqpk3eub2 . cueeis35rw [ i ] += iowqpk3eub2 . mybqcz32qe [ i + 6 ] *
iowqpk3eub2 . dsgbg2ev15 [ 2 ] ; } iowqpk3eub2 . nbtpcxmbom [ 0 ] =
iowqpk3eub2 . jx23o501wt [ 0 ] + iowqpk3eub2 . cueeis35rw [ 0 ] ; iowqpk3eub2
. nbtpcxmbom [ 1 ] = kjmvupbl2i . Constant12_Value + iowqpk3eub2 . cueeis35rw
[ 1 ] ; iowqpk3eub2 . nbtpcxmbom [ 2 ] = iowqpk3eub2 . jx23o501wt [ 2 ] +
iowqpk3eub2 . cueeis35rw [ 2 ] ; iowqpk3eub2 . igqq0bffvg [ 0 ] = iowqpk3eub2
. nbtpcxmbom [ 2 ] ; muDoubleScalarSinCos ( iowqpk3eub2 . pbsshwqr4c [ 0 ] ,
& bgnvcvf3bg_idx_0 , & lq2sjwrvwv_idx_0 ) ; muDoubleScalarSinCos (
iowqpk3eub2 . pbsshwqr4c [ 1 ] , & bgnvcvf3bg_idx_1 , & lq2sjwrvwv_idx_1 ) ;
muDoubleScalarSinCos ( iowqpk3eub2 . pbsshwqr4c [ 2 ] , & bgnvcvf3bg_idx_2 ,
& lq2sjwrvwv_idx_2 ) ; iowqpk3eub2 . dahbupbiyl [ 0 ] = lq2sjwrvwv_idx_0 *
lq2sjwrvwv_idx_1 ; iowqpk3eub2 . dahbupbiyl [ 1 ] = bgnvcvf3bg_idx_1 *
bgnvcvf3bg_idx_2 * lq2sjwrvwv_idx_0 - bgnvcvf3bg_idx_0 * lq2sjwrvwv_idx_2 ;
iowqpk3eub2 . dahbupbiyl [ 2 ] = bgnvcvf3bg_idx_1 * lq2sjwrvwv_idx_2 *
lq2sjwrvwv_idx_0 + bgnvcvf3bg_idx_0 * bgnvcvf3bg_idx_2 ; iowqpk3eub2 .
dahbupbiyl [ 3 ] = bgnvcvf3bg_idx_0 * lq2sjwrvwv_idx_1 ; iowqpk3eub2 .
dahbupbiyl [ 4 ] = bgnvcvf3bg_idx_1 * bgnvcvf3bg_idx_2 * bgnvcvf3bg_idx_0 +
lq2sjwrvwv_idx_0 * lq2sjwrvwv_idx_2 ; iowqpk3eub2 . dahbupbiyl [ 5 ] =
bgnvcvf3bg_idx_1 * lq2sjwrvwv_idx_2 * bgnvcvf3bg_idx_0 - lq2sjwrvwv_idx_0 *
bgnvcvf3bg_idx_2 ; iowqpk3eub2 . dahbupbiyl [ 6 ] = - bgnvcvf3bg_idx_1 ;
iowqpk3eub2 . dahbupbiyl [ 7 ] = lq2sjwrvwv_idx_1 * bgnvcvf3bg_idx_2 ;
iowqpk3eub2 . dahbupbiyl [ 8 ] = lq2sjwrvwv_idx_1 * lq2sjwrvwv_idx_2 ; for (
i = 0 ; i < 3 ; i ++ ) { iowqpk3eub2 . nbnkfdvqmr [ 3 * i ] = iowqpk3eub2 .
dahbupbiyl [ i ] ; iowqpk3eub2 . nbnkfdvqmr [ 3 * i + 1 ] = iowqpk3eub2 .
dahbupbiyl [ i + 3 ] ; iowqpk3eub2 . nbnkfdvqmr [ 3 * i + 2 ] = iowqpk3eub2 .
dahbupbiyl [ i + 6 ] ; } for ( i = 0 ; i < 3 ; i ++ ) { iowqpk3eub2 .
i35om0deks [ i ] = 0.0 ; iowqpk3eub2 . i35om0deks [ i ] += iowqpk3eub2 .
nbnkfdvqmr [ i ] * iowqpk3eub2 . ha5st20hrl [ 0 ] ; iowqpk3eub2 . i35om0deks
[ i ] += iowqpk3eub2 . nbnkfdvqmr [ i + 3 ] * iowqpk3eub2 . ha5st20hrl [ 1 ]
; iowqpk3eub2 . i35om0deks [ i ] += iowqpk3eub2 . nbnkfdvqmr [ i + 6 ] *
iowqpk3eub2 . ha5st20hrl [ 2 ] ; } iowqpk3eub2 . m2vaomzt5b [ 0 ] =
iowqpk3eub2 . jx23o501wt [ 0 ] + iowqpk3eub2 . i35om0deks [ 0 ] ; iowqpk3eub2
. m2vaomzt5b [ 1 ] = kjmvupbl2i . Constant12_Value + iowqpk3eub2 . i35om0deks
[ 1 ] ; iowqpk3eub2 . m2vaomzt5b [ 2 ] = iowqpk3eub2 . jx23o501wt [ 2 ] +
iowqpk3eub2 . i35om0deks [ 2 ] ; iowqpk3eub2 . igqq0bffvg [ 1 ] = iowqpk3eub2
. m2vaomzt5b [ 2 ] ; iowqpk3eub2 . arewjxhwf2 [ 0 ] = iowqpk3eub2 .
igqq0bffvg [ 0 ] - 0.0 ; iowqpk3eub2 . arewjxhwf2 [ 1 ] = iowqpk3eub2 .
igqq0bffvg [ 1 ] - 0.0 ; iowqpk3eub2 . jp5pcaboje [ 0 ] = look1_binlxpw (
iowqpk3eub2 . arewjxhwf2 [ 0 ] , kjmvupbl2i .
VehicleBody3DOFLongitudinal_dzsF , kjmvupbl2i .
VehicleBody3DOFLongitudinal_FskF , 5U ) ; iowqpk3eub2 . jp5pcaboje [ 1 ] =
look1_binlxpw ( iowqpk3eub2 . arewjxhwf2 [ 1 ] , kjmvupbl2i .
VehicleBody3DOFLongitudinal_dzsR , kjmvupbl2i .
VehicleBody3DOFLongitudinal_FskR , 5U ) ; iowqpk3eub2 . ccpbmibxu1 [ 0 ] =
iowqpk3eub2 . lfmebcy0qq [ 2 ] ; iowqpk3eub2 . ccpbmibxu1 [ 1 ] = iowqpk3eub2
. b0ut3x2rou [ 2 ] ; iowqpk3eub2 . pdtzd43pag [ 0 ] = iowqpk3eub2 .
ccpbmibxu1 [ 0 ] - 0.0 ; iowqpk3eub2 . pdtzd43pag [ 1 ] = iowqpk3eub2 .
ccpbmibxu1 [ 1 ] - 0.0 ; iowqpk3eub2 . an5lcjhr21 [ 0 ] = look1_binlxpw (
iowqpk3eub2 . pdtzd43pag [ 0 ] , kjmvupbl2i .
VehicleBody3DOFLongitudinal_dzdotsF , kjmvupbl2i .
VehicleBody3DOFLongitudinal_FsbF , 6U ) ; iowqpk3eub2 . an5lcjhr21 [ 1 ] =
look1_binlxpw ( iowqpk3eub2 . pdtzd43pag [ 1 ] , kjmvupbl2i .
VehicleBody3DOFLongitudinal_dzdotsR , kjmvupbl2i .
VehicleBody3DOFLongitudinal_FsbR , 6U ) ; iowqpk3eub2 . e0ng4xzira [ 0 ] =
iowqpk3eub2 . jp5pcaboje [ 0 ] + iowqpk3eub2 . an5lcjhr21 [ 0 ] ; iowqpk3eub2
. mggaons4rn [ 0 ] = kjmvupbl2i . NFNR_Gain [ 0 ] * iowqpk3eub2 . e0ng4xzira
[ 0 ] ; iowqpk3eub2 . e0ng4xzira [ 1 ] = iowqpk3eub2 . jp5pcaboje [ 1 ] +
iowqpk3eub2 . an5lcjhr21 [ 1 ] ; iowqpk3eub2 . mggaons4rn [ 1 ] = kjmvupbl2i
. NFNR_Gain [ 1 ] * iowqpk3eub2 . e0ng4xzira [ 1 ] ; iowqpk3eub2 . i42qwfv1dk
[ 5 ] = iowqpk3eub2 . mggaons4rn [ 0 ] ; iowqpk3eub2 . i42qwfv1dk [ 6 ] = 0.0
; iowqpk3eub2 . i42qwfv1dk [ 7 ] = 0.0 ; iowqpk3eub2 . i42qwfv1dk [ 8 ] =
iowqpk3eub2 . mggaons4rn [ 1 ] ; iowqpk3eub2 . i42qwfv1dk [ 9 ] = iowqpk3eub2
. mkoefhpy3s [ 0 ] ; iowqpk3eub2 . i42qwfv1dk [ 10 ] = iowqpk3eub2 .
mkoefhpy3s [ 1 ] ; iowqpk3eub2 . i42qwfv1dk [ 11 ] = iowqpk3eub2 . mkoefhpy3s
[ 2 ] ; iowqpk3eub2 . bvukyawnn2 [ 0 ] = - iowqpk3eub2 . ptmq24ign2 [ 1 ] ;
iowqpk3eub2 . bvukyawnn2 [ 1 ] = - iowqpk3eub2 . ptmq24ign2 [ 1 ] ;
iowqpk3eub2 . bvukyawnn2 [ 2 ] = - iowqpk3eub2 . ptmq24ign2 [ 1 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { iowqpk3eub2 . gtaxtjiya4 =
0.017453292519943295 * inakimlcb3 ; } iowqpk3eub2 . bvukyawnn2 [ 3 ] = -
iowqpk3eub2 . ptmq24ign2 [ 1 ] - iowqpk3eub2 . gtaxtjiya4 ; parallel_for ( 4
, iwjxg25rah , 1 , "iwjxg25rah" ) ; iowqpk3eub2 . eoin413gqw [ 0 ] =
iowqpk3eub2 . b4tu2y2jyw [ 3 ] ; iowqpk3eub2 . kn03lhlboz [ 0 ] = kjmvupbl2i
. Gain_Gain [ 0 ] * iowqpk3eub2 . eoin413gqw [ 0 ] ; iowqpk3eub2 . hamrym443t
[ 0 ] = iowqpk3eub2 . b4tu2y2jyw [ 6 ] ; iowqpk3eub2 . nktxf2g2id [ 0 ] =
kjmvupbl2i . Gain1_Gain [ 0 ] * iowqpk3eub2 . hamrym443t [ 0 ] ; iowqpk3eub2
. aedljs0e4u [ 0 ] = iowqpk3eub2 . kn03lhlboz [ 0 ] + iowqpk3eub2 .
nktxf2g2id [ 0 ] ; iowqpk3eub2 . m5vbsnyz5y [ 0 ] = iowqpk3eub2 . b4tu2y2jyw
[ 0 ] ; iowqpk3eub2 . dop2xc5lh4 [ 0 ] = iowqpk3eub2 . ieofldeqy2 [ 0 ] -
iowqpk3eub2 . m5vbsnyz5y [ 0 ] ; iowqpk3eub2 . aw422d2u0j [ 0 ] = kjmvupbl2i
. u_Gain [ 0 ] * iowqpk3eub2 . dop2xc5lh4 [ 0 ] ; bafqqszzsf =
muDoubleScalarTanh ( iowqpk3eub2 . aw422d2u0j [ 0 ] ) ; iowqpk3eub2 .
oyf1kknxky [ 0 ] = bafqqszzsf - kjmvupbl2i . Constant4_Value_an3au0uy5w [ 0 ]
; iowqpk3eub2 . hd2z2xy0lb [ 0 ] = iowqpk3eub2 . dop2xc5lh4 [ 0 ] *
iowqpk3eub2 . dop2xc5lh4 [ 0 ] ; iowqpk3eub2 . eoin413gqw [ 1 ] = iowqpk3eub2
. b4tu2y2jyw [ 4 ] ; iowqpk3eub2 . kn03lhlboz [ 1 ] = kjmvupbl2i . Gain_Gain
[ 1 ] * iowqpk3eub2 . eoin413gqw [ 1 ] ; iowqpk3eub2 . hamrym443t [ 1 ] =
iowqpk3eub2 . b4tu2y2jyw [ 7 ] ; iowqpk3eub2 . nktxf2g2id [ 1 ] = kjmvupbl2i
. Gain1_Gain [ 1 ] * iowqpk3eub2 . hamrym443t [ 1 ] ; iowqpk3eub2 .
aedljs0e4u [ 1 ] = iowqpk3eub2 . kn03lhlboz [ 1 ] + iowqpk3eub2 . nktxf2g2id
[ 1 ] ; iowqpk3eub2 . m5vbsnyz5y [ 1 ] = iowqpk3eub2 . b4tu2y2jyw [ 1 ] ;
iowqpk3eub2 . dop2xc5lh4 [ 1 ] = iowqpk3eub2 . ieofldeqy2 [ 1 ] - iowqpk3eub2
. m5vbsnyz5y [ 1 ] ; iowqpk3eub2 . aw422d2u0j [ 1 ] = kjmvupbl2i . u_Gain [ 1
] * iowqpk3eub2 . dop2xc5lh4 [ 1 ] ; iowqpk3eub2 . oyf1kknxky [ 1 ] =
muDoubleScalarTanh ( iowqpk3eub2 . aw422d2u0j [ 1 ] ) - kjmvupbl2i .
Constant4_Value_an3au0uy5w [ 1 ] ; iowqpk3eub2 . hd2z2xy0lb [ 1 ] =
iowqpk3eub2 . dop2xc5lh4 [ 1 ] * iowqpk3eub2 . dop2xc5lh4 [ 1 ] ; iowqpk3eub2
. eoin413gqw [ 2 ] = iowqpk3eub2 . b4tu2y2jyw [ 5 ] ; iowqpk3eub2 .
kn03lhlboz [ 2 ] = kjmvupbl2i . Gain_Gain [ 2 ] * iowqpk3eub2 . eoin413gqw [
2 ] ; iowqpk3eub2 . hamrym443t [ 2 ] = iowqpk3eub2 . b4tu2y2jyw [ 8 ] ;
iowqpk3eub2 . nktxf2g2id [ 2 ] = kjmvupbl2i . Gain1_Gain [ 2 ] * iowqpk3eub2
. hamrym443t [ 2 ] ; iowqpk3eub2 . aedljs0e4u [ 2 ] = iowqpk3eub2 .
kn03lhlboz [ 2 ] + iowqpk3eub2 . nktxf2g2id [ 2 ] ; iowqpk3eub2 . m5vbsnyz5y
[ 2 ] = iowqpk3eub2 . b4tu2y2jyw [ 2 ] ; iowqpk3eub2 . dop2xc5lh4 [ 2 ] =
iowqpk3eub2 . ieofldeqy2 [ 2 ] - iowqpk3eub2 . m5vbsnyz5y [ 2 ] ; iowqpk3eub2
. aw422d2u0j [ 2 ] = kjmvupbl2i . u_Gain [ 2 ] * iowqpk3eub2 . dop2xc5lh4 [ 2
] ; iowqpk3eub2 . oyf1kknxky [ 2 ] = muDoubleScalarTanh ( iowqpk3eub2 .
aw422d2u0j [ 2 ] ) - kjmvupbl2i . Constant4_Value_an3au0uy5w [ 2 ] ;
iowqpk3eub2 . hd2z2xy0lb [ 2 ] = iowqpk3eub2 . dop2xc5lh4 [ 2 ] * iowqpk3eub2
. dop2xc5lh4 [ 2 ] ; iowqpk3eub2 . p333nkuoxh = ( iowqpk3eub2 . hd2z2xy0lb [
0 ] + iowqpk3eub2 . hd2z2xy0lb [ 1 ] ) + iowqpk3eub2 . hd2z2xy0lb [ 2 ] ; if
( ssIsMajorTimeStep ( rtS ) ) { if ( cz5yqt3r3xb . j3jayeyudr != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; cz5yqt3r3xb .
j3jayeyudr = 0 ; } inakimlcb3 = muDoubleScalarSqrt ( iowqpk3eub2 . p333nkuoxh
) ; } else { if ( iowqpk3eub2 . p333nkuoxh < 0.0 ) { inakimlcb3 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( iowqpk3eub2 . p333nkuoxh ) ) ; }
else { inakimlcb3 = muDoubleScalarSqrt ( iowqpk3eub2 . p333nkuoxh ) ; } if (
iowqpk3eub2 . p333nkuoxh < 0.0 ) { cz5yqt3r3xb . j3jayeyudr = 1 ; } }
iowqpk3eub2 . oduhehvfwb = inakimlcb3 * inakimlcb3 ; iowqpk3eub2 . ma1olqmik5
[ 0 ] = rtP__PlntVehAeroDragCff2f2PassVeh_sldd_ ; inakimlcb3 =
muDoubleScalarAtan2 ( iowqpk3eub2 . dop2xc5lh4 [ 1 ] , iowqpk3eub2 .
dop2xc5lh4 [ 0 ] ) ; iowqpk3eub2 . ma1olqmik5 [ 1 ] = look1_binlcpw (
inakimlcb3 , kjmvupbl2i . DragForce_beta_w , kjmvupbl2i . DragForce_Cs , 1U )
; iowqpk3eub2 . ma1olqmik5 [ 2 ] = rtP__PlntVehAeroLiftCff2f2PassVeh_sldd_ ;
iowqpk3eub2 . ma1olqmik5 [ 3 ] = look1_binlxpw ( inakimlcb3 , kjmvupbl2i .
Crm_bp01Data , kjmvupbl2i . Crm_tableData , 1U ) ; iowqpk3eub2 . ma1olqmik5 [
4 ] = bafqqszzsf * rtP__PlntVehAeroPitchCff2f2PassVeh_sldd_ ; iowqpk3eub2 .
ma1olqmik5 [ 5 ] = look1_binlxpw ( inakimlcb3 , kjmvupbl2i . DragForce_beta_w
, kjmvupbl2i . DragForce_Cym , 1U ) ; inakimlcb3 = 0.5 *
rtP__PlntVehAeroFrntArea2f2PassVeh_sldd_ * rtP__EnvAbsPrs2f2Environment_sldd_
/ kjmvupbl2i . DragForce_R ; for ( i = 0 ; i <= 4 ; i += 2 ) { tmp =
_mm_loadu_pd ( & iowqpk3eub2 . ma1olqmik5 [ i ] ) ; _mm_storeu_pd ( &
iowqpk3eub2 . dfzzklugat [ i ] , _mm_div_pd ( _mm_mul_pd ( _mm_set1_pd (
iowqpk3eub2 . oduhehvfwb ) , tmp ) , _mm_set1_pd (
rtP__EnvAirTemp2f2Environment_sldd_ ) ) ) ; tmp = _mm_loadu_pd ( &
iowqpk3eub2 . dfzzklugat [ i ] ) ; _mm_storeu_pd ( & iowqpk3eub2 . lszyzcrgde
[ i ] , _mm_mul_pd ( _mm_set1_pd ( inakimlcb3 ) , tmp ) ) ; } iowqpk3eub2 .
cb3a3cmvqi [ 0 ] = iowqpk3eub2 . oyf1kknxky [ 0 ] * iowqpk3eub2 . lszyzcrgde
[ 0 ] ; iowqpk3eub2 . giviabarth [ 0 ] = iowqpk3eub2 . b4tu2y2jyw [ 9 ] ;
iowqpk3eub2 . cb3a3cmvqi [ 1 ] = iowqpk3eub2 . oyf1kknxky [ 1 ] * iowqpk3eub2
. lszyzcrgde [ 1 ] ; iowqpk3eub2 . giviabarth [ 1 ] = iowqpk3eub2 .
b4tu2y2jyw [ 10 ] ; iowqpk3eub2 . cb3a3cmvqi [ 2 ] = iowqpk3eub2 . oyf1kknxky
[ 2 ] * iowqpk3eub2 . lszyzcrgde [ 2 ] ; iowqpk3eub2 . giviabarth [ 2 ] =
iowqpk3eub2 . b4tu2y2jyw [ 11 ] ; iowqpk3eub2 . araqn4x4bn = ( ( (
iowqpk3eub2 . l5capshjmg + iowqpk3eub2 . aedljs0e4u [ 0 ] ) - iowqpk3eub2 .
cb3a3cmvqi [ 0 ] ) + iowqpk3eub2 . giviabarth [ 0 ] ) + kjmvupbl2i .
FExtConstant_Value [ 0 ] ; iowqpk3eub2 . do2ad42p4b = ( ( iowqpk3eub2 .
cb3a3cmvqi [ 2 ] - iowqpk3eub2 . aedljs0e4u [ 2 ] ) + iowqpk3eub2 .
giviabarth [ 2 ] ) + kjmvupbl2i . FExtConstant_Value [ 2 ] ; iowqpk3eub2 .
irik5hamck [ 0 ] = iowqpk3eub2 . araqn4x4bn /
rtP__PlntVehMass2f2PassVeh_sldd_ ; iowqpk3eub2 . irik5hamck [ 1 ] =
iowqpk3eub2 . do2ad42p4b / rtP__PlntVehMass2f2PassVeh_sldd_ ; iowqpk3eub2 .
f35pdcffvo [ 0 ] = iowqpk3eub2 . ipitix1sph [ 0 ] + iowqpk3eub2 . irik5hamck
[ 0 ] ; iowqpk3eub2 . jzqwpbqwdi [ 0 ] = 0.0 ; iowqpk3eub2 . jzqwpbqwdi [ 0 ]
+= kjmvupbl2i . MatrixGain_Gain [ 0 ] * iowqpk3eub2 . pcflqp2d2t [ 0 ] ;
iowqpk3eub2 . jzqwpbqwdi [ 0 ] += iowqpk3eub2 . pcflqp2d2t [ 1 ] * kjmvupbl2i
. MatrixGain_Gain [ 2 ] ; iowqpk3eub2 . cwrvyfrsdw [ 0 ] = iowqpk3eub2 .
jzqwpbqwdi [ 0 ] * iowqpk3eub2 . fyfoh3jqvh ; iowqpk3eub2 . huhttmored [ 0 ]
= iowqpk3eub2 . f35pdcffvo [ 0 ] + iowqpk3eub2 . cwrvyfrsdw [ 0 ] ;
iowqpk3eub2 . f35pdcffvo [ 1 ] = iowqpk3eub2 . ipitix1sph [ 1 ] + iowqpk3eub2
. irik5hamck [ 1 ] ; iowqpk3eub2 . jzqwpbqwdi [ 1 ] = 0.0 ; iowqpk3eub2 .
jzqwpbqwdi [ 1 ] += iowqpk3eub2 . pcflqp2d2t [ 0 ] * kjmvupbl2i .
MatrixGain_Gain [ 1 ] ; iowqpk3eub2 . jzqwpbqwdi [ 1 ] += iowqpk3eub2 .
pcflqp2d2t [ 1 ] * kjmvupbl2i . MatrixGain_Gain [ 3 ] ; iowqpk3eub2 .
cwrvyfrsdw [ 1 ] = iowqpk3eub2 . jzqwpbqwdi [ 1 ] * iowqpk3eub2 . fyfoh3jqvh
; iowqpk3eub2 . huhttmored [ 1 ] = iowqpk3eub2 . f35pdcffvo [ 1 ] +
iowqpk3eub2 . cwrvyfrsdw [ 1 ] ; iowqpk3eub2 . jsgjt0fuoh [ 0 ] = iowqpk3eub2
. huhttmored [ 0 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { iowqpk3eub2 .
jsgjt0fuoh [ 1 ] = kjmvupbl2i . Constant5_Value ; } iowqpk3eub2 . jsgjt0fuoh
[ 2 ] = iowqpk3eub2 . huhttmored [ 1 ] ; iowqpk3eub2 . hdxvrl0b43 = ( (
fl3dumv41q - bsbjaaxu1h ) + iowqpk3eub2 . jsgjt0fuoh [ 0 ] ) *
0.10197162129779282 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if (
cz5yqt3r3xb . ibizqnzh0w . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( cz5yqt3r3xb . ibizqnzh0w . AQHandles , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & iowqpk3eub2 . hdxvrl0b43 + 0 ) ; } } } iowqpk3eub2 .
af01y0tyx5 = ( ( axn1d2xjab_idx_1 - pybjjcy2x4 ) + iowqpk3eub2 . jsgjt0fuoh [
1 ] ) * 0.10197162129779282 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if (
cz5yqt3r3xb . aj1d134nmk . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( cz5yqt3r3xb . aj1d134nmk . AQHandles , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & iowqpk3eub2 . af01y0tyx5 + 0 ) ; } } } iowqpk3eub2 .
gfzt5manw2 = ( ( heevn31eio - bvq1hwe3s4 ) + iowqpk3eub2 . jsgjt0fuoh [ 2 ] )
* 0.10197162129779282 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if (
cz5yqt3r3xb . frybx0mj1e . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( cz5yqt3r3xb . frybx0mj1e . AQHandles , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & iowqpk3eub2 . gfzt5manw2 + 0 ) ; } } { if ( cz5yqt3r3xb .
kx02fuyglo . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
cz5yqt3r3xb . kx02fuyglo . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * )
& iowqpk3eub2 . dqqdmdpyoe + 0 ) ; } } { if ( cz5yqt3r3xb . ivzabugs2u .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb .
ivzabugs2u . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & iowqpk3eub2
. cgnfgn223x + 0 ) ; } } } iowqpk3eub2 . lxjoffd23j = chmgkez0tpf .
iysy5igbzt ; iowqpk3eub2 . dttp424sgc = 2.236936292054402 * iowqpk3eub2 .
ieofldeqy2 [ 0 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( cz5yqt3r3xb .
johw44ce4i == 0 ) { cz5yqt3r3xb . ho5bua3cli [ 0 ] = iowqpk3eub2 . jfa1nbks1u
; cz5yqt3r3xb . ho5bua3cli [ 1 ] = iowqpk3eub2 . dttp424sgc ; } if (
cz5yqt3r3xb . o13svxvssq == 0 ) { cz5yqt3r3xb . oqnelch0g4 = iowqpk3eub2 .
pvdiosiz3s ; } } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { cz5yqt3r3xb .
johw44ce4i = 1 ; iowqpk3eub2 . liyhqocsj3 [ 0 ] = cz5yqt3r3xb . ho5bua3cli [
0 ] ; iowqpk3eub2 . liyhqocsj3 [ 1 ] = cz5yqt3r3xb . ho5bua3cli [ 1 ] ;
cz5yqt3r3xb . johw44ce4i = 0 ; cz5yqt3r3xb . o13svxvssq = 1 ; iowqpk3eub2 .
ivcelveswb = cz5yqt3r3xb . oqnelch0g4 ; cz5yqt3r3xb . o13svxvssq = 0 ; }
iowqpk3eub2 . cyvi2yk4zm = 9.5492965855137211 * iowqpk3eub2 . dqqdmdpyoe ; if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( cz5yqt3r3xb . hnc4qrwkcy == 0 ) {
cz5yqt3r3xb . lgs1ws31ib = iowqpk3eub2 . cyvi2yk4zm ; } if ( cz5yqt3r3xb .
nremqoghxn == 0 ) { cz5yqt3r3xb . hgdclbpf45 = kjmvupbl2i . EngTrq_Value ; }
} if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { cz5yqt3r3xb . hnc4qrwkcy = 1 ;
iowqpk3eub2 . pupxf42qyi = cz5yqt3r3xb . lgs1ws31ib ; cz5yqt3r3xb .
hnc4qrwkcy = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( cz5yqt3r3xb .
azwx5q01st == 0 ) ) { cz5yqt3r3xb . dfvfksmo3u = iowqpk3eub2 . nzrgmpq2kc ; }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { cz5yqt3r3xb . nremqoghxn = 1 ;
iowqpk3eub2 . c02ood1bjt = cz5yqt3r3xb . hgdclbpf45 ; cz5yqt3r3xb .
nremqoghxn = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( cz5yqt3r3xb .
b0kxfxynn3 == 0 ) ) { cz5yqt3r3xb . j0t5dz02te = iowqpk3eub2 . l0jn2lsago ; }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { cz5yqt3r3xb . azwx5q01st = 1 ;
iowqpk3eub2 . p0b3m4xtnw = cz5yqt3r3xb . dfvfksmo3u ; cz5yqt3r3xb .
azwx5q01st = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( cz5yqt3r3xb .
j0engehfzs == 0 ) ) { cz5yqt3r3xb . d0jgs1xeud = iowqpk3eub2 . cgnfgn223x ; }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { cz5yqt3r3xb . b0kxfxynn3 = 1 ;
iowqpk3eub2 . mytvvfcg1y = cz5yqt3r3xb . j0t5dz02te ; cz5yqt3r3xb .
b0kxfxynn3 = 0 ; cz5yqt3r3xb . j0engehfzs = 1 ; iowqpk3eub2 . k4zukswayf =
cz5yqt3r3xb . d0jgs1xeud ; cz5yqt3r3xb . j0engehfzs = 0 ; } iowqpk3eub2 .
khcqvoneta = chmgkez0tpf . bhmvyo1hjl ; iowqpk3eub2 . ffjzw3xpup =
chmgkez0tpf . iarnkoswlx ; iowqpk3eub2 . pjeugxnijx = kjmvupbl2i .
m3toUSGal_Gain * iowqpk3eub2 . ffjzw3xpup ; if ( ssIsModeUpdateTimeStep ( rtS
) ) { cz5yqt3r3xb . kblv4axo3c = iowqpk3eub2 . pjeugxnijx >= kjmvupbl2i .
Saturation1_UpperSat ? 1 : iowqpk3eub2 . pjeugxnijx > kjmvupbl2i .
Saturation1_LowerSat ? 0 : - 1 ; } iowqpk3eub2 . j5ydyic0d5 = kjmvupbl2i .
mtomile_Gain * iowqpk3eub2 . khcqvoneta / ( cz5yqt3r3xb . kblv4axo3c == 1 ?
kjmvupbl2i . Saturation1_UpperSat : cz5yqt3r3xb . kblv4axo3c == - 1 ?
kjmvupbl2i . Saturation1_LowerSat : iowqpk3eub2 . pjeugxnijx ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( cz5yqt3r3xb . mm5oiqqh5r == 0 ) ) {
cz5yqt3r3xb . i5wargkafk = iowqpk3eub2 . j5ydyic0d5 ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { cz5yqt3r3xb . mm5oiqqh5r = 1 ; iowqpk3eub2 . kvtxbs1osx =
cz5yqt3r3xb . i5wargkafk ; cz5yqt3r3xb . mm5oiqqh5r = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( cz5yqt3r3xb . jzwhcyoyki . AQHandles
&& ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb . jzwhcyoyki .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & iowqpk3eub2 . lxjoffd23j
+ 0 ) ; } } } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { { if ( cz5yqt3r3xb .
bqlccsba5g . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
cz5yqt3r3xb . bqlccsba5g . AQHandles , ssGetTaskTime ( rtS , 3 ) , ( char * )
& iowqpk3eub2 . kvtxbs1osx + 0 ) ; } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) )
{ { if ( cz5yqt3r3xb . i01ezsocmb . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( cz5yqt3r3xb . i01ezsocmb . AQHandles , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & iowqpk3eub2 . dttp424sgc + 0 ) ; } } } iowqpk3eub2 .
nk5i1tvfs4 = chmgkez0tpf . lywux4fr45 ; iowqpk3eub2 . hkfoqcrcaa = kjmvupbl2i
. mtomi_Gain * iowqpk3eub2 . nk5i1tvfs4 ; iowqpk3eub2 . fygmwizxbe =
kjmvupbl2i . mtokm_Gain * iowqpk3eub2 . nk5i1tvfs4 ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { cz5yqt3r3xb . m0ix3twyqi = iowqpk3eub2 .
hkfoqcrcaa >= kjmvupbl2i . Saturation_UpperSat_petchupvyj ? 1 : iowqpk3eub2 .
hkfoqcrcaa > kjmvupbl2i . Saturation_LowerSat_deqaxwlb4p ? 0 : - 1 ; }
iowqpk3eub2 . if3ap21cin = 0.44704000000000005 * iowqpk3eub2 . jfa1nbks1u ;
iowqpk3eub2 . meiux3s5v1 = kjmvupbl2i . Gain_Gain_aepvwbsvgj * iowqpk3eub2 .
dttp424sgc ; iowqpk3eub2 . d4vvdrgtgs = iowqpk3eub2 . l0jn2lsago *
iowqpk3eub2 . p1wsp4msvl ; iowqpk3eub2 . bbwodlczuz = iowqpk3eub2 .
d4vvdrgtgs / kjmvupbl2i . wperkw_Value ; iowqpk3eub2 . cfykfdt0uw =
iowqpk3eub2 . bbwodlczuz / kjmvupbl2i . USEPAkwhUSgalequivalent_Value ;
iowqpk3eub2 . gk5c3nru3t = iowqpk3eub2 . cfykfdt0uw / kjmvupbl2i .
sperh_Value ; iowqpk3eub2 . gtc1bz3bpt = kjmvupbl2i . m3pergal_Gain *
iowqpk3eub2 . gk5c3nru3t ; iowqpk3eub2 . ll5kvzbeqe = iowqpk3eub2 .
e3bitaa0oq + iowqpk3eub2 . gtc1bz3bpt ; inakimlcb3 = 0.44704000000000005 *
iowqpk3eub2 . dttp424sgc ; iowqpk3eub2 . dxggtyvppm = inakimlcb3 * inakimlcb3
; iowqpk3eub2 . iqd4x5zmdq = kjmvupbl2i . mto100Km_Gain * iowqpk3eub2 .
khcqvoneta ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { cz5yqt3r3xb . kqqvkns214
= iowqpk3eub2 . fygmwizxbe >= kjmvupbl2i . Saturation1_UpperSat_jybwri54h2 ?
1 : iowqpk3eub2 . fygmwizxbe > kjmvupbl2i . Saturation1_LowerSat_indvuhds5q ?
0 : - 1 ; cz5yqt3r3xb . hg1heoe0ab = iowqpk3eub2 . iqd4x5zmdq >= kjmvupbl2i .
Saturation_UpperSat_ffmhckns0u ? 1 : iowqpk3eub2 . iqd4x5zmdq > kjmvupbl2i .
Saturation_LowerSat_git52jcjbr ? 0 : - 1 ; } if ( ssIsMajorTimeStep ( rtS ) )
{ if ( cz5yqt3r3xb . e2wr3vcmsf != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; cz5yqt3r3xb .
e2wr3vcmsf = 0 ; } iowqpk3eub2 . fslb3e0kt4 = muDoubleScalarSqrt (
iowqpk3eub2 . dxggtyvppm ) ; } else { if ( iowqpk3eub2 . dxggtyvppm < 0.0 ) {
iowqpk3eub2 . fslb3e0kt4 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
iowqpk3eub2 . dxggtyvppm ) ) ; } else { iowqpk3eub2 . fslb3e0kt4 =
muDoubleScalarSqrt ( iowqpk3eub2 . dxggtyvppm ) ; } if ( iowqpk3eub2 .
dxggtyvppm < 0.0 ) { cz5yqt3r3xb . e2wr3vcmsf = 1 ; } } iowqpk3eub2 .
fyv5hziyzu = 57.295779513082323 * iowqpk3eub2 . it0brydt4y [ 2 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( cz5yqt3r3xb . pumuolxchk == 0 ) ) {
cz5yqt3r3xb . noizxcaj0u = iowqpk3eub2 . l05au4wqsc ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { cz5yqt3r3xb . pumuolxchk = 1 ; mabslh5ftc = cz5yqt3r3xb .
noizxcaj0u ; cz5yqt3r3xb . pumuolxchk = 0 ; OpenLoopBraking ( & mabslh5ftc ,
& iowqpk3eub2 . hvofgrdmb4 [ 0 ] ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) &&
( cz5yqt3r3xb . cfbyafp2yp == 0 ) ) { cz5yqt3r3xb . ahz4qvibsf = iowqpk3eub2
. ivqnpc0uok ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { cz5yqt3r3xb .
cfbyafp2yp = 1 ; inakimlcb3 = cz5yqt3r3xb . ahz4qvibsf ; cz5yqt3r3xb .
cfbyafp2yp = 0 ; DriverPassThrough ( & inakimlcb3 , & mygikvcog4 ) ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( cz5yqt3r3xb . nu1w3dp3or == 0 ) {
cz5yqt3r3xb . gelfja001m = iowqpk3eub2 . h2mcwsniul ; } if ( cz5yqt3r3xb .
k0uf3b30j1 == 0 ) { cz5yqt3r3xb . im2dnqr2y0 = iowqpk3eub2 . ieofldeqy2 [ 0 ]
; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { cz5yqt3r3xb . nu1w3dp3or = 1 ;
iowqpk3eub2 . ckogufqgce = cz5yqt3r3xb . gelfja001m ; cz5yqt3r3xb .
nu1w3dp3or = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( cz5yqt3r3xb .
fx2rxnzutk == 0 ) ) { cz5yqt3r3xb . ivmw2mj2cj = iowqpk3eub2 . cgnfgn223x ; }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { cz5yqt3r3xb . k0uf3b30j1 = 1 ;
iowqpk3eub2 . orjxb10cau = cz5yqt3r3xb . im2dnqr2y0 ; cz5yqt3r3xb .
k0uf3b30j1 = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( cz5yqt3r3xb .
pgsfdyvzg3 == 0 ) ) { cz5yqt3r3xb . e2o3ismpif = iowqpk3eub2 . dqqdmdpyoe ; }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { cz5yqt3r3xb . fx2rxnzutk = 1 ;
iowqpk3eub2 . m2yfudsyf0 = cz5yqt3r3xb . ivmw2mj2cj ; cz5yqt3r3xb .
fx2rxnzutk = 0 ; cz5yqt3r3xb . pgsfdyvzg3 = 1 ; iowqpk3eub2 . bqypj3eyiq =
cz5yqt3r3xb . e2o3ismpif ; cz5yqt3r3xb . pgsfdyvzg3 = 0 ;
EvPowertrainController ( & iowqpk3eub2 . ckogufqgce , & iowqpk3eub2 .
hvofgrdmb4 [ 0 ] , & iowqpk3eub2 . orjxb10cau , & iowqpk3eub2 . m2yfudsyf0 ,
& iowqpk3eub2 . bqypj3eyiq , & iowqpk3eub2 . gwnl2155xk , & iowqpk3eub2 .
kb23u2basn , & iowqpk3eub2 . biqv0f0tfc [ 0 ] , & iowqpk3eub2 . icp2bbe015 ,
& iowqpk3eub2 . msjuqz2cog , & iowqpk3eub2 . dnjk2135yv , & iowqpk3eub2 .
crfjrsqdom , & ( cz5yqt3r3xb . hukxwubwy0 . rtb ) ) ; } inakimlcb3 =
muDoubleScalarAbs ( iowqpk3eub2 . jpcr1f245w ) ; dlepxyenjj = ( inakimlcb3 <
0.001 ) ; i = 0 ; if ( dlepxyenjj ) { i = 1 ; } if ( i - 1 >= 0 ) {
fl3dumv41q = inakimlcb3 / 0.001 ; g_data = 0.002 / ( 3.0 - fl3dumv41q *
fl3dumv41q ) ; } if ( dlepxyenjj ) { inakimlcb3 = g_data ; } dlepxyenjj = (
iowqpk3eub2 . jpcr1f245w < 0.0 ) ; i = - 1 ; if ( dlepxyenjj ) { i = 0 ; } if
( i >= 0 ) { g_data = - inakimlcb3 ; } fl3dumv41q = inakimlcb3 ; if (
dlepxyenjj ) { fl3dumv41q = g_data ; } if ( inakimlcb3 > 5.0 ) { inakimlcb3 =
muDoubleScalarMax ( muDoubleScalarMin ( rtP__DriverTimeConst2f2Driver_sldd_ ,
rtP__DriverPreviewDist2f2Driver_sldd_ / inakimlcb3 ) , 0.001 ) ; } else {
inakimlcb3 = rtP__DriverTimeConst2f2Driver_sldd_ ; } lhbkn3qgoo [ 0 ] = 0.0 ;
lhbkn3qgoo [ 2 ] = 1.0 ; lhbkn3qgoo [ 1 ] = - ( (
rtP__DriverRollRes2f2Driver_sldd_ / fl3dumv41q +
rtP__DriverAeroRes2f2Driver_sldd_ * iowqpk3eub2 . jpcr1f245w ) *
muDoubleScalarTanh ( iowqpk3eub2 . jpcr1f245w ) +
rtP__DriverDrivelineRes2f2Driver_sldd_ ) / rtP__PlntVehMass2f2PassVeh_sldd_ ;
lhbkn3qgoo [ 3 ] = 0.0 ; axn1d2xjab_idx_1 =
rtP__DriverTractiveForce2f2Driver_sldd_ / rtP__PlntVehMass2f2PassVeh_sldd_ ;
sigmaA [ 0 ] = 0.0 ; bafqqszzsf = 0.0 ; sigmaA [ 1 ] = 0.0 ; heevn31eio = 0.0
; sigmaA [ 2 ] = 0.0 ; bsbjaaxu1h = 0.0 ; sigmaA [ 3 ] = 0.0 ; pybjjcy2x4 =
0.0 ; for ( i = 0 ; i < 15 ; i ++ ) { fl3dumv41q = muDoubleScalarPower (
inakimlcb3 , ( real_T ) i + 1.0 ) ; oov4ikdzbn ( lhbkn3qgoo , ( real_T ) i +
1.0 , du5r1qer1m ) ; bvq1hwe3s4 = e [ i + 1 ] ; sigmaA [ 0 ] += du5r1qer1m [
0 ] * fl3dumv41q / bvq1hwe3s4 ; sigmaA [ 1 ] += du5r1qer1m [ 1 ] * fl3dumv41q
/ bvq1hwe3s4 ; sigmaA [ 2 ] += du5r1qer1m [ 2 ] * fl3dumv41q / bvq1hwe3s4 ;
sigmaA [ 3 ] += du5r1qer1m [ 3 ] * fl3dumv41q / bvq1hwe3s4 ; fl3dumv41q =
muDoubleScalarPower ( inakimlcb3 , ( real_T ) i + 1.0 ) ; oov4ikdzbn (
lhbkn3qgoo , ( real_T ) i + 1.0 , du5r1qer1m ) ; bvq1hwe3s4 = e [ i ] ;
bafqqszzsf += du5r1qer1m [ 0 ] * fl3dumv41q / bvq1hwe3s4 ; heevn31eio +=
du5r1qer1m [ 1 ] * fl3dumv41q / bvq1hwe3s4 ; bsbjaaxu1h += du5r1qer1m [ 2 ] *
fl3dumv41q / bvq1hwe3s4 ; pybjjcy2x4 += du5r1qer1m [ 3 ] * fl3dumv41q /
bvq1hwe3s4 ; } inakimlcb3 = ( ( sigmaA [ 0 ] + 1.0 ) * inakimlcb3 +
inakimlcb3 * sigmaA [ 1 ] ) * 0.0 + ( ( sigmaA [ 3 ] + 1.0 ) * inakimlcb3 +
inakimlcb3 * sigmaA [ 2 ] ) * axn1d2xjab_idx_1 ; du5r1qer1m [ 0 ] = 0.0 ;
du5r1qer1m [ 1 ] = lhbkn3qgoo [ 1 ] * 0.001 ; du5r1qer1m [ 2 ] = 0.001 ;
du5r1qer1m [ 3 ] = 0.0 ; f5zhbt2mc4 ( du5r1qer1m , sigmaA ) ; du5r1qer1m [ 0
] = 0.0 ; du5r1qer1m [ 1 ] = lhbkn3qgoo [ 1 ] * 0.0 ; du5r1qer1m [ 2 ] = 0.0
; du5r1qer1m [ 3 ] = 0.0 ; f5zhbt2mc4 ( du5r1qer1m , b_a ) ; du5r1qer1m [ 0 ]
= 0.0 ; du5r1qer1m [ 1 ] = lhbkn3qgoo [ 1 ] * 0.001 ; du5r1qer1m [ 2 ] =
0.001 ; du5r1qer1m [ 3 ] = 0.0 ; f5zhbt2mc4 ( du5r1qer1m , lhbkn3qgoo ) ;
iowqpk3eub2 . o2cjlwehyr = ( ( ( b_a [ 0 ] * 0.0 + b_a [ 2 ] *
axn1d2xjab_idx_1 ) + ( lhbkn3qgoo [ 0 ] * 0.0 + lhbkn3qgoo [ 2 ] *
axn1d2xjab_idx_1 ) ) / 2.0 * 0.001 * iowqpk3eub2 . m3s2vgesq4 + ( sigmaA [ 0
] * iowqpk3eub2 . jpcr1f245w + sigmaA [ 2 ] * 0.0 ) ) * ( ( bafqqszzsf + 1.0
) + heevn31eio ) + ( ( ( b_a [ 1 ] * 0.0 + b_a [ 3 ] * axn1d2xjab_idx_1 ) + (
lhbkn3qgoo [ 1 ] * 0.0 + lhbkn3qgoo [ 3 ] * axn1d2xjab_idx_1 ) ) / 2.0 *
0.001 * iowqpk3eub2 . m3s2vgesq4 + ( sigmaA [ 1 ] * iowqpk3eub2 . jpcr1f245w
+ sigmaA [ 3 ] * 0.0 ) ) * ( ( pybjjcy2x4 + 1.0 ) + bsbjaaxu1h ) ;
iowqpk3eub2 . or4x0ngped = iowqpk3eub2 . m3s2vgesq4 * inakimlcb3 ;
iowqpk3eub2 . gfa1pnn0i5 = iowqpk3eub2 . o2cjlwehyr + iowqpk3eub2 .
or4x0ngped ; iowqpk3eub2 . j4h3u5o2s0 = iowqpk3eub2 . o4djdimsdm -
iowqpk3eub2 . gfa1pnn0i5 ; iowqpk3eub2 . hvrj3ku4rl = iowqpk3eub2 .
j4h3u5o2s0 / inakimlcb3 ; iowqpk3eub2 . niktayqu0g = iowqpk3eub2 . hvrj3ku4rl
+ iowqpk3eub2 . atfdsr0huc ; iowqpk3eub2 . n1qbwalijw = iowqpk3eub2 .
niktayqu0g - iowqpk3eub2 . atfdsr0huc ; iowqpk3eub2 . jlncf1nhxu = 1.0 /
rtP__DriverTimeConst2f2Driver_sldd_ * 3.1415926535897931 * 2.0 * iowqpk3eub2
. n1qbwalijw ; iowqpk3eub2 . dtch5f4az1 = iowqpk3eub2 . o4djdimsdm -
iowqpk3eub2 . jpcr1f245w ; iowqpk3eub2 . oqfbznbud3 = iowqpk3eub2 .
dtch5f4az1 * iowqpk3eub2 . dtch5f4az1 ; if ( ssIsSampleHit ( rtS , 2 , 0 ) )
{ iowqpk3eub2 . b25h3lrxlo [ 0 ] = cz5yqt3r3xb . ovftuesk53 [ 0 ] ;
iowqpk3eub2 . b25h3lrxlo [ 1 ] = cz5yqt3r3xb . ovftuesk53 [ 1 ] ; } if (
iowqpk3eub2 . dtch5f4az1 > iowqpk3eub2 . b25h3lrxlo [ 0 ] ) { iowqpk3eub2 .
eycgm5czdn [ 0 ] = iowqpk3eub2 . dtch5f4az1 ; } else { iowqpk3eub2 .
eycgm5czdn [ 0 ] = iowqpk3eub2 . b25h3lrxlo [ 0 ] ; } if ( iowqpk3eub2 .
dtch5f4az1 < iowqpk3eub2 . b25h3lrxlo [ 1 ] ) { iowqpk3eub2 . eycgm5czdn [ 1
] = iowqpk3eub2 . dtch5f4az1 ; } else { iowqpk3eub2 . eycgm5czdn [ 1 ] =
iowqpk3eub2 . b25h3lrxlo [ 1 ] ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
iowqpk3eub2 . fjnu3gvsoe = rtP__EnvAirTemp2f2Environment_sldd_ ; } if (
ssIsSampleHit ( rtS , 4 , 0 ) ) { iowqpk3eub2 . hiqbgqctfu = ssGetTaskTime (
rtS , 4 ) ; } iowqpk3eub2 . bwgdzgdu1v = hbjgnzk0ke - iowqpk3eub2 .
hiqbgqctfu ; iowqpk3eub2 . fhd2qe1xn4 [ 0 ] = cz5yqt3r3xb . lzovmgc1ye [ 0 ]
; iowqpk3eub2 . fhd2qe1xn4 [ 1 ] = cz5yqt3r3xb . lzovmgc1ye [ 1 ] ;
iowqpk3eub2 . fhd2qe1xn4 [ 2 ] = cz5yqt3r3xb . lzovmgc1ye [ 2 ] ; iowqpk3eub2
. fhd2qe1xn4 [ 3 ] = cz5yqt3r3xb . lzovmgc1ye [ 3 ] ; if ( cz5yqt3r3xb .
hqv0oirn0q != ( rtInf ) ) { hbjgnzk0ke = ssGetT ( rtS ) - cz5yqt3r3xb .
hqv0oirn0q ; iowqpk3eub2 . fhd2qe1xn4 [ 0 ] += cz5yqt3r3xb . ggdayeevtv [ 0 ]
* hbjgnzk0ke ; iowqpk3eub2 . fhd2qe1xn4 [ 1 ] += cz5yqt3r3xb . ggdayeevtv [ 1
] * hbjgnzk0ke ; iowqpk3eub2 . fhd2qe1xn4 [ 2 ] += cz5yqt3r3xb . ggdayeevtv [
2 ] * hbjgnzk0ke ; iowqpk3eub2 . fhd2qe1xn4 [ 3 ] += cz5yqt3r3xb . ggdayeevtv
[ 3 ] * hbjgnzk0ke ; } iowqpk3eub2 . hdpouphvxx = cz5yqt3r3xb . dci24ewo3n ;
if ( cz5yqt3r3xb . dfwjuauqhh != ( rtInf ) ) { iowqpk3eub2 . hdpouphvxx += (
ssGetT ( rtS ) - cz5yqt3r3xb . dfwjuauqhh ) * cz5yqt3r3xb . n20oxvozfr ; } if
( iowqpk3eub2 . fhd2qe1xn4 [ 0 ] > kjmvupbl2i . DeadZone_End_lo1jymlqtv ) {
iowqpk3eub2 . odlevesch3 [ 0 ] = iowqpk3eub2 . fhd2qe1xn4 [ 0 ] - kjmvupbl2i
. DeadZone_End_lo1jymlqtv ; } else if ( iowqpk3eub2 . fhd2qe1xn4 [ 0 ] >=
kjmvupbl2i . DeadZone_Start_md5ahj13hx ) { iowqpk3eub2 . odlevesch3 [ 0 ] =
0.0 ; } else { iowqpk3eub2 . odlevesch3 [ 0 ] = iowqpk3eub2 . fhd2qe1xn4 [ 0
] - kjmvupbl2i . DeadZone_Start_md5ahj13hx ; } iowqpk3eub2 . oq1kbno45o [ 0 ]
= iowqpk3eub2 . odlevesch3 [ 0 ] - iowqpk3eub2 . d4rqnnq3qc [ 0 ] ;
iowqpk3eub2 . pjkdriloq3 [ 0 ] = iowqpk3eub2 . oq1kbno45o [ 0 ] *
rtP__PlntBrkWc2f2PassVeh_sldd_ ; if ( iowqpk3eub2 . fhd2qe1xn4 [ 1 ] >
kjmvupbl2i . DeadZone_End_lo1jymlqtv ) { iowqpk3eub2 . odlevesch3 [ 1 ] =
iowqpk3eub2 . fhd2qe1xn4 [ 1 ] - kjmvupbl2i . DeadZone_End_lo1jymlqtv ; }
else if ( iowqpk3eub2 . fhd2qe1xn4 [ 1 ] >= kjmvupbl2i .
DeadZone_Start_md5ahj13hx ) { iowqpk3eub2 . odlevesch3 [ 1 ] = 0.0 ; } else {
iowqpk3eub2 . odlevesch3 [ 1 ] = iowqpk3eub2 . fhd2qe1xn4 [ 1 ] - kjmvupbl2i
. DeadZone_Start_md5ahj13hx ; } iowqpk3eub2 . oq1kbno45o [ 1 ] = iowqpk3eub2
. odlevesch3 [ 1 ] - iowqpk3eub2 . d4rqnnq3qc [ 1 ] ; iowqpk3eub2 .
pjkdriloq3 [ 1 ] = iowqpk3eub2 . oq1kbno45o [ 1 ] *
rtP__PlntBrkWc2f2PassVeh_sldd_ ; if ( iowqpk3eub2 . fhd2qe1xn4 [ 2 ] >
kjmvupbl2i . DeadZone_End_lo1jymlqtv ) { iowqpk3eub2 . odlevesch3 [ 2 ] =
iowqpk3eub2 . fhd2qe1xn4 [ 2 ] - kjmvupbl2i . DeadZone_End_lo1jymlqtv ; }
else if ( iowqpk3eub2 . fhd2qe1xn4 [ 2 ] >= kjmvupbl2i .
DeadZone_Start_md5ahj13hx ) { iowqpk3eub2 . odlevesch3 [ 2 ] = 0.0 ; } else {
iowqpk3eub2 . odlevesch3 [ 2 ] = iowqpk3eub2 . fhd2qe1xn4 [ 2 ] - kjmvupbl2i
. DeadZone_Start_md5ahj13hx ; } iowqpk3eub2 . oq1kbno45o [ 2 ] = iowqpk3eub2
. odlevesch3 [ 2 ] - iowqpk3eub2 . d4rqnnq3qc [ 2 ] ; iowqpk3eub2 .
pjkdriloq3 [ 2 ] = iowqpk3eub2 . oq1kbno45o [ 2 ] *
rtP__PlntBrkWc2f2PassVeh_sldd_ ; if ( iowqpk3eub2 . fhd2qe1xn4 [ 3 ] >
kjmvupbl2i . DeadZone_End_lo1jymlqtv ) { iowqpk3eub2 . odlevesch3 [ 3 ] =
iowqpk3eub2 . fhd2qe1xn4 [ 3 ] - kjmvupbl2i . DeadZone_End_lo1jymlqtv ; }
else if ( iowqpk3eub2 . fhd2qe1xn4 [ 3 ] >= kjmvupbl2i .
DeadZone_Start_md5ahj13hx ) { iowqpk3eub2 . odlevesch3 [ 3 ] = 0.0 ; } else {
iowqpk3eub2 . odlevesch3 [ 3 ] = iowqpk3eub2 . fhd2qe1xn4 [ 3 ] - kjmvupbl2i
. DeadZone_Start_md5ahj13hx ; } iowqpk3eub2 . oq1kbno45o [ 3 ] = iowqpk3eub2
. odlevesch3 [ 3 ] - iowqpk3eub2 . d4rqnnq3qc [ 3 ] ; iowqpk3eub2 .
pjkdriloq3 [ 3 ] = iowqpk3eub2 . oq1kbno45o [ 3 ] *
rtP__PlntBrkWc2f2PassVeh_sldd_ ; iowqpk3eub2 . lvd3mg41ca =
rtP__PlntVehDstCGFrntAxl2f2PassVeh_sldd_ * iowqpk3eub2 . kn03lhlboz [ 2 ] ;
iowqpk3eub2 . i44juxrctd = rtP__PlntVehDstCGRearAxl2f2PassVeh_sldd_ *
iowqpk3eub2 . nktxf2g2id [ 2 ] ; iowqpk3eub2 . fhuiylguyp [ 0 ] = iowqpk3eub2
. gi0w2rdunb ; iowqpk3eub2 . fhuiylguyp [ 1 ] = iowqpk3eub2 . oozbsuyo0w ;
iowqpk3eub2 . fv3tc4cscj = iowqpk3eub2 . fhuiylguyp [ 0 ] + iowqpk3eub2 .
fhuiylguyp [ 1 ] ; iowqpk3eub2 . irlowhecsn = ( iowqpk3eub2 . kn03lhlboz [ 0
] + iowqpk3eub2 . nktxf2g2id [ 0 ] ) + iowqpk3eub2 . fv3tc4cscj ; iowqpk3eub2
. flqzfbsj2v = rtP__PlntVehCGHgtAxl2f2PassVeh_sldd_ * iowqpk3eub2 .
irlowhecsn ; inakimlcb3 = rtP__PlntVehDstCGFrntAxl2f2PassVeh_sldd_ +
rtP__PlntVehDstCGRearAxl2f2PassVeh_sldd_ ; iowqpk3eub2 . nauemcaz3d =
kjmvupbl2i . Constant2_Value_pdymtmke3u * iowqpk3eub2 . fyfoh3jqvh ;
iowqpk3eub2 . otzseahofd [ 0 ] = kjmvupbl2i . Constant_Value_fqa2j2pnak ;
iowqpk3eub2 . otzseahofd [ 1 ] = iowqpk3eub2 . excv5bvsnq ; iowqpk3eub2 .
otzseahofd [ 2 ] = kjmvupbl2i . Constant_Value_fqa2j2pnak ; iowqpk3eub2 .
irrzi1045j [ 0 ] = iowqpk3eub2 . lszyzcrgde [ 3 ] * inakimlcb3 ;
muDoubleScalarSinCos ( iowqpk3eub2 . otzseahofd [ 0 ] , & bgnvcvf3bg_idx_0 ,
& lq2sjwrvwv_idx_0 ) ; iowqpk3eub2 . irrzi1045j [ 1 ] = iowqpk3eub2 .
lszyzcrgde [ 4 ] * inakimlcb3 ; muDoubleScalarSinCos ( iowqpk3eub2 .
otzseahofd [ 1 ] , & bgnvcvf3bg_idx_1 , & lq2sjwrvwv_idx_1 ) ; iowqpk3eub2 .
irrzi1045j [ 2 ] = iowqpk3eub2 . lszyzcrgde [ 5 ] * inakimlcb3 ;
muDoubleScalarSinCos ( iowqpk3eub2 . otzseahofd [ 2 ] , & bgnvcvf3bg_idx_2 ,
& lq2sjwrvwv_idx_2 ) ; iowqpk3eub2 . f34sqchkix = ( ( ( iowqpk3eub2 .
lvd3mg41ca - iowqpk3eub2 . i44juxrctd ) + iowqpk3eub2 . flqzfbsj2v ) +
iowqpk3eub2 . irrzi1045j [ 1 ] ) + kjmvupbl2i . MExtConstant_Value [ 1 ] ;
iowqpk3eub2 . lieehcoatc = iowqpk3eub2 . f34sqchkix - iowqpk3eub2 .
nauemcaz3d ; iowqpk3eub2 . mnpes3j1iq = iowqpk3eub2 . lieehcoatc /
rtP__PlntVehPitchMomentInertia2f2PassVeh_sldd_ ; iowqpk3eub2 . d5pwtznta0 [ 0
] = lq2sjwrvwv_idx_0 * lq2sjwrvwv_idx_1 ; iowqpk3eub2 . d5pwtznta0 [ 1 ] =
bgnvcvf3bg_idx_1 * bgnvcvf3bg_idx_2 * lq2sjwrvwv_idx_0 - bgnvcvf3bg_idx_0 *
lq2sjwrvwv_idx_2 ; iowqpk3eub2 . d5pwtznta0 [ 2 ] = bgnvcvf3bg_idx_1 *
lq2sjwrvwv_idx_2 * lq2sjwrvwv_idx_0 + bgnvcvf3bg_idx_0 * bgnvcvf3bg_idx_2 ;
iowqpk3eub2 . d5pwtznta0 [ 3 ] = bgnvcvf3bg_idx_0 * lq2sjwrvwv_idx_1 ;
iowqpk3eub2 . d5pwtznta0 [ 4 ] = bgnvcvf3bg_idx_1 * bgnvcvf3bg_idx_2 *
bgnvcvf3bg_idx_0 + lq2sjwrvwv_idx_0 * lq2sjwrvwv_idx_2 ; iowqpk3eub2 .
d5pwtznta0 [ 5 ] = bgnvcvf3bg_idx_1 * lq2sjwrvwv_idx_2 * bgnvcvf3bg_idx_0 -
lq2sjwrvwv_idx_0 * bgnvcvf3bg_idx_2 ; iowqpk3eub2 . d5pwtznta0 [ 6 ] = -
bgnvcvf3bg_idx_1 ; iowqpk3eub2 . d5pwtznta0 [ 7 ] = lq2sjwrvwv_idx_1 *
bgnvcvf3bg_idx_2 ; iowqpk3eub2 . d5pwtznta0 [ 8 ] = lq2sjwrvwv_idx_1 *
lq2sjwrvwv_idx_2 ; for ( i = 0 ; i < 3 ; i ++ ) { iowqpk3eub2 . eiykk5beex [
3 * i ] = iowqpk3eub2 . d5pwtznta0 [ i ] ; iowqpk3eub2 . eiykk5beex [ 3 * i +
1 ] = iowqpk3eub2 . d5pwtznta0 [ i + 3 ] ; iowqpk3eub2 . eiykk5beex [ 3 * i +
2 ] = iowqpk3eub2 . d5pwtznta0 [ i + 6 ] ; } iowqpk3eub2 . nkbbssdc5d [ 0 ] =
iowqpk3eub2 . pcflqp2d2t [ 0 ] ; iowqpk3eub2 . nkbbssdc5d [ 1 ] = kjmvupbl2i
. Constant_Value_fqa2j2pnak ; iowqpk3eub2 . nkbbssdc5d [ 2 ] = iowqpk3eub2 .
pcflqp2d2t [ 1 ] ; for ( i = 0 ; i < 3 ; i ++ ) { iowqpk3eub2 . dnenu1vbpk [
i ] = 0.0 ; iowqpk3eub2 . dnenu1vbpk [ i ] += iowqpk3eub2 . eiykk5beex [ i ]
* iowqpk3eub2 . nkbbssdc5d [ 0 ] ; iowqpk3eub2 . dnenu1vbpk [ i ] +=
iowqpk3eub2 . eiykk5beex [ i + 3 ] * iowqpk3eub2 . nkbbssdc5d [ 1 ] ;
iowqpk3eub2 . dnenu1vbpk [ i ] += iowqpk3eub2 . eiykk5beex [ i + 6 ] *
iowqpk3eub2 . nkbbssdc5d [ 2 ] ; } iowqpk3eub2 . ch0o5ig4cr [ 0 ] =
iowqpk3eub2 . dnenu1vbpk [ 0 ] ; iowqpk3eub2 . ch0o5ig4cr [ 1 ] = iowqpk3eub2
. dnenu1vbpk [ 2 ] ; iowqpk3eub2 . lfofnxfayn [ 0 ] = iowqpk3eub2 .
kn03lhlboz [ 0 ] ; iowqpk3eub2 . lfofnxfayn [ 3 ] = iowqpk3eub2 . nktxf2g2id
[ 0 ] ; iowqpk3eub2 . lfofnxfayn [ 1 ] = iowqpk3eub2 . kn03lhlboz [ 1 ] ;
iowqpk3eub2 . lfofnxfayn [ 4 ] = iowqpk3eub2 . nktxf2g2id [ 1 ] ; iowqpk3eub2
. lfofnxfayn [ 2 ] = iowqpk3eub2 . kn03lhlboz [ 2 ] ; iowqpk3eub2 .
lfofnxfayn [ 5 ] = iowqpk3eub2 . nktxf2g2id [ 2 ] ; iowqpk3eub2 . iaezmlrkox
[ 0 ] = iowqpk3eub2 . lfofnxfayn [ 0 ] ; iowqpk3eub2 . iaezmlrkox [ 1 ] =
iowqpk3eub2 . lfofnxfayn [ 1 ] ; iowqpk3eub2 . iaezmlrkox [ 2 ] = iowqpk3eub2
. lfofnxfayn [ 2 ] ; iowqpk3eub2 . dyhmr3qcbv = ( iowqpk3eub2 . iaezmlrkox [
0 ] * iowqpk3eub2 . iaezmlrkox [ 0 ] + iowqpk3eub2 . iaezmlrkox [ 1 ] *
iowqpk3eub2 . iaezmlrkox [ 1 ] ) + iowqpk3eub2 . iaezmlrkox [ 2 ] *
iowqpk3eub2 . iaezmlrkox [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
cz5yqt3r3xb . jekggfsago != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ;
cz5yqt3r3xb . jekggfsago = 0 ; } hbjgnzk0ke = muDoubleScalarSqrt (
iowqpk3eub2 . dyhmr3qcbv ) ; } else { if ( iowqpk3eub2 . dyhmr3qcbv < 0.0 ) {
hbjgnzk0ke = - muDoubleScalarSqrt ( muDoubleScalarAbs ( iowqpk3eub2 .
dyhmr3qcbv ) ) ; } else { hbjgnzk0ke = muDoubleScalarSqrt ( iowqpk3eub2 .
dyhmr3qcbv ) ; } if ( iowqpk3eub2 . dyhmr3qcbv < 0.0 ) { cz5yqt3r3xb .
jekggfsago = 1 ; } } iowqpk3eub2 . gdnyk5p1e3 = kjmvupbl2i . uNF_Gain *
hbjgnzk0ke ; iowqpk3eub2 . g3macyhggt [ 0 ] = iowqpk3eub2 . lfofnxfayn [ 3 ]
; iowqpk3eub2 . g3macyhggt [ 1 ] = iowqpk3eub2 . lfofnxfayn [ 4 ] ;
iowqpk3eub2 . g3macyhggt [ 2 ] = iowqpk3eub2 . lfofnxfayn [ 5 ] ; iowqpk3eub2
. fbzkojgyr0 = ( iowqpk3eub2 . g3macyhggt [ 0 ] * iowqpk3eub2 . g3macyhggt [
0 ] + iowqpk3eub2 . g3macyhggt [ 1 ] * iowqpk3eub2 . g3macyhggt [ 1 ] ) +
iowqpk3eub2 . g3macyhggt [ 2 ] * iowqpk3eub2 . g3macyhggt [ 2 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( cz5yqt3r3xb . dpc4gpu00e != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; cz5yqt3r3xb .
dpc4gpu00e = 0 ; } hbjgnzk0ke = muDoubleScalarSqrt ( iowqpk3eub2 . fbzkojgyr0
) ; } else { if ( iowqpk3eub2 . fbzkojgyr0 < 0.0 ) { hbjgnzk0ke = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( iowqpk3eub2 . fbzkojgyr0 ) ) ; }
else { hbjgnzk0ke = muDoubleScalarSqrt ( iowqpk3eub2 . fbzkojgyr0 ) ; } if (
iowqpk3eub2 . fbzkojgyr0 < 0.0 ) { cz5yqt3r3xb . dpc4gpu00e = 1 ; } }
iowqpk3eub2 . k3isxzlaln = kjmvupbl2i . uNR_Gain * hbjgnzk0ke ; iowqpk3eub2 .
oiwa3jkvb5 [ 1 ] = iowqpk3eub2 . mnpes3j1iq ; iowqpk3eub2 . dsadicqcwv [ 0 ]
= iowqpk3eub2 . araqn4x4bn ; iowqpk3eub2 . dsadicqcwv [ 2 ] = iowqpk3eub2 .
do2ad42p4b ; iowqpk3eub2 . l2egj4cytx [ 1 ] = iowqpk3eub2 . f34sqchkix ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { iowqpk3eub2 . dsadicqcwv [ 1 ] = kjmvupbl2i
. Constant_Value_o0rfnlk4rs ; iowqpk3eub2 . l2egj4cytx [ 0 ] = kjmvupbl2i .
Constant1_Value_lrolnezkiq ; iowqpk3eub2 . oiwa3jkvb5 [ 0 ] = kjmvupbl2i .
Constant10_Value ; iowqpk3eub2 . oiwa3jkvb5 [ 2 ] = kjmvupbl2i .
Constant11_Value ; iowqpk3eub2 . l2egj4cytx [ 2 ] = kjmvupbl2i .
Constant2_Value ; } iowqpk3eub2 . o4xtsrd0je = iowqpk3eub2 . gdnyk5p1e3 -
iowqpk3eub2 . eulnmgegcl ; iowqpk3eub2 . iotv5isaib = iowqpk3eub2 .
o4xtsrd0je * rtP__PlntVehFzFlt2f2PassVeh_sldd_ ; iowqpk3eub2 . d0xprkwmho =
iowqpk3eub2 . k3isxzlaln - iowqpk3eub2 . bdac45x5j4 ; iowqpk3eub2 .
d1mihyi2ba = iowqpk3eub2 . d0xprkwmho * rtP__PlntVehFzFlt2f2PassVeh_sldd_ ;
iowqpk3eub2 . fxzb5xblol = iowqpk3eub2 . hl3n1vp0xp . ewiw2ra5at /
iowqpk3eub2 . c5qsn10kon ; iowqpk3eub2 . cjp5kr4awk = iowqpk3eub2 .
hl3n1vp0xp . lpoql10kbh + iowqpk3eub2 . fxzb5xblol ; iowqpk3eub2 . cjvyxh13dv
= iowqpk3eub2 . bnugi4f5zh * iowqpk3eub2 . c5qsn10kon ; if ( ( iowqpk3eub2 .
cjvyxh13dv >= - rtP__PlntWhlVelTolLowVel2f2PassVeh_sldd_ ) && ( iowqpk3eub2 .
cjvyxh13dv <= rtP__PlntWhlVelTolLowVel2f2PassVeh_sldd_ ) ) { iowqpk3eub2 .
a24mklqmql = 2.0 / ( 3.0 - muDoubleScalarPower ( iowqpk3eub2 . cjvyxh13dv ,
2.0 ) ) ; } else { iowqpk3eub2 . nxf5jr3qba = muDoubleScalarAbs ( iowqpk3eub2
. cjvyxh13dv ) ; iowqpk3eub2 . a24mklqmql = iowqpk3eub2 . nxf5jr3qba ; }
iowqpk3eub2 . oee54crz1e = iowqpk3eub2 . a24mklqmql /
rtP__PlntWhlRlxLngth2f2PassVeh_sldd_ ; iowqpk3eub2 . mzj01xvkrr = iowqpk3eub2
. cjp5kr4awk - iowqpk3eub2 . kggvpu401a ; iowqpk3eub2 . hr2pqxcus4 =
iowqpk3eub2 . oee54crz1e * iowqpk3eub2 . mzj01xvkrr ; iowqpk3eub2 .
bgquks0gef = iowqpk3eub2 . kzv4bjyp4c . ewiw2ra5at / iowqpk3eub2 . ha4njibf2o
; iowqpk3eub2 . ch4cxv3mlw = iowqpk3eub2 . kzv4bjyp4c . lpoql10kbh +
iowqpk3eub2 . bgquks0gef ; iowqpk3eub2 . d5am3mkuih = iowqpk3eub2 .
bugorax2wv * iowqpk3eub2 . ha4njibf2o ; if ( ( iowqpk3eub2 . d5am3mkuih >= -
rtP__PlntWhlVelTolLowVel2f2PassVeh_sldd_ ) && ( iowqpk3eub2 . d5am3mkuih <=
rtP__PlntWhlVelTolLowVel2f2PassVeh_sldd_ ) ) { iowqpk3eub2 . ekohgouk1y = 2.0
/ ( 3.0 - muDoubleScalarPower ( iowqpk3eub2 . d5am3mkuih , 2.0 ) ) ; } else {
iowqpk3eub2 . adayadw0rs = muDoubleScalarAbs ( iowqpk3eub2 . d5am3mkuih ) ;
iowqpk3eub2 . ekohgouk1y = iowqpk3eub2 . adayadw0rs ; } iowqpk3eub2 .
c52p1ih31b = iowqpk3eub2 . ekohgouk1y / rtP__PlntWhlRlxLngth2f2PassVeh_sldd_
; iowqpk3eub2 . dvwgmcheyq = iowqpk3eub2 . ch4cxv3mlw - iowqpk3eub2 .
cjintpfg52 ; iowqpk3eub2 . c1rn35nztg = iowqpk3eub2 . c52p1ih31b *
iowqpk3eub2 . dvwgmcheyq ; iowqpk3eub2 . o1byibse1l [ 0 ] = iowqpk3eub2 .
bnugi4f5zh ; iowqpk3eub2 . o1byibse1l [ 1 ] = iowqpk3eub2 . bnugi4f5zh ;
iowqpk3eub2 . o1byibse1l [ 2 ] = iowqpk3eub2 . bugorax2wv ; iowqpk3eub2 .
o1byibse1l [ 3 ] = iowqpk3eub2 . bugorax2wv ; if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { iowqpk3eub2 . nt3tznw0vu = cz5yqt3r3xb . asn3ailf0a ; } if (
ssIsModeUpdateTimeStep ( rtS ) ) { zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING
, & noe4wlvctth . k5hpujcbj0 , ( iowqpk3eub2 . nt3tznw0vu ) ) ; if ( (
zcEvent != NO_ZCEVENT ) || ( cz5yqt3r3xb . himiqz4m3m != 0 ) ) { dlepxyenjj =
( chmgkez0tpf . hzhiczi0l3 != iowqpk3eub2 . gk34ntrgmq ) ; chmgkez0tpf .
hzhiczi0l3 = iowqpk3eub2 . gk34ntrgmq ; if ( dlepxyenjj ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } iowqpk3eub2 .
gbaltmt113 = chmgkez0tpf . hzhiczi0l3 ; } else { iowqpk3eub2 . gbaltmt113 =
chmgkez0tpf . hzhiczi0l3 ; } iowqpk3eub2 . jhc4ii4xbs =
rtP__PlntDriveshftDamp2f2Drivetrain_sldd_ * iowqpk3eub2 . gbaltmt113 ;
iowqpk3eub2 . bvnglhibbn = chmgkez0tpf . ftygsqggs5 ; iowqpk3eub2 .
orndyrmi2r = rtP__PlntDriveshftStiff2f2Drivetrain_sldd_ * iowqpk3eub2 .
bvnglhibbn ; iowqpk3eub2 . hau1vvqsb5 = iowqpk3eub2 . jhc4ii4xbs +
iowqpk3eub2 . orndyrmi2r ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { if (
cz5yqt3r3xb . cwrrpplnpb != 0 ) { chmgkez0tpf . kkyrf40rpz [ 0 ] =
iowqpk3eub2 . mmyyvvwxlz [ 0 ] ; chmgkez0tpf . kkyrf40rpz [ 1 ] = iowqpk3eub2
. mmyyvvwxlz [ 1 ] ; } if ( chmgkez0tpf . kkyrf40rpz [ 0 ] >= kjmvupbl2i .
Integrator_UpperSat ) { if ( chmgkez0tpf . kkyrf40rpz [ 0 ] != kjmvupbl2i .
Integrator_UpperSat ) { chmgkez0tpf . kkyrf40rpz [ 0 ] = kjmvupbl2i .
Integrator_UpperSat ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
} else if ( ( chmgkez0tpf . kkyrf40rpz [ 0 ] <= kjmvupbl2i .
Integrator_LowerSat ) && ( chmgkez0tpf . kkyrf40rpz [ 0 ] != kjmvupbl2i .
Integrator_LowerSat ) ) { chmgkez0tpf . kkyrf40rpz [ 0 ] = kjmvupbl2i .
Integrator_LowerSat ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
if ( chmgkez0tpf . kkyrf40rpz [ 1 ] >= kjmvupbl2i . Integrator_UpperSat ) {
if ( chmgkez0tpf . kkyrf40rpz [ 1 ] != kjmvupbl2i . Integrator_UpperSat ) {
chmgkez0tpf . kkyrf40rpz [ 1 ] = kjmvupbl2i . Integrator_UpperSat ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } else if ( (
chmgkez0tpf . kkyrf40rpz [ 1 ] <= kjmvupbl2i . Integrator_LowerSat ) && (
chmgkez0tpf . kkyrf40rpz [ 1 ] != kjmvupbl2i . Integrator_LowerSat ) ) {
chmgkez0tpf . kkyrf40rpz [ 1 ] = kjmvupbl2i . Integrator_LowerSat ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } iowqpk3eub2 .
okmlvakeqk [ 0 ] = chmgkez0tpf . kkyrf40rpz [ 0 ] ; iowqpk3eub2 . okmlvakeqk
[ 1 ] = chmgkez0tpf . kkyrf40rpz [ 1 ] ; } else { if ( chmgkez0tpf .
kkyrf40rpz [ 0 ] >= kjmvupbl2i . Integrator_UpperSat ) { iowqpk3eub2 .
okmlvakeqk [ 0 ] = kjmvupbl2i . Integrator_UpperSat ; } else if ( chmgkez0tpf
. kkyrf40rpz [ 0 ] <= kjmvupbl2i . Integrator_LowerSat ) { iowqpk3eub2 .
okmlvakeqk [ 0 ] = kjmvupbl2i . Integrator_LowerSat ; } else { iowqpk3eub2 .
okmlvakeqk [ 0 ] = chmgkez0tpf . kkyrf40rpz [ 0 ] ; } if ( chmgkez0tpf .
kkyrf40rpz [ 1 ] >= kjmvupbl2i . Integrator_UpperSat ) { iowqpk3eub2 .
okmlvakeqk [ 1 ] = kjmvupbl2i . Integrator_UpperSat ; } else if ( chmgkez0tpf
. kkyrf40rpz [ 1 ] <= kjmvupbl2i . Integrator_LowerSat ) { iowqpk3eub2 .
okmlvakeqk [ 1 ] = kjmvupbl2i . Integrator_LowerSat ; } else { iowqpk3eub2 .
okmlvakeqk [ 1 ] = chmgkez0tpf . kkyrf40rpz [ 1 ] ; } } inakimlcb3 =
rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ / 2.0 ; iowqpk3eub2 . c2wzjcaepr [
0 ] = iowqpk3eub2 . cqrxigykwm * iowqpk3eub2 . okmlvakeqk [ 0 ] ; iowqpk3eub2
. ohiyphp5ep [ 0 ] = inakimlcb3 * iowqpk3eub2 . c2wzjcaepr [ 0 ] ;
iowqpk3eub2 . c2wzjcaepr [ 1 ] = iowqpk3eub2 . cqrxigykwm * iowqpk3eub2 .
okmlvakeqk [ 1 ] ; iowqpk3eub2 . ohiyphp5ep [ 1 ] = inakimlcb3 * iowqpk3eub2
. c2wzjcaepr [ 1 ] ; iowqpk3eub2 . kortgcvvps = iowqpk3eub2 . ohiyphp5ep [ 0
] + iowqpk3eub2 . ohiyphp5ep [ 1 ] ; iowqpk3eub2 . kq0sl3ydh0 [ 0 ] =
iowqpk3eub2 . kortgcvvps ; iowqpk3eub2 . b0lxiysli2 [ 0 ] = kjmvupbl2i .
Gain1_Gain_fidaxlyian * iowqpk3eub2 . okmlvakeqk [ 0 ] ; iowqpk3eub2 .
b0lxiysli2 [ 1 ] = kjmvupbl2i . Gain1_Gain_fidaxlyian * iowqpk3eub2 .
okmlvakeqk [ 1 ] ; iowqpk3eub2 . kq0sl3ydh0 [ 1 ] = - iowqpk3eub2 .
okmlvakeqk [ 0 ] ; iowqpk3eub2 . kq0sl3ydh0 [ 2 ] = - iowqpk3eub2 .
okmlvakeqk [ 1 ] ; iowqpk3eub2 . kq0sl3ydh0 [ 3 ] = iowqpk3eub2 . b0lxiysli2
[ 0 ] - iowqpk3eub2 . b0lxiysli2 [ 1 ] ; iowqpk3eub2 . jinfsbbhky =
iowqpk3eub2 . hau1vvqsb5 * iowqpk3eub2 . kq0sl3ydh0 [ 0 ] ; if ( iowqpk3eub2
. jinfsbbhky > kjmvupbl2i . Switch_Threshold_ga0yoodqm3 ) { iowqpk3eub2 .
cvqlqdsndf = rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ ; } else { iowqpk3eub2 .
cvqlqdsndf = kjmvupbl2i . Constant_Value_oz0y4pnsuv ; } iowqpk3eub2 .
er5iejwbmj = muDoubleScalarAbs ( iowqpk3eub2 . kq0sl3ydh0 [ 0 ] ) ;
iowqpk3eub2 . p5vgig23ib = kjmvupbl2i . Gain1_Gain_ii2idyqiil * iowqpk3eub2 .
er5iejwbmj ; iowqpk3eub2 . nrrsykecbr = iowqpk3eub2 . p5vgig23ib - kjmvupbl2i
. Constant1_Value_nx3a4k3tdd ; iowqpk3eub2 . kzthjajhu2 = kjmvupbl2i .
Gain2_Gain * iowqpk3eub2 . nrrsykecbr ; iowqpk3eub2 . hj1vvcjcba =
muDoubleScalarTanh ( iowqpk3eub2 . kzthjajhu2 ) + kjmvupbl2i .
Constant1_Value_nx3a4k3tdd ; iowqpk3eub2 . lowpzb4o0j = kjmvupbl2i .
Gain_Gain_mtqxhf4gg3 * iowqpk3eub2 . hj1vvcjcba ; iowqpk3eub2 . a3se3uxsa0 =
iowqpk3eub2 . cvqlqdsndf * iowqpk3eub2 . lowpzb4o0j ; iowqpk3eub2 .
b1002ja30r = kjmvupbl2i . Constant1_Value_nx3a4k3tdd - iowqpk3eub2 .
lowpzb4o0j ; iowqpk3eub2 . c0212dk5n0 = iowqpk3eub2 . b1002ja30r * kjmvupbl2i
. Constant_Value_nr1euqdfq2 ; iowqpk3eub2 . a1jfohnbbb = iowqpk3eub2 .
a3se3uxsa0 + iowqpk3eub2 . c0212dk5n0 ; iowqpk3eub2 . lbbeqssvkc =
iowqpk3eub2 . a1jfohnbbb * iowqpk3eub2 . hau1vvqsb5 ; iowqpk3eub2 .
oon0lyzoaz = - iowqpk3eub2 . hreyyfol5z * iowqpk3eub2 . kq0sl3ydh0 [ 1 ] ; if
( iowqpk3eub2 . oon0lyzoaz > kjmvupbl2i . Switch_Threshold_avxmrzxuk0 ) {
iowqpk3eub2 . gbv4umsqtz = rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ ; } else {
iowqpk3eub2 . gbv4umsqtz = kjmvupbl2i . Constant_Value_khdc5alm40 ; }
iowqpk3eub2 . lstfxdco4s = muDoubleScalarAbs ( iowqpk3eub2 . kq0sl3ydh0 [ 1 ]
) ; iowqpk3eub2 . phi3srvxtn = kjmvupbl2i . Gain1_Gain_ffmnri5gvm *
iowqpk3eub2 . lstfxdco4s ; iowqpk3eub2 . ngkymifojl = iowqpk3eub2 .
phi3srvxtn - kjmvupbl2i . Constant1_Value_aimltjen1o ; iowqpk3eub2 .
lozlso34a1 = kjmvupbl2i . Gain2_Gain_nrz2w3wsty * iowqpk3eub2 . ngkymifojl ;
iowqpk3eub2 . f2i0rhb4j1 = muDoubleScalarTanh ( iowqpk3eub2 . lozlso34a1 ) +
kjmvupbl2i . Constant1_Value_aimltjen1o ; iowqpk3eub2 . jo3zl1sua4 =
kjmvupbl2i . Gain_Gain_pcvx1pzleq * iowqpk3eub2 . f2i0rhb4j1 ; iowqpk3eub2 .
hey313hwyt = iowqpk3eub2 . gbv4umsqtz * iowqpk3eub2 . jo3zl1sua4 ;
iowqpk3eub2 . o22bitd451 = kjmvupbl2i . Constant1_Value_aimltjen1o -
iowqpk3eub2 . jo3zl1sua4 ; iowqpk3eub2 . obzquwaaiq = iowqpk3eub2 .
o22bitd451 * kjmvupbl2i . Constant_Value_fuym3tk21u ; iowqpk3eub2 .
apvubbfw3c = iowqpk3eub2 . hey313hwyt + iowqpk3eub2 . obzquwaaiq ;
iowqpk3eub2 . dcgngg1mg5 = iowqpk3eub2 . apvubbfw3c * - iowqpk3eub2 .
hreyyfol5z ; iowqpk3eub2 . f3sljn1wd2 = - iowqpk3eub2 . jbgfcwpebf *
iowqpk3eub2 . kq0sl3ydh0 [ 2 ] ; if ( iowqpk3eub2 . f3sljn1wd2 > kjmvupbl2i .
Switch_Threshold_gyzjwoigpp ) { iowqpk3eub2 . fq0fiv3ziz =
rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ ; } else { iowqpk3eub2 . fq0fiv3ziz =
kjmvupbl2i . Constant_Value_p1rckdatju ; } iowqpk3eub2 . hbtxdpylgh =
muDoubleScalarAbs ( iowqpk3eub2 . kq0sl3ydh0 [ 2 ] ) ; iowqpk3eub2 .
li524emhoo = kjmvupbl2i . Gain1_Gain_myke1ppinz * iowqpk3eub2 . hbtxdpylgh ;
iowqpk3eub2 . iafdmwbgzy = iowqpk3eub2 . li524emhoo - kjmvupbl2i .
Constant1_Value_a4s255zunz ; iowqpk3eub2 . dlxs0ivr5u = kjmvupbl2i .
Gain2_Gain_cs3tlkzyou * iowqpk3eub2 . iafdmwbgzy ; iowqpk3eub2 . fqwiz5f4up =
muDoubleScalarTanh ( iowqpk3eub2 . dlxs0ivr5u ) + kjmvupbl2i .
Constant1_Value_a4s255zunz ; iowqpk3eub2 . djiotohjne = kjmvupbl2i .
Gain_Gain_aswlq0g5zi * iowqpk3eub2 . fqwiz5f4up ; iowqpk3eub2 . d4sykcs5wk =
iowqpk3eub2 . fq0fiv3ziz * iowqpk3eub2 . djiotohjne ; iowqpk3eub2 .
dud1uvzkqh = kjmvupbl2i . Constant1_Value_a4s255zunz - iowqpk3eub2 .
djiotohjne ; iowqpk3eub2 . if14etsg0u = iowqpk3eub2 . dud1uvzkqh * kjmvupbl2i
. Constant_Value_hjedmjpnna ; iowqpk3eub2 . hhoz5bkyag = iowqpk3eub2 .
d4sykcs5wk + iowqpk3eub2 . if14etsg0u ; iowqpk3eub2 . fcf2vxrh2g =
iowqpk3eub2 . hhoz5bkyag * - iowqpk3eub2 . jbgfcwpebf ; iowqpk3eub2 .
dd00q2xdge [ 0 ] = iowqpk3eub2 . lbbeqssvkc ; iowqpk3eub2 . dd00q2xdge [ 1 ]
= iowqpk3eub2 . dcgngg1mg5 ; iowqpk3eub2 . dd00q2xdge [ 2 ] = iowqpk3eub2 .
fcf2vxrh2g ; if ( kjmvupbl2i . OpenDifferential_shaftSwitchMask == 1.0 ) {
automldiffopen_wAtp5Ifz ( iowqpk3eub2 . dd00q2xdge ,
rtP__PlntDiffrntlAxl1Damp2f2Drivetrain_sldd_ ,
rtP__PlntDiffrntlCarrDamp2f2Drivetrain_sldd_ ,
rtP__PlntDiffrntlAxl2Damp2f2Drivetrain_sldd_ ,
rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ , 1.0 ,
rtP__PlntDiffrntlCarrInertia2f2Drivetrain_sldd_ ,
rtP__PlntDiffrntlAxl1Inertia2f2Drivetrain_sldd_ ,
rtP__PlntDiffrntlAxl2Inertia2f2Drivetrain_sldd_ , iowqpk3eub2 . okmlvakeqk ,
guicqfizux , iowqpk3eub2 . dmnvn5gvd4 ) ; } else { automldiffopen_wAtp5Ifz (
iowqpk3eub2 . dd00q2xdge , rtP__PlntDiffrntlAxl1Damp2f2Drivetrain_sldd_ ,
rtP__PlntDiffrntlCarrDamp2f2Drivetrain_sldd_ ,
rtP__PlntDiffrntlAxl2Damp2f2Drivetrain_sldd_ ,
rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ , 0.0 ,
rtP__PlntDiffrntlCarrInertia2f2Drivetrain_sldd_ ,
rtP__PlntDiffrntlAxl1Inertia2f2Drivetrain_sldd_ ,
rtP__PlntDiffrntlAxl2Inertia2f2Drivetrain_sldd_ , iowqpk3eub2 . okmlvakeqk ,
guicqfizux , iowqpk3eub2 . dmnvn5gvd4 ) ; } iowqpk3eub2 . dhr3me1nz0 = -
iowqpk3eub2 . okmlvakeqk [ 0 ] - iowqpk3eub2 . o1byibse1l [ 0 ] ; if (
iowqpk3eub2 . ixwcnrrmnz != 0.0 ) { iowqpk3eub2 . oegjxatj1q = iowqpk3eub2 .
me1friqgpo ; } else { iowqpk3eub2 . oegjxatj1q = iowqpk3eub2 . d1uv3awlwx ; }
iowqpk3eub2 . cw0ygcscpp = iowqpk3eub2 . dhr3me1nz0 - iowqpk3eub2 .
oegjxatj1q ; iowqpk3eub2 . jxwxzdj1f1 =
rtP__PlntDriveshftDampCutoffFreq2f2Drivetrain_sldd_ * iowqpk3eub2 .
cw0ygcscpp ; iowqpk3eub2 . dd1hidzbwa = - iowqpk3eub2 . okmlvakeqk [ 1 ] -
iowqpk3eub2 . o1byibse1l [ 1 ] ; if ( iowqpk3eub2 . oytg0154s1 != 0.0 ) {
iowqpk3eub2 . jlkhwd1jet = iowqpk3eub2 . jca5e2ozdf ; } else { iowqpk3eub2 .
jlkhwd1jet = iowqpk3eub2 . k45bb5csjy ; } iowqpk3eub2 . cam22f11mr =
iowqpk3eub2 . dd1hidzbwa - iowqpk3eub2 . jlkhwd1jet ; iowqpk3eub2 .
hbjjgcn42r = rtP__PlntDriveshftDampCutoffFreq2f2Drivetrain_sldd_ *
iowqpk3eub2 . cam22f11mr ; iowqpk3eub2 . jpyepvm3xu = iowqpk3eub2 .
dqqdmdpyoe - iowqpk3eub2 . kortgcvvps ; if ( iowqpk3eub2 . nt3tznw0vu != 0.0
) { iowqpk3eub2 . nvxci0i4yu = iowqpk3eub2 . gbaltmt113 ; } else {
iowqpk3eub2 . nvxci0i4yu = iowqpk3eub2 . gk34ntrgmq ; } iowqpk3eub2 .
jh3c41lpx2 = iowqpk3eub2 . jpyepvm3xu - iowqpk3eub2 . nvxci0i4yu ;
iowqpk3eub2 . bmuzvpozlw =
rtP__PlntDriveshftDampCutoffFreq2f2Drivetrain_sldd_ * iowqpk3eub2 .
jh3c41lpx2 ; iowqpk3eub2 . auhfud24ib = - rtP__PlntEM1Damp2f2Drivetrain_sldd_
* iowqpk3eub2 . dqqdmdpyoe ; iowqpk3eub2 . f1ue2yetzx = ( iowqpk3eub2 .
nzrgmpq2kc - iowqpk3eub2 . hau1vvqsb5 ) + iowqpk3eub2 . auhfud24ib ;
iowqpk3eub2 . pezbzcp2ij = iowqpk3eub2 . f1ue2yetzx / iowqpk3eub2 .
ixgkgjvbsp ; iowqpk3eub2 . pynezfpwd5 = iowqpk3eub2 . hq4ll3qyzp *
iowqpk3eub2 . dqqdmdpyoe ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if (
cz5yqt3r3xb . hlhqdk1445 . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( cz5yqt3r3xb . hlhqdk1445 . AQHandles , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & iowqpk3eub2 . pynezfpwd5 + 0 ) ; } } } iowqpk3eub2 .
nriww5alsm = - 1.0 / ( rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ * 3600.0 )
* iowqpk3eub2 . l0jn2lsago ; iowqpk3eub2 . ls3ug4yvlk = 1.0 /
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ * iowqpk3eub2 . l0jn2lsago ;
iowqpk3eub2 . eocs5on0jt = look2_binlcapw ( iowqpk3eub2 . fjnu3gvsoe ,
iowqpk3eub2 . dqkowwdyo5 , rtP__PlntBattTempBpt2f2BatteryDCDC_sldd_ ,
rtP__PlntBattSocBpt2f2BatteryDCDC_sldd_ ,
rtP__PlntBattIntrnRes2f2BatteryDCDC_sldd_ , kjmvupbl2i . R_maxIndex , 7U ) *
iowqpk3eub2 . ls3ug4yvlk ; iowqpk3eub2 . flbxxyyfom = look1_binlcapw (
iowqpk3eub2 . dqkowwdyo5 , kjmvupbl2i . Em_bp01Data , kjmvupbl2i .
Em_tableData , 100U ) - iowqpk3eub2 . eocs5on0jt ; iowqpk3eub2 . njlftunr4h =
rtP__PlntBattNumCellSer2f2BatteryDCDC_sldd_ * iowqpk3eub2 . flbxxyyfom ;
iowqpk3eub2 . j3qtbjnizf = iowqpk3eub2 . njlftunr4h - iowqpk3eub2 .
p1wsp4msvl ; iowqpk3eub2 . dfw11gckk0 = iowqpk3eub2 . hdpouphvxx -
iowqpk3eub2 . jnpzg142hx ; UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID5 (
int_T tid ) { boolean_T kehdr1wwi1 [ 4 ] ; int32_T imarvxjq4b ; int32_T
iwcjrd5qos ; boolean_T dvuanyemxf ; if ( kjmvupbl2i .
Constant3_Value_hsmcqc2qzw > kjmvupbl2i . DeadZone3_End ) { iowqpk3eub2 .
ldqpwfgupj = kjmvupbl2i . Constant3_Value_hsmcqc2qzw - kjmvupbl2i .
DeadZone3_End ; } else if ( kjmvupbl2i . Constant3_Value_hsmcqc2qzw >=
kjmvupbl2i . DeadZone3_Start ) { iowqpk3eub2 . ldqpwfgupj = 0.0 ; } else {
iowqpk3eub2 . ldqpwfgupj = kjmvupbl2i . Constant3_Value_hsmcqc2qzw -
kjmvupbl2i . DeadZone3_Start ; } { if ( cz5yqt3r3xb . kzgixjdqqa . AQHandles
&& ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb . kzgixjdqqa .
AQHandles , ssGetTaskTime ( rtS , 5 ) , ( char * ) & iowqpk3eub2 . ldqpwfgupj
+ 0 ) ; } } { if ( cz5yqt3r3xb . gynuv0krsy . AQHandles && ssGetLogOutput (
rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb . gynuv0krsy . AQHandles ,
ssGetTaskTime ( rtS , 5 ) , ( char * ) & kjmvupbl2i . EngTrq_Value + 0 ) ; }
} { if ( cz5yqt3r3xb . cismfzyk15 . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( cz5yqt3r3xb . cismfzyk15 . AQHandles , ssGetTaskTime ( rtS ,
5 ) , ( char * ) & kjmvupbl2i . EngSpd_Value + 0 ) ; } } iowqpk3eub2 .
nz1eo0mhjt = 57.295779513082323 * iowqpk3eub2 . ldqpwfgupj ; iowqpk3eub2 .
pvdiosiz3s = 0.0 ; OpenLoopBrakingTID1 ( & kehdr1wwi1 [ 0 ] , & ( cz5yqt3r3xb
. lofhsz2swn . rtb ) ) ; EvPowertrainControllerTID1 ( & ( cz5yqt3r3xb .
hukxwubwy0 . rtb ) ) ; iowqpk3eub2 . jtrhoigdxv = ( kjmvupbl2i . EngSpd_Value
<= kjmvupbl2i . CompareToConstant2_const ) ; dvuanyemxf = ! kjmvupbl2i .
Constant9_Value_bderlrgqtg ; iowqpk3eub2 . np15oib1kn = ( kjmvupbl2i .
Constant6_Value_ntv4lpcswr && dvuanyemxf ) ; iowqpk3eub2 . puwtafzry1 = ( ( !
kjmvupbl2i . Constant7_Value_dyep4qzmxf ) || ( ! dvuanyemxf ) ) ; iowqpk3eub2
. jiym3rqvan = ! kjmvupbl2i . Constant12_Value_lr1o3jzrdw ; iowqpk3eub2 .
gcn3sxipyq = ( ( ! kjmvupbl2i . Constant11_Value_doz0cijqot ) || ( !
iowqpk3eub2 . jiym3rqvan ) ) ; iowqpk3eub2 . hpa0jnkmab = ( kjmvupbl2i .
Constant1_Value_m0radogykp [ 0 ] + kjmvupbl2i . Constant1_Value_m0radogykp [
1 ] ) * kjmvupbl2i . Gain_Gain_anjvar3enl - ( kjmvupbl2i .
Constant1_Value_m0radogykp [ 2 ] + kjmvupbl2i . Constant1_Value_m0radogykp [
3 ] ) * kjmvupbl2i . Gain1_Gain_b2x0xrdboa ; iowqpk3eub2 . dsgbg2ev15 [ 0 ] =
rtP__PlntVehDstCGFrntAxl2f2PassVeh_sldd_ ; iowqpk3eub2 . dsgbg2ev15 [ 1 ] =
kjmvupbl2i . HardPointCoordinateTransformFront_R_T2 ; iowqpk3eub2 .
dsgbg2ev15 [ 2 ] = rtP__PlntVehCGHgtAxl2f2PassVeh_sldd_ ; iowqpk3eub2 .
ha5st20hrl [ 0 ] = - rtP__PlntVehDstCGRearAxl2f2PassVeh_sldd_ ; iowqpk3eub2 .
ha5st20hrl [ 1 ] = kjmvupbl2i . HardPointCoordinateTransformRear_R_T2 ;
iowqpk3eub2 . ha5st20hrl [ 2 ] = rtP__PlntVehCGHgtAxl2f2PassVeh_sldd_ ;
iowqpk3eub2 . mkoefhpy3s [ 0 ] = 0.0 ; iowqpk3eub2 . mkoefhpy3s [ 1 ] = 0.0 ;
iowqpk3eub2 . mkoefhpy3s [ 2 ] = rtP__PlntVehMass2f2PassVeh_sldd_ *
rtP__EnvGrvty2f2Environment_sldd_ ; if ( rtP__PlntWhlLdRadius2f2PassVeh_sldd_
> kjmvupbl2i . Saturation_UpperSat_bopsnau5hk ) { iowqpk3eub2 . c5qsn10kon =
kjmvupbl2i . Saturation_UpperSat_bopsnau5hk ; } else if (
rtP__PlntWhlLdRadius2f2PassVeh_sldd_ < kjmvupbl2i .
Saturation_LowerSat_dbw20intcx ) { iowqpk3eub2 . c5qsn10kon = kjmvupbl2i .
Saturation_LowerSat_dbw20intcx ; } else { iowqpk3eub2 . c5qsn10kon =
rtP__PlntWhlLdRadius2f2PassVeh_sldd_ ; } iowqpk3eub2 . eiobpiy5iw =
kjmvupbl2i . TorqueConversion1_Gain *
rtP__PlntBrkActrBoreFrnt2f2PassVeh_sldd_ ; for ( iwcjrd5qos = 0 ; iwcjrd5qos
< 1 ; iwcjrd5qos ++ ) { ifd12z2us4TID5 (
rtP__PlntWhlDampCoeffFrnt2f2PassVeh_sldd_ , & iowqpk3eub2 . gugymbw2iq [
iwcjrd5qos ] . eq332hab4o , & kjmvupbl2i . gugymbw2iq . eq332hab4o ) ; } if (
rtP__PlntWhlLdRadius2f2PassVeh_sldd_ > kjmvupbl2i .
Saturation_UpperSat_bsj0f3al0o ) { iowqpk3eub2 . ha4njibf2o = kjmvupbl2i .
Saturation_UpperSat_bsj0f3al0o ; } else if (
rtP__PlntWhlLdRadius2f2PassVeh_sldd_ < kjmvupbl2i .
Saturation_LowerSat_ju3hf2ul0w ) { iowqpk3eub2 . ha4njibf2o = kjmvupbl2i .
Saturation_LowerSat_ju3hf2ul0w ; } else { iowqpk3eub2 . ha4njibf2o =
rtP__PlntWhlLdRadius2f2PassVeh_sldd_ ; } iowqpk3eub2 . g3u0z4mibd =
kjmvupbl2i . TorqueConversion1_Gain_oj0lwphizv *
rtP__PlntBrkActrBoreRear2f2PassVeh_sldd_ ; for ( imarvxjq4b = 0 ; imarvxjq4b
< 1 ; imarvxjq4b ++ ) { ox4yrtzjzoTID5 (
rtP__PlntWhlDampCoeffRear2f2PassVeh_sldd_ , & iowqpk3eub2 . ngpegw05gp [
imarvxjq4b ] . neijo20b0e , & kjmvupbl2i . ngpegw05gp . neijo20b0e ) ; } if (
kjmvupbl2i . Constant_Value_fgrzpiya5g > kjmvupbl2i . Switch1_Threshold ) {
iowqpk3eub2 . jvwkib0hfu = kjmvupbl2i . Constant6_Value_m2h55yhwr4 ; } else {
iowqpk3eub2 . jvwkib0hfu = - kjmvupbl2i . Constant6_Value_m2h55yhwr4 ; }
iowqpk3eub2 . mmyyvvwxlz [ 0 ] =
rtP__PlntDiffrntlAxl1InitVel2f2Drivetrain_sldd_ ; iowqpk3eub2 . mmyyvvwxlz [
1 ] = rtP__PlntDiffrntlAxl2InitVel2f2Drivetrain_sldd_ ; if ( kjmvupbl2i .
Constant_Value_iehwwg2crd > kjmvupbl2i . Switch_Threshold_gdeuynuela ) {
iowqpk3eub2 . cqrxigykwm = kjmvupbl2i . Constant1_Value_a0no2aojio ; } else {
iowqpk3eub2 . cqrxigykwm = - kjmvupbl2i . Constant1_Value_a0no2aojio ; }
iowqpk3eub2 . d1uv3awlwx = rtP__PlntDriveshftInitVel2f2Drivetrain_sldd_ ;
iowqpk3eub2 . k45bb5csjy = rtP__PlntDriveshftInitVel2f2Drivetrain_sldd_ ;
iowqpk3eub2 . gk34ntrgmq = rtP__PlntDriveshftInitVel2f2Drivetrain_sldd_ ; if
( ( rtP__PlntEM1Inertia2f2Drivetrain_sldd_ >= - kjmvupbl2i .
div0protectabspoly_thresh ) && ( rtP__PlntEM1Inertia2f2Drivetrain_sldd_ <=
kjmvupbl2i . div0protectabspoly_thresh ) ) { iowqpk3eub2 . ixgkgjvbsp =
2.0E-6 / ( 3.0 - muDoubleScalarPower ( rtP__PlntEM1Inertia2f2Drivetrain_sldd_
/ 1.0e-6 , 2.0 ) ) ; } else { iowqpk3eub2 . ixgkgjvbsp = muDoubleScalarAbs (
rtP__PlntEM1Inertia2f2Drivetrain_sldd_ ) ; } if (
rtP__batt_cap_init2f2SparkBat_sldd_ /
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ >
rtP__batt_cap_init2f2SparkBat_sldd_ / rtP__soc_init2f2SparkBat_sldd_ /
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ) { iowqpk3eub2 . fahxrqmdmd =
rtP__batt_cap_init2f2SparkBat_sldd_ / rtP__soc_init2f2SparkBat_sldd_ /
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ; } else { iowqpk3eub2 .
fahxrqmdmd = rtP__batt_cap_init2f2SparkBat_sldd_ /
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ; } iowqpk3eub2 . mcfo01bafi =
kjmvupbl2i . LithiumIonBatteryPack_Vinit *
rtP__PlntBattTimeCnst2f2BatteryDCDC_sldd_ ; iowqpk3eub2 . e3bitaa0oq =
kjmvupbl2i . FuelVolFlw_Value * kjmvupbl2i . ClsdLpFuelMult_Value ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { real_T err ;
real_T tol ; boolean_T guard1 = false ; cz5yqt3r3xb . bk5zchkp0d = 0 ;
cz5yqt3r3xb . csyymkwdxj = 0 ; cz5yqt3r3xb . dkt3lps5cz = 0 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { cz5yqt3r3xb . kodqgqrf0p = kjmvupbl2i .
Reset_Value ; cz5yqt3r3xb . eo23of04rz = kjmvupbl2i . Reset_Value_lzuzrr2wh5
; } cz5yqt3r3xb . phh4r25dqx = 0 ; cz5yqt3r3xb . jpnae2oihw = 0 ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { cz5yqt3r3xb . ovftuesk53 [ 0 ] =
iowqpk3eub2 . eycgm5czdn [ 0 ] ; cz5yqt3r3xb . ovftuesk53 [ 1 ] = iowqpk3eub2
. eycgm5czdn [ 1 ] ; guard1 = false ; if ( ! ( cz5yqt3r3xb . hqv0oirn0q == (
rtInf ) ) ) { if ( ( iowqpk3eub2 . biqv0f0tfc [ 0 ] >= - 1.0 ) && (
iowqpk3eub2 . biqv0f0tfc [ 0 ] <= 1.0 ) ) { tol = kjmvupbl2i .
FirstOrderHold1_ErrTol ; } else if ( iowqpk3eub2 . biqv0f0tfc [ 0 ] > 1.0 ) {
tol = iowqpk3eub2 . biqv0f0tfc [ 0 ] * kjmvupbl2i . FirstOrderHold1_ErrTol ;
} else { tol = - ( iowqpk3eub2 . biqv0f0tfc [ 0 ] * kjmvupbl2i .
FirstOrderHold1_ErrTol ) ; } err = iowqpk3eub2 . fhd2qe1xn4 [ 0 ] -
iowqpk3eub2 . biqv0f0tfc [ 0 ] ; if ( ( err > tol ) || ( err < - tol ) ) {
guard1 = true ; } else { cz5yqt3r3xb . ggdayeevtv [ 0 ] = ( iowqpk3eub2 .
biqv0f0tfc [ 0 ] - cz5yqt3r3xb . ipqlah0gj1 [ 0 ] ) / ( ssGetT ( rtS ) -
cz5yqt3r3xb . hqv0oirn0q ) ; cz5yqt3r3xb . lzovmgc1ye [ 0 ] = iowqpk3eub2 .
fhd2qe1xn4 [ 0 ] ; } } else { guard1 = true ; } if ( guard1 ) { if (
iowqpk3eub2 . biqv0f0tfc [ 0 ] != iowqpk3eub2 . fhd2qe1xn4 [ 0 ] ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } cz5yqt3r3xb .
lzovmgc1ye [ 0 ] = iowqpk3eub2 . biqv0f0tfc [ 0 ] ; cz5yqt3r3xb . ggdayeevtv
[ 0 ] = 0.0 ; } cz5yqt3r3xb . ipqlah0gj1 [ 0 ] = iowqpk3eub2 . biqv0f0tfc [ 0
] ; guard1 = false ; if ( ! ( cz5yqt3r3xb . hqv0oirn0q == ( rtInf ) ) ) { if
( ( iowqpk3eub2 . biqv0f0tfc [ 1 ] >= - 1.0 ) && ( iowqpk3eub2 . biqv0f0tfc [
1 ] <= 1.0 ) ) { tol = kjmvupbl2i . FirstOrderHold1_ErrTol ; } else if (
iowqpk3eub2 . biqv0f0tfc [ 1 ] > 1.0 ) { tol = iowqpk3eub2 . biqv0f0tfc [ 1 ]
* kjmvupbl2i . FirstOrderHold1_ErrTol ; } else { tol = - ( iowqpk3eub2 .
biqv0f0tfc [ 1 ] * kjmvupbl2i . FirstOrderHold1_ErrTol ) ; } err =
iowqpk3eub2 . fhd2qe1xn4 [ 1 ] - iowqpk3eub2 . biqv0f0tfc [ 1 ] ; if ( ( err
> tol ) || ( err < - tol ) ) { guard1 = true ; } else { cz5yqt3r3xb .
ggdayeevtv [ 1 ] = ( iowqpk3eub2 . biqv0f0tfc [ 1 ] - cz5yqt3r3xb .
ipqlah0gj1 [ 1 ] ) / ( ssGetT ( rtS ) - cz5yqt3r3xb . hqv0oirn0q ) ;
cz5yqt3r3xb . lzovmgc1ye [ 1 ] = iowqpk3eub2 . fhd2qe1xn4 [ 1 ] ; } } else {
guard1 = true ; } if ( guard1 ) { if ( iowqpk3eub2 . biqv0f0tfc [ 1 ] !=
iowqpk3eub2 . fhd2qe1xn4 [ 1 ] ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; }
cz5yqt3r3xb . lzovmgc1ye [ 1 ] = iowqpk3eub2 . biqv0f0tfc [ 1 ] ; cz5yqt3r3xb
. ggdayeevtv [ 1 ] = 0.0 ; } cz5yqt3r3xb . ipqlah0gj1 [ 1 ] = iowqpk3eub2 .
biqv0f0tfc [ 1 ] ; guard1 = false ; if ( ! ( cz5yqt3r3xb . hqv0oirn0q == (
rtInf ) ) ) { if ( ( iowqpk3eub2 . biqv0f0tfc [ 2 ] >= - 1.0 ) && (
iowqpk3eub2 . biqv0f0tfc [ 2 ] <= 1.0 ) ) { tol = kjmvupbl2i .
FirstOrderHold1_ErrTol ; } else if ( iowqpk3eub2 . biqv0f0tfc [ 2 ] > 1.0 ) {
tol = iowqpk3eub2 . biqv0f0tfc [ 2 ] * kjmvupbl2i . FirstOrderHold1_ErrTol ;
} else { tol = - ( iowqpk3eub2 . biqv0f0tfc [ 2 ] * kjmvupbl2i .
FirstOrderHold1_ErrTol ) ; } err = iowqpk3eub2 . fhd2qe1xn4 [ 2 ] -
iowqpk3eub2 . biqv0f0tfc [ 2 ] ; if ( ( err > tol ) || ( err < - tol ) ) {
guard1 = true ; } else { cz5yqt3r3xb . ggdayeevtv [ 2 ] = ( iowqpk3eub2 .
biqv0f0tfc [ 2 ] - cz5yqt3r3xb . ipqlah0gj1 [ 2 ] ) / ( ssGetT ( rtS ) -
cz5yqt3r3xb . hqv0oirn0q ) ; cz5yqt3r3xb . lzovmgc1ye [ 2 ] = iowqpk3eub2 .
fhd2qe1xn4 [ 2 ] ; } } else { guard1 = true ; } if ( guard1 ) { if (
iowqpk3eub2 . biqv0f0tfc [ 2 ] != iowqpk3eub2 . fhd2qe1xn4 [ 2 ] ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } cz5yqt3r3xb .
lzovmgc1ye [ 2 ] = iowqpk3eub2 . biqv0f0tfc [ 2 ] ; cz5yqt3r3xb . ggdayeevtv
[ 2 ] = 0.0 ; } cz5yqt3r3xb . ipqlah0gj1 [ 2 ] = iowqpk3eub2 . biqv0f0tfc [ 2
] ; guard1 = false ; if ( ! ( cz5yqt3r3xb . hqv0oirn0q == ( rtInf ) ) ) { if
( ( iowqpk3eub2 . biqv0f0tfc [ 3 ] >= - 1.0 ) && ( iowqpk3eub2 . biqv0f0tfc [
3 ] <= 1.0 ) ) { tol = kjmvupbl2i . FirstOrderHold1_ErrTol ; } else if (
iowqpk3eub2 . biqv0f0tfc [ 3 ] > 1.0 ) { tol = iowqpk3eub2 . biqv0f0tfc [ 3 ]
* kjmvupbl2i . FirstOrderHold1_ErrTol ; } else { tol = - ( iowqpk3eub2 .
biqv0f0tfc [ 3 ] * kjmvupbl2i . FirstOrderHold1_ErrTol ) ; } err =
iowqpk3eub2 . fhd2qe1xn4 [ 3 ] - iowqpk3eub2 . biqv0f0tfc [ 3 ] ; if ( ( err
> tol ) || ( err < - tol ) ) { guard1 = true ; } else { cz5yqt3r3xb .
ggdayeevtv [ 3 ] = ( iowqpk3eub2 . biqv0f0tfc [ 3 ] - cz5yqt3r3xb .
ipqlah0gj1 [ 3 ] ) / ( ssGetT ( rtS ) - cz5yqt3r3xb . hqv0oirn0q ) ;
cz5yqt3r3xb . lzovmgc1ye [ 3 ] = iowqpk3eub2 . fhd2qe1xn4 [ 3 ] ; } } else {
guard1 = true ; } if ( guard1 ) { if ( iowqpk3eub2 . biqv0f0tfc [ 3 ] !=
iowqpk3eub2 . fhd2qe1xn4 [ 3 ] ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; }
cz5yqt3r3xb . lzovmgc1ye [ 3 ] = iowqpk3eub2 . biqv0f0tfc [ 3 ] ; cz5yqt3r3xb
. ggdayeevtv [ 3 ] = 0.0 ; } cz5yqt3r3xb . ipqlah0gj1 [ 3 ] = iowqpk3eub2 .
biqv0f0tfc [ 3 ] ; cz5yqt3r3xb . hqv0oirn0q = ssGetT ( rtS ) ; guard1 = false
; if ( ! ( cz5yqt3r3xb . dfwjuauqhh == ( rtInf ) ) ) { if ( ( iowqpk3eub2 .
kb23u2basn >= - 1.0 ) && ( iowqpk3eub2 . kb23u2basn <= 1.0 ) ) { tol =
kjmvupbl2i . FirstOrderHold_ErrTol ; } else if ( iowqpk3eub2 . kb23u2basn >
1.0 ) { tol = iowqpk3eub2 . kb23u2basn * kjmvupbl2i . FirstOrderHold_ErrTol ;
} else { tol = - ( iowqpk3eub2 . kb23u2basn * kjmvupbl2i .
FirstOrderHold_ErrTol ) ; } err = iowqpk3eub2 . hdpouphvxx - iowqpk3eub2 .
kb23u2basn ; if ( ( err > tol ) || ( err < - tol ) ) { guard1 = true ; } else
{ cz5yqt3r3xb . n20oxvozfr = ( iowqpk3eub2 . kb23u2basn - cz5yqt3r3xb .
akmdrfe3wk ) / ( ssGetT ( rtS ) - cz5yqt3r3xb . dfwjuauqhh ) ; cz5yqt3r3xb .
dci24ewo3n = iowqpk3eub2 . hdpouphvxx ; } } else { guard1 = true ; } if (
guard1 ) { if ( iowqpk3eub2 . kb23u2basn != iowqpk3eub2 . hdpouphvxx ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } cz5yqt3r3xb .
dci24ewo3n = iowqpk3eub2 . kb23u2basn ; cz5yqt3r3xb . n20oxvozfr = 0.0 ; }
cz5yqt3r3xb . akmdrfe3wk = iowqpk3eub2 . kb23u2basn ; cz5yqt3r3xb .
dfwjuauqhh = ssGetT ( rtS ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
cz5yqt3r3xb . asn3ailf0a = kjmvupbl2i . Reset_Value_huedlplppt ; }
cz5yqt3r3xb . himiqz4m3m = 0 ; cz5yqt3r3xb . cwrrpplnpb = 0 ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID5 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { real_T iakuel5r1b
; real_T ljkhidnsry ; real_T nc0kxbwjpe ; real_T ky35uthna1 ; real_T
ciom3cwcfo ; real_T hglixnprmy ; int32_T imarvxjq4b ; int32_T iwcjrd5qos ;
ihgnjubmvk * _rtXdot ; _rtXdot = ( ( ihgnjubmvk * ) ssGetdX ( rtS ) ) ;
_rtXdot -> h3jcgsxl3g = iowqpk3eub2 . jlncf1nhxu ; _rtXdot -> nu0uj5bmhw [ 0
] = iowqpk3eub2 . huhttmored [ 0 ] ; _rtXdot -> nu0uj5bmhw [ 1 ] =
iowqpk3eub2 . huhttmored [ 1 ] ; if ( ( ( chmgkez0tpf . bkhbsrsujg >
kjmvupbl2i . IntegratorLimited_LowerSat ) && ( chmgkez0tpf . bkhbsrsujg <
rtP__batt_cap_init2f2SparkBat_sldd_ / rtP__soc_init2f2SparkBat_sldd_ /
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ) ) || ( ( chmgkez0tpf .
bkhbsrsujg <= kjmvupbl2i . IntegratorLimited_LowerSat ) && ( iowqpk3eub2 .
nriww5alsm > 0.0 ) ) || ( ( chmgkez0tpf . bkhbsrsujg >=
rtP__batt_cap_init2f2SparkBat_sldd_ / rtP__soc_init2f2SparkBat_sldd_ /
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ) && ( iowqpk3eub2 . nriww5alsm <
0.0 ) ) ) { _rtXdot -> bkhbsrsujg = iowqpk3eub2 . nriww5alsm ; } else {
_rtXdot -> bkhbsrsujg = 0.0 ; } _rtXdot -> idw3fynbuy = iowqpk3eub2 .
j3qtbjnizf ; _rtXdot -> ozjmimh0zs = iowqpk3eub2 . pezbzcp2ij ; _rtXdot ->
ptjew1tdci = iowqpk3eub2 . dfw11gckk0 ; _rtXdot -> ovuztebk3m = 0.0 ; _rtXdot
-> ovuztebk3m += kjmvupbl2i . MotorCouplingDynamics_A * chmgkez0tpf .
ovuztebk3m ; _rtXdot -> ovuztebk3m += iowqpk3eub2 . hq4ll3qyzp ; _rtXdot ->
dnh4xblb2m = iowqpk3eub2 . mnpes3j1iq ; _rtXdot -> frrsnlydio = iowqpk3eub2 .
fyfoh3jqvh ; _rtXdot -> gqe2iwaq4w = iowqpk3eub2 . iotv5isaib ; _rtXdot ->
gd53vwvy1z = iowqpk3eub2 . jxwxzdj1f1 ; _rtXdot -> b3wjkyrln3 = iowqpk3eub2 .
dhr3me1nz0 ; _rtXdot -> hys5vfyni2 = iowqpk3eub2 . hbjjgcn42r ; _rtXdot ->
hlouk1zoiv = iowqpk3eub2 . dd1hidzbwa ; _rtXdot -> gvprqgkyrb = iowqpk3eub2 .
hr2pqxcus4 ; _rtXdot -> fs3asrx1bi [ 0 ] = iowqpk3eub2 . pjkdriloq3 [ 0 ] ;
_rtXdot -> fs3asrx1bi [ 1 ] = iowqpk3eub2 . pjkdriloq3 [ 1 ] ; _rtXdot ->
fs3asrx1bi [ 2 ] = iowqpk3eub2 . pjkdriloq3 [ 2 ] ; _rtXdot -> fs3asrx1bi [ 3
] = iowqpk3eub2 . pjkdriloq3 [ 3 ] ; for ( iwcjrd5qos = 0 ; iwcjrd5qos < 1 ;
iwcjrd5qos ++ ) { ky35uthna1 = iowqpk3eub2 . npw2p1gyxa ; ciom3cwcfo =
iowqpk3eub2 . esrwu2tlga ; hglixnprmy = iowqpk3eub2 . o24lfarmih ; epfuneqdrc
( & iowqpk3eub2 . gugymbw2iq [ iwcjrd5qos ] . eq332hab4o , & cz5yqt3r3xb .
gugymbw2iq [ iwcjrd5qos ] . eq332hab4o , & _rtXdot -> gugymbw2iq [ iwcjrd5qos
] . eq332hab4o ) ; } _rtXdot -> loymnatkey = iowqpk3eub2 . d1mihyi2ba ;
_rtXdot -> njzuxe2cj0 = iowqpk3eub2 . c1rn35nztg ; for ( imarvxjq4b = 0 ;
imarvxjq4b < 1 ; imarvxjq4b ++ ) { iakuel5r1b = iowqpk3eub2 . moec5qfiw2 ;
ljkhidnsry = iowqpk3eub2 . awed5xcf4w ; nc0kxbwjpe = iowqpk3eub2 . ptvh2on4rv
; keurgjamya ( & iowqpk3eub2 . ngpegw05gp [ imarvxjq4b ] . neijo20b0e , &
cz5yqt3r3xb . ngpegw05gp [ imarvxjq4b ] . neijo20b0e , & _rtXdot ->
ngpegw05gp [ imarvxjq4b ] . neijo20b0e ) ; } _rtXdot -> iysy5igbzt =
iowqpk3eub2 . meiux3s5v1 ; _rtXdot -> bhmvyo1hjl = iowqpk3eub2 . fslb3e0kt4 ;
_rtXdot -> iarnkoswlx = iowqpk3eub2 . ll5kvzbeqe ; _rtXdot -> lywux4fr45 =
iowqpk3eub2 . if3ap21cin ; _rtXdot -> igaknrnpbi = kjmvupbl2i . TPHC_Value ;
_rtXdot -> fnlgzvne04 = kjmvupbl2i . TPCO_Value ; _rtXdot -> blfalouxud =
kjmvupbl2i . TPNOx_Value ; _rtXdot -> icfrc3vdyk = kjmvupbl2i . TPCO2_Value ;
_rtXdot -> e3mnx1zztt = iowqpk3eub2 . oqfbznbud3 ; _rtXdot -> ifte0hcjd1 =
iowqpk3eub2 . ieofldeqy2 [ 0 ] ; _rtXdot -> hzhiczi0l3 = iowqpk3eub2 .
bmuzvpozlw ; _rtXdot -> ftygsqggs5 = iowqpk3eub2 . jpyepvm3xu ; _rtXdot ->
lz5qf1zk2o [ 0 ] = iowqpk3eub2 . ch0o5ig4cr [ 0 ] ; if ( ( ( chmgkez0tpf .
kkyrf40rpz [ 0 ] > kjmvupbl2i . Integrator_LowerSat ) && ( chmgkez0tpf .
kkyrf40rpz [ 0 ] < kjmvupbl2i . Integrator_UpperSat ) ) || ( ( chmgkez0tpf .
kkyrf40rpz [ 0 ] <= kjmvupbl2i . Integrator_LowerSat ) && ( iowqpk3eub2 .
dmnvn5gvd4 [ 0 ] > 0.0 ) ) || ( ( chmgkez0tpf . kkyrf40rpz [ 0 ] >=
kjmvupbl2i . Integrator_UpperSat ) && ( iowqpk3eub2 . dmnvn5gvd4 [ 0 ] < 0.0
) ) ) { _rtXdot -> kkyrf40rpz [ 0 ] = iowqpk3eub2 . dmnvn5gvd4 [ 0 ] ; } else
{ _rtXdot -> kkyrf40rpz [ 0 ] = 0.0 ; } _rtXdot -> lz5qf1zk2o [ 1 ] =
iowqpk3eub2 . ch0o5ig4cr [ 1 ] ; if ( ( ( chmgkez0tpf . kkyrf40rpz [ 1 ] >
kjmvupbl2i . Integrator_LowerSat ) && ( chmgkez0tpf . kkyrf40rpz [ 1 ] <
kjmvupbl2i . Integrator_UpperSat ) ) || ( ( chmgkez0tpf . kkyrf40rpz [ 1 ] <=
kjmvupbl2i . Integrator_LowerSat ) && ( iowqpk3eub2 . dmnvn5gvd4 [ 1 ] > 0.0
) ) || ( ( chmgkez0tpf . kkyrf40rpz [ 1 ] >= kjmvupbl2i . Integrator_UpperSat
) && ( iowqpk3eub2 . dmnvn5gvd4 [ 1 ] < 0.0 ) ) ) { _rtXdot -> kkyrf40rpz [ 1
] = iowqpk3eub2 . dmnvn5gvd4 [ 1 ] ; } else { _rtXdot -> kkyrf40rpz [ 1 ] =
0.0 ; } } void MdlProjection ( void ) { } void MdlZeroCrossings ( void ) {
bor3rs1x4c * _rtZCSV ; _rtZCSV = ( ( bor3rs1x4c * ) ssGetSolverZcSignalVector
( rtS ) ) ; _rtZCSV -> f1oxvk4tah = iowqpk3eub2 . o4djdimsdm - kjmvupbl2i .
Constant_Value ; _rtZCSV -> lx5dierh2f = iowqpk3eub2 . p1wsp4msvl -
kjmvupbl2i . Saturation_UpperSat_eo55tnq2by ; _rtZCSV -> mrl2anhzoj =
iowqpk3eub2 . p1wsp4msvl - kjmvupbl2i . Saturation_LowerSat_l32n30czhn ;
_rtZCSV -> nkt40mqyk5 = iowqpk3eub2 . pjeugxnijx - kjmvupbl2i .
Saturation1_UpperSat ; _rtZCSV -> mzvvwy2jko = iowqpk3eub2 . pjeugxnijx -
kjmvupbl2i . Saturation1_LowerSat ; _rtZCSV -> l4jjin13m4 = iowqpk3eub2 .
hkfoqcrcaa - kjmvupbl2i . Saturation_UpperSat_petchupvyj ; _rtZCSV ->
fqh42shget = iowqpk3eub2 . hkfoqcrcaa - kjmvupbl2i .
Saturation_LowerSat_deqaxwlb4p ; _rtZCSV -> it1ks1knk1 = iowqpk3eub2 .
fygmwizxbe - kjmvupbl2i . Saturation1_UpperSat_jybwri54h2 ; _rtZCSV ->
hkjecwkoxq = iowqpk3eub2 . fygmwizxbe - kjmvupbl2i .
Saturation1_LowerSat_indvuhds5q ; _rtZCSV -> idcagc5jv4 = iowqpk3eub2 .
iqd4x5zmdq - kjmvupbl2i . Saturation_UpperSat_ffmhckns0u ; _rtZCSV ->
et32jteqej = iowqpk3eub2 . iqd4x5zmdq - kjmvupbl2i .
Saturation_LowerSat_git52jcjbr ; _rtZCSV -> jvhl4pwkuk = iowqpk3eub2 .
bwgdzgdu1v - kjmvupbl2i . HitCrossing_Offset ; } void MdlTerminate ( void ) {
ese1g5rr1h ( & ( cz5yqt3r3xb . lofhsz2swn . rtm ) ) ; lktaxgo5iz ( & (
cz5yqt3r3xb . hukxwubwy0 . rtm ) ) ; labuig2vc2 ( & ( cz5yqt3r3xb .
kqktv02dou . rtm ) ) ; { if ( cz5yqt3r3xb . kzgixjdqqa . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . kzgixjdqqa . AQHandles ) ; } } { if (
cz5yqt3r3xb . gynuv0krsy . AQHandles ) { sdiTerminateStreaming ( &
cz5yqt3r3xb . gynuv0krsy . AQHandles ) ; } } { if ( cz5yqt3r3xb . cismfzyk15
. AQHandles ) { sdiTerminateStreaming ( & cz5yqt3r3xb . cismfzyk15 .
AQHandles ) ; } } { if ( cz5yqt3r3xb . dqdopzr2jv . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . dqdopzr2jv . AQHandles ) ; } } { if (
cz5yqt3r3xb . ate5v5wkj2 . AQHandles ) { sdiTerminateStreaming ( &
cz5yqt3r3xb . ate5v5wkj2 . AQHandles ) ; } } { if ( cz5yqt3r3xb . cj0ldup5gu
. AQHandles ) { sdiTerminateStreaming ( & cz5yqt3r3xb . cj0ldup5gu .
AQHandles ) ; } } { if ( cz5yqt3r3xb . jgeac3tq21 . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . jgeac3tq21 . AQHandles ) ; } } { if (
cz5yqt3r3xb . irudyghn3o . AQHandles ) { sdiTerminateStreaming ( &
cz5yqt3r3xb . irudyghn3o . AQHandles ) ; } } { if ( cz5yqt3r3xb . nikehp134v
. AQHandles ) { sdiTerminateStreaming ( & cz5yqt3r3xb . nikehp134v .
AQHandles ) ; } } { if ( cz5yqt3r3xb . gxisg0jsgi . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . gxisg0jsgi . AQHandles ) ; } } { if (
cz5yqt3r3xb . ibizqnzh0w . AQHandles ) { sdiTerminateStreaming ( &
cz5yqt3r3xb . ibizqnzh0w . AQHandles ) ; } } { if ( cz5yqt3r3xb . aj1d134nmk
. AQHandles ) { sdiTerminateStreaming ( & cz5yqt3r3xb . aj1d134nmk .
AQHandles ) ; } } { if ( cz5yqt3r3xb . frybx0mj1e . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . frybx0mj1e . AQHandles ) ; } } { if (
cz5yqt3r3xb . kx02fuyglo . AQHandles ) { sdiTerminateStreaming ( &
cz5yqt3r3xb . kx02fuyglo . AQHandles ) ; } } { if ( cz5yqt3r3xb . ivzabugs2u
. AQHandles ) { sdiTerminateStreaming ( & cz5yqt3r3xb . ivzabugs2u .
AQHandles ) ; } } { if ( cz5yqt3r3xb . jzwhcyoyki . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . jzwhcyoyki . AQHandles ) ; } } { if (
cz5yqt3r3xb . bqlccsba5g . AQHandles ) { sdiTerminateStreaming ( &
cz5yqt3r3xb . bqlccsba5g . AQHandles ) ; } } { if ( cz5yqt3r3xb . i01ezsocmb
. AQHandles ) { sdiTerminateStreaming ( & cz5yqt3r3xb . i01ezsocmb .
AQHandles ) ; } } { if ( cz5yqt3r3xb . hlhqdk1445 . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . hlhqdk1445 . AQHandles ) ; } } }
static void mr_SparkEV_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) ; static void
mr_SparkEV_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_SparkEV_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_SparkEV_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_SparkEV_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_SparkEV_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_SparkEV_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) ; static uint_T
mr_SparkEV_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_SparkEV_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_SparkEV_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_SparkEV_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_SparkEV_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_SparkEV_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_SparkEV_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_SparkEV_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_SparkEV_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T
fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray
, i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; }
mxArray * mr_SparkEV_GetDWork ( ) { static const char * ssDWFieldNames [ 3 ]
= { "iowqpk3eub2" , "cz5yqt3r3xb" , "noe4wlvctth" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_SparkEV_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
iowqpk3eub2 ) , sizeof ( iowqpk3eub2 ) ) ; { static const char *
rtdwDataFieldNames [ 106 ] = { "cz5yqt3r3xb.lofhsz2swn" ,
"cz5yqt3r3xb.kqktv02dou" , "cz5yqt3r3xb.hukxwubwy0" ,
"cz5yqt3r3xb.ovftuesk53" , "cz5yqt3r3xb.kodqgqrf0p" ,
"cz5yqt3r3xb.eo23of04rz" , "cz5yqt3r3xb.ho5bua3cli" ,
"cz5yqt3r3xb.oqnelch0g4" , "cz5yqt3r3xb.lgs1ws31ib" ,
"cz5yqt3r3xb.hgdclbpf45" , "cz5yqt3r3xb.dfvfksmo3u" ,
"cz5yqt3r3xb.j0t5dz02te" , "cz5yqt3r3xb.d0jgs1xeud" ,
"cz5yqt3r3xb.i5wargkafk" , "cz5yqt3r3xb.noizxcaj0u" ,
"cz5yqt3r3xb.ahz4qvibsf" , "cz5yqt3r3xb.gelfja001m" ,
"cz5yqt3r3xb.im2dnqr2y0" , "cz5yqt3r3xb.ivmw2mj2cj" ,
"cz5yqt3r3xb.e2o3ismpif" , "cz5yqt3r3xb.hqv0oirn0q" ,
"cz5yqt3r3xb.lzovmgc1ye" , "cz5yqt3r3xb.ggdayeevtv" ,
"cz5yqt3r3xb.ipqlah0gj1" , "cz5yqt3r3xb.dfwjuauqhh" ,
"cz5yqt3r3xb.dci24ewo3n" , "cz5yqt3r3xb.n20oxvozfr" ,
"cz5yqt3r3xb.akmdrfe3wk" , "cz5yqt3r3xb.asn3ailf0a" ,
"cz5yqt3r3xb.eck5rxblzt" , "cz5yqt3r3xb.em1wbmdjow" ,
"cz5yqt3r3xb.jmm4c105ye" , "cz5yqt3r3xb.f05boyvyxi" ,
"cz5yqt3r3xb.dukvvezhh4" , "cz5yqt3r3xb.hndyq1p4da" ,
"cz5yqt3r3xb.mhe3tr5m1h" , "cz5yqt3r3xb.metkb44aex" ,
"cz5yqt3r3xb.bk5zchkp0d" , "cz5yqt3r3xb.csyymkwdxj" ,
"cz5yqt3r3xb.dkt3lps5cz" , "cz5yqt3r3xb.phh4r25dqx" ,
"cz5yqt3r3xb.jpnae2oihw" , "cz5yqt3r3xb.himiqz4m3m" ,
"cz5yqt3r3xb.cwrrpplnpb" , "cz5yqt3r3xb.plgoio1geg" ,
"cz5yqt3r3xb.kblv4axo3c" , "cz5yqt3r3xb.m0ix3twyqi" ,
"cz5yqt3r3xb.kqqvkns214" , "cz5yqt3r3xb.hg1heoe0ab" ,
"cz5yqt3r3xb.j3jayeyudr" , "cz5yqt3r3xb.johw44ce4i" ,
"cz5yqt3r3xb.o13svxvssq" , "cz5yqt3r3xb.hnc4qrwkcy" ,
"cz5yqt3r3xb.nremqoghxn" , "cz5yqt3r3xb.azwx5q01st" ,
"cz5yqt3r3xb.b0kxfxynn3" , "cz5yqt3r3xb.j0engehfzs" ,
"cz5yqt3r3xb.mm5oiqqh5r" , "cz5yqt3r3xb.e2wr3vcmsf" ,
"cz5yqt3r3xb.pumuolxchk" , "cz5yqt3r3xb.cfbyafp2yp" ,
"cz5yqt3r3xb.nu1w3dp3or" , "cz5yqt3r3xb.k0uf3b30j1" ,
"cz5yqt3r3xb.fx2rxnzutk" , "cz5yqt3r3xb.pgsfdyvzg3" ,
"cz5yqt3r3xb.jekggfsago" , "cz5yqt3r3xb.dpc4gpu00e" ,
"cz5yqt3r3xb.ldpanoehpw" , "cz5yqt3r3xb.iyzfufaeyj" ,
"cz5yqt3r3xb.hxfbtrll0m" , "cz5yqt3r3xb.dwnfs4t0ur.k44bc5mjbl" ,
"cz5yqt3r3xb.dwnfs4t0ur.o5luu5smdl" , "cz5yqt3r3xb.fuob0ddam2h.k44bc5mjbl" ,
"cz5yqt3r3xb.fuob0ddam2h.o5luu5smdl" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.pggkitt2pt" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.aikbu101md" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.gijsd2nxsh" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.bke41ski0c" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.cwd4vpw3zu" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.iulkqj0r4p" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.oqzdcqvnxt" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.ckcpmdbuxk" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.ifu0e5plsq" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.ng4ch3t5fg" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.i2d3dblxse" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.jl5e4qcf5y.mqxu23dmqr" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.n4c32cozqj.heycmssseq" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.pjngj1ll1b.kq21ggndfv" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.pjngj1ll1b.nvixjavuae" ,
"cz5yqt3r3xb.ngpegw05gp[0].neijo20b0e.o4j5vlwe14.b1zred4rog" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.jtdeo3xwpe" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.gtiwugh4xn" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.no1vbxkkq3" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.inlsalkodh" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.hor5qoll31" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.hlbnjoqlho" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.ceaeqbhd2w" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.jeid4kmorf" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.mzmvogimwr" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.hg1u13cliy" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.ixpxwmj3uh" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.koua2ggizf0.mqxu23dmqr" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.er0qshcg2fb.heycmssseq" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.ost4s50i5x5.kq21ggndfv" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.ost4s50i5x5.nvixjavuae" ,
"cz5yqt3r3xb.gugymbw2iq[0].eq332hab4o.bsy0pqewaju.b1zred4rog" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 106 , rtdwDataFieldNames ) ; int k0
; mxSetFieldByNumber ( rtdwData , 0 , 74 , mxCreateUninitNumericMatrix ( 1 ,
1 * sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . pggkitt2pt ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 75 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ]
. neijo20b0e . aikbu101md ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber
( rtdwData , 0 , 76 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . gijsd2nxsh ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 77 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ]
. neijo20b0e . bke41ski0c ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber
( rtdwData , 0 , 78 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . cwd4vpw3zu ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 79 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ]
. neijo20b0e . iulkqj0r4p ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber
( rtdwData , 0 , 80 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . oqzdcqvnxt ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 81 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ]
. neijo20b0e . ckcpmdbuxk ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber
( rtdwData , 0 , 82 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . ifu0e5plsq ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 83 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ]
. neijo20b0e . ng4ch3t5fg ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber
( rtdwData , 0 , 84 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . i2d3dblxse ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 85 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ]
. neijo20b0e . jl5e4qcf5y . mqxu23dmqr ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 86 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . n4c32cozqj .
heycmssseq ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 87 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb .
ngpegw05gp [ 0 ] . neijo20b0e . pjngj1ll1b . kq21ggndfv ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 88 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ]
. neijo20b0e . pjngj1ll1b . nvixjavuae ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 89 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . o4j5vlwe14 .
b1zred4rog ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 90 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb .
gugymbw2iq [ 0 ] . eq332hab4o . jtdeo3xwpe ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 91 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . gtiwugh4xn ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 92 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ]
. eq332hab4o . no1vbxkkq3 ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber
( rtdwData , 0 , 93 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof (
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . inlsalkodh ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 94 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ]
. eq332hab4o . hor5qoll31 ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber
( rtdwData , 0 , 95 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof (
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . hlbnjoqlho ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 96 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ]
. eq332hab4o . ceaeqbhd2w ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber
( rtdwData , 0 , 97 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof (
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . jeid4kmorf ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 98 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ]
. eq332hab4o . mzmvogimwr ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber
( rtdwData , 0 , 99 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof (
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . hg1u13cliy ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 100 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ]
. eq332hab4o . ixpxwmj3uh ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber
( rtdwData , 0 , 101 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof (
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . koua2ggizf0 . mqxu23dmqr ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 102 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ]
. eq332hab4o . er0qshcg2fb . heycmssseq ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 103 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . ost4s50i5x5 .
kq21ggndfv ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 104 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb .
gugymbw2iq [ 0 ] . eq332hab4o . ost4s50i5x5 . nvixjavuae ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 105 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ]
. eq332hab4o . bsy0pqewaju . b1zred4rog ) , mxUINT8_CLASS , mxREAL ) ) ; {
mxArray * varData = mr_OpenLoopBraking_GetDWork ( & ( cz5yqt3r3xb .
lofhsz2swn ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 0 , varData ) ; } {
mxArray * varData = mr_DriverPassThrough_GetDWork ( & ( cz5yqt3r3xb .
kqktv02dou ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 1 , varData ) ; } {
mxArray * varData = mr_EvPowertrainController_GetDWork ( & ( cz5yqt3r3xb .
hukxwubwy0 ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 2 , varData ) ; }
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
cz5yqt3r3xb . ovftuesk53 ) , sizeof ( cz5yqt3r3xb . ovftuesk53 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
cz5yqt3r3xb . kodqgqrf0p ) , sizeof ( cz5yqt3r3xb . kodqgqrf0p ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
cz5yqt3r3xb . eo23of04rz ) , sizeof ( cz5yqt3r3xb . eo23of04rz ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
cz5yqt3r3xb . ho5bua3cli ) , sizeof ( cz5yqt3r3xb . ho5bua3cli ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
cz5yqt3r3xb . oqnelch0g4 ) , sizeof ( cz5yqt3r3xb . oqnelch0g4 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
cz5yqt3r3xb . lgs1ws31ib ) , sizeof ( cz5yqt3r3xb . lgs1ws31ib ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
cz5yqt3r3xb . hgdclbpf45 ) , sizeof ( cz5yqt3r3xb . hgdclbpf45 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
cz5yqt3r3xb . dfvfksmo3u ) , sizeof ( cz5yqt3r3xb . dfvfksmo3u ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
cz5yqt3r3xb . j0t5dz02te ) , sizeof ( cz5yqt3r3xb . j0t5dz02te ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
cz5yqt3r3xb . d0jgs1xeud ) , sizeof ( cz5yqt3r3xb . d0jgs1xeud ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
cz5yqt3r3xb . i5wargkafk ) , sizeof ( cz5yqt3r3xb . i5wargkafk ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & (
cz5yqt3r3xb . noizxcaj0u ) , sizeof ( cz5yqt3r3xb . noizxcaj0u ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & (
cz5yqt3r3xb . ahz4qvibsf ) , sizeof ( cz5yqt3r3xb . ahz4qvibsf ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & (
cz5yqt3r3xb . gelfja001m ) , sizeof ( cz5yqt3r3xb . gelfja001m ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & (
cz5yqt3r3xb . im2dnqr2y0 ) , sizeof ( cz5yqt3r3xb . im2dnqr2y0 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & (
cz5yqt3r3xb . ivmw2mj2cj ) , sizeof ( cz5yqt3r3xb . ivmw2mj2cj ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & (
cz5yqt3r3xb . e2o3ismpif ) , sizeof ( cz5yqt3r3xb . e2o3ismpif ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & (
cz5yqt3r3xb . hqv0oirn0q ) , sizeof ( cz5yqt3r3xb . hqv0oirn0q ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & (
cz5yqt3r3xb . lzovmgc1ye ) , sizeof ( cz5yqt3r3xb . lzovmgc1ye ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & (
cz5yqt3r3xb . ggdayeevtv ) , sizeof ( cz5yqt3r3xb . ggdayeevtv ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & (
cz5yqt3r3xb . ipqlah0gj1 ) , sizeof ( cz5yqt3r3xb . ipqlah0gj1 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & (
cz5yqt3r3xb . dfwjuauqhh ) , sizeof ( cz5yqt3r3xb . dfwjuauqhh ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & (
cz5yqt3r3xb . dci24ewo3n ) , sizeof ( cz5yqt3r3xb . dci24ewo3n ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & (
cz5yqt3r3xb . n20oxvozfr ) , sizeof ( cz5yqt3r3xb . n20oxvozfr ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) & (
cz5yqt3r3xb . akmdrfe3wk ) , sizeof ( cz5yqt3r3xb . akmdrfe3wk ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * ) & (
cz5yqt3r3xb . asn3ailf0a ) , sizeof ( cz5yqt3r3xb . asn3ailf0a ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * ) & (
cz5yqt3r3xb . eck5rxblzt ) , sizeof ( cz5yqt3r3xb . eck5rxblzt ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * ) & (
cz5yqt3r3xb . em1wbmdjow ) , sizeof ( cz5yqt3r3xb . em1wbmdjow ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * ) & (
cz5yqt3r3xb . jmm4c105ye ) , sizeof ( cz5yqt3r3xb . jmm4c105ye ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void * ) & (
cz5yqt3r3xb . f05boyvyxi ) , sizeof ( cz5yqt3r3xb . f05boyvyxi ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * ) & (
cz5yqt3r3xb . dukvvezhh4 ) , sizeof ( cz5yqt3r3xb . dukvvezhh4 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * ) & (
cz5yqt3r3xb . hndyq1p4da ) , sizeof ( cz5yqt3r3xb . hndyq1p4da ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void * ) & (
cz5yqt3r3xb . mhe3tr5m1h ) , sizeof ( cz5yqt3r3xb . mhe3tr5m1h ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void * ) & (
cz5yqt3r3xb . metkb44aex ) , sizeof ( cz5yqt3r3xb . metkb44aex ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void * ) & (
cz5yqt3r3xb . bk5zchkp0d ) , sizeof ( cz5yqt3r3xb . bk5zchkp0d ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void * ) & (
cz5yqt3r3xb . csyymkwdxj ) , sizeof ( cz5yqt3r3xb . csyymkwdxj ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void * ) & (
cz5yqt3r3xb . dkt3lps5cz ) , sizeof ( cz5yqt3r3xb . dkt3lps5cz ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void * ) & (
cz5yqt3r3xb . phh4r25dqx ) , sizeof ( cz5yqt3r3xb . phh4r25dqx ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void * ) & (
cz5yqt3r3xb . jpnae2oihw ) , sizeof ( cz5yqt3r3xb . jpnae2oihw ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void * ) & (
cz5yqt3r3xb . himiqz4m3m ) , sizeof ( cz5yqt3r3xb . himiqz4m3m ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void * ) & (
cz5yqt3r3xb . cwrrpplnpb ) , sizeof ( cz5yqt3r3xb . cwrrpplnpb ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void * ) & (
cz5yqt3r3xb . plgoio1geg ) , sizeof ( cz5yqt3r3xb . plgoio1geg ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void * ) & (
cz5yqt3r3xb . kblv4axo3c ) , sizeof ( cz5yqt3r3xb . kblv4axo3c ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void * ) & (
cz5yqt3r3xb . m0ix3twyqi ) , sizeof ( cz5yqt3r3xb . m0ix3twyqi ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void * ) & (
cz5yqt3r3xb . kqqvkns214 ) , sizeof ( cz5yqt3r3xb . kqqvkns214 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void * ) & (
cz5yqt3r3xb . hg1heoe0ab ) , sizeof ( cz5yqt3r3xb . hg1heoe0ab ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void * ) & (
cz5yqt3r3xb . j3jayeyudr ) , sizeof ( cz5yqt3r3xb . j3jayeyudr ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void * ) & (
cz5yqt3r3xb . johw44ce4i ) , sizeof ( cz5yqt3r3xb . johw44ce4i ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void * ) & (
cz5yqt3r3xb . o13svxvssq ) , sizeof ( cz5yqt3r3xb . o13svxvssq ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void * ) & (
cz5yqt3r3xb . hnc4qrwkcy ) , sizeof ( cz5yqt3r3xb . hnc4qrwkcy ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void * ) & (
cz5yqt3r3xb . nremqoghxn ) , sizeof ( cz5yqt3r3xb . nremqoghxn ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void * ) & (
cz5yqt3r3xb . azwx5q01st ) , sizeof ( cz5yqt3r3xb . azwx5q01st ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void * ) & (
cz5yqt3r3xb . b0kxfxynn3 ) , sizeof ( cz5yqt3r3xb . b0kxfxynn3 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void * ) & (
cz5yqt3r3xb . j0engehfzs ) , sizeof ( cz5yqt3r3xb . j0engehfzs ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void * ) & (
cz5yqt3r3xb . mm5oiqqh5r ) , sizeof ( cz5yqt3r3xb . mm5oiqqh5r ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void * ) & (
cz5yqt3r3xb . e2wr3vcmsf ) , sizeof ( cz5yqt3r3xb . e2wr3vcmsf ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void * ) & (
cz5yqt3r3xb . pumuolxchk ) , sizeof ( cz5yqt3r3xb . pumuolxchk ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const void * ) & (
cz5yqt3r3xb . cfbyafp2yp ) , sizeof ( cz5yqt3r3xb . cfbyafp2yp ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void * ) & (
cz5yqt3r3xb . nu1w3dp3or ) , sizeof ( cz5yqt3r3xb . nu1w3dp3or ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const void * ) & (
cz5yqt3r3xb . k0uf3b30j1 ) , sizeof ( cz5yqt3r3xb . k0uf3b30j1 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const void * ) & (
cz5yqt3r3xb . fx2rxnzutk ) , sizeof ( cz5yqt3r3xb . fx2rxnzutk ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void * ) & (
cz5yqt3r3xb . pgsfdyvzg3 ) , sizeof ( cz5yqt3r3xb . pgsfdyvzg3 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void * ) & (
cz5yqt3r3xb . jekggfsago ) , sizeof ( cz5yqt3r3xb . jekggfsago ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void * ) & (
cz5yqt3r3xb . dpc4gpu00e ) , sizeof ( cz5yqt3r3xb . dpc4gpu00e ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void * ) & (
cz5yqt3r3xb . ldpanoehpw ) , sizeof ( cz5yqt3r3xb . ldpanoehpw ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const void * ) & (
cz5yqt3r3xb . iyzfufaeyj ) , sizeof ( cz5yqt3r3xb . iyzfufaeyj ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const void * ) & (
cz5yqt3r3xb . hxfbtrll0m ) , sizeof ( cz5yqt3r3xb . hxfbtrll0m ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const void * ) & (
cz5yqt3r3xb . dwnfs4t0ur . k44bc5mjbl ) , sizeof ( cz5yqt3r3xb . dwnfs4t0ur .
k44bc5mjbl ) ) ; mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 71 , ( const
void * ) & ( cz5yqt3r3xb . dwnfs4t0ur . o5luu5smdl ) , sizeof ( cz5yqt3r3xb .
dwnfs4t0ur . o5luu5smdl ) ) ; mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 ,
72 , ( const void * ) & ( cz5yqt3r3xb . fuob0ddam2h . k44bc5mjbl ) , sizeof (
cz5yqt3r3xb . fuob0ddam2h . k44bc5mjbl ) ) ; mr_SparkEV_cacheDataAsMxArray (
rtdwData , 0 , 73 , ( const void * ) & ( cz5yqt3r3xb . fuob0ddam2h .
o5luu5smdl ) , sizeof ( cz5yqt3r3xb . fuob0ddam2h . o5luu5smdl ) ) ; for ( k0
= 0 ; k0 < 1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 74 , offset0 , & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . pggkitt2pt ) , sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . pggkitt2pt ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 75 , offset0 , & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . aikbu101md ) , sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . aikbu101md ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 76 , offset0 , & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . gijsd2nxsh ) , sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . gijsd2nxsh ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 77 , offset0 , & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . bke41ski0c ) , sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . bke41ski0c ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 78 , offset0 , & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . cwd4vpw3zu ) , sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . cwd4vpw3zu ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 79 , offset0 , & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . iulkqj0r4p ) , sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . iulkqj0r4p ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 80 , offset0 , & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . oqzdcqvnxt ) , sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . oqzdcqvnxt ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 81 , offset0 , & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . ckcpmdbuxk ) , sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . ckcpmdbuxk ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 82 , offset0 , & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . ifu0e5plsq ) , sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . ifu0e5plsq ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 83 , offset0 , & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . ng4ch3t5fg ) , sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . ng4ch3t5fg ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 84 , offset0 , & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . i2d3dblxse ) , sizeof (
cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . i2d3dblxse ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 85 , offset0 , & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . jl5e4qcf5y . mqxu23dmqr ) ,
sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . jl5e4qcf5y .
mqxu23dmqr ) ) ; mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 86
, offset0 , & ( cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . n4c32cozqj .
heycmssseq ) , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e .
n4c32cozqj . heycmssseq ) ) ; mr_SparkEV_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 87 , offset0 , & ( cz5yqt3r3xb . ngpegw05gp [ k0 ] .
neijo20b0e . pjngj1ll1b . kq21ggndfv ) , sizeof ( cz5yqt3r3xb . ngpegw05gp [
0 ] . neijo20b0e . pjngj1ll1b . kq21ggndfv ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 88 , offset0 , & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . pjngj1ll1b . nvixjavuae ) ,
sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . pjngj1ll1b .
nvixjavuae ) ) ; mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 89
, offset0 , & ( cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . o4j5vlwe14 .
b1zred4rog ) , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e .
o4j5vlwe14 . b1zred4rog ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ; mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0
, 90 , offset0 , & ( cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o .
jtdeo3xwpe ) , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
jtdeo3xwpe ) ) ; mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 91
, offset0 , & ( cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . gtiwugh4xn ) ,
sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . gtiwugh4xn ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 92 , offset0 , & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . no1vbxkkq3 ) , sizeof (
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . no1vbxkkq3 ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 93 , offset0 , & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . inlsalkodh ) , sizeof (
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . inlsalkodh ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 94 , offset0 , & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . hor5qoll31 ) , sizeof (
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . hor5qoll31 ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 95 , offset0 , & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . hlbnjoqlho ) , sizeof (
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . hlbnjoqlho ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 96 , offset0 , & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . ceaeqbhd2w ) , sizeof (
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . ceaeqbhd2w ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 97 , offset0 , & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . jeid4kmorf ) , sizeof (
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . jeid4kmorf ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 98 , offset0 , & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . mzmvogimwr ) , sizeof (
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . mzmvogimwr ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 99 , offset0 , & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . hg1u13cliy ) , sizeof (
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . hg1u13cliy ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 100 , offset0 , & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . ixpxwmj3uh ) , sizeof (
cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . ixpxwmj3uh ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 101 , offset0 , & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . koua2ggizf0 . mqxu23dmqr ) ,
sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . koua2ggizf0 .
mqxu23dmqr ) ) ; mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 102
, offset0 , & ( cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . er0qshcg2fb .
heycmssseq ) , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
er0qshcg2fb . heycmssseq ) ) ; mr_SparkEV_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 103 , offset0 , & ( cz5yqt3r3xb . gugymbw2iq [ k0 ] .
eq332hab4o . ost4s50i5x5 . kq21ggndfv ) , sizeof ( cz5yqt3r3xb . gugymbw2iq [
0 ] . eq332hab4o . ost4s50i5x5 . kq21ggndfv ) ) ;
mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 104 , offset0 , & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . ost4s50i5x5 . nvixjavuae ) ,
sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . ost4s50i5x5 .
nvixjavuae ) ) ; mr_SparkEV_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 105
, offset0 , & ( cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . bsy0pqewaju .
b1zred4rog ) , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
bsy0pqewaju . b1zred4rog ) ) ; } mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData
) ; } mr_SparkEV_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const void * ) & (
noe4wlvctth ) , sizeof ( noe4wlvctth ) ) ; return ssDW ; } void
mr_SparkEV_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_SparkEV_restoreDataFromMxArray ( ( void * ) & ( iowqpk3eub2 ) , ssDW , 0 ,
0 , sizeof ( iowqpk3eub2 ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; int k0 ; mr_OpenLoopBraking_SetDWork (
& ( cz5yqt3r3xb . lofhsz2swn ) , mxGetFieldByNumber ( rtdwData , 0 , 0 ) ) ;
mr_DriverPassThrough_SetDWork ( & ( cz5yqt3r3xb . kqktv02dou ) ,
mxGetFieldByNumber ( rtdwData , 0 , 1 ) ) ;
mr_EvPowertrainController_SetDWork ( & ( cz5yqt3r3xb . hukxwubwy0 ) ,
mxGetFieldByNumber ( rtdwData , 0 , 2 ) ) ; mr_SparkEV_restoreDataFromMxArray
( ( void * ) & ( cz5yqt3r3xb . ovftuesk53 ) , rtdwData , 0 , 3 , sizeof (
cz5yqt3r3xb . ovftuesk53 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * )
& ( cz5yqt3r3xb . kodqgqrf0p ) , rtdwData , 0 , 4 , sizeof ( cz5yqt3r3xb .
kodqgqrf0p ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . eo23of04rz ) , rtdwData , 0 , 5 , sizeof ( cz5yqt3r3xb .
eo23of04rz ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . ho5bua3cli ) , rtdwData , 0 , 6 , sizeof ( cz5yqt3r3xb .
ho5bua3cli ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . oqnelch0g4 ) , rtdwData , 0 , 7 , sizeof ( cz5yqt3r3xb .
oqnelch0g4 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . lgs1ws31ib ) , rtdwData , 0 , 8 , sizeof ( cz5yqt3r3xb .
lgs1ws31ib ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . hgdclbpf45 ) , rtdwData , 0 , 9 , sizeof ( cz5yqt3r3xb .
hgdclbpf45 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . dfvfksmo3u ) , rtdwData , 0 , 10 , sizeof ( cz5yqt3r3xb .
dfvfksmo3u ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . j0t5dz02te ) , rtdwData , 0 , 11 , sizeof ( cz5yqt3r3xb .
j0t5dz02te ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . d0jgs1xeud ) , rtdwData , 0 , 12 , sizeof ( cz5yqt3r3xb .
d0jgs1xeud ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . i5wargkafk ) , rtdwData , 0 , 13 , sizeof ( cz5yqt3r3xb .
i5wargkafk ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . noizxcaj0u ) , rtdwData , 0 , 14 , sizeof ( cz5yqt3r3xb .
noizxcaj0u ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . ahz4qvibsf ) , rtdwData , 0 , 15 , sizeof ( cz5yqt3r3xb .
ahz4qvibsf ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . gelfja001m ) , rtdwData , 0 , 16 , sizeof ( cz5yqt3r3xb .
gelfja001m ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . im2dnqr2y0 ) , rtdwData , 0 , 17 , sizeof ( cz5yqt3r3xb .
im2dnqr2y0 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . ivmw2mj2cj ) , rtdwData , 0 , 18 , sizeof ( cz5yqt3r3xb .
ivmw2mj2cj ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . e2o3ismpif ) , rtdwData , 0 , 19 , sizeof ( cz5yqt3r3xb .
e2o3ismpif ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . hqv0oirn0q ) , rtdwData , 0 , 20 , sizeof ( cz5yqt3r3xb .
hqv0oirn0q ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . lzovmgc1ye ) , rtdwData , 0 , 21 , sizeof ( cz5yqt3r3xb .
lzovmgc1ye ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . ggdayeevtv ) , rtdwData , 0 , 22 , sizeof ( cz5yqt3r3xb .
ggdayeevtv ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . ipqlah0gj1 ) , rtdwData , 0 , 23 , sizeof ( cz5yqt3r3xb .
ipqlah0gj1 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . dfwjuauqhh ) , rtdwData , 0 , 24 , sizeof ( cz5yqt3r3xb .
dfwjuauqhh ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . dci24ewo3n ) , rtdwData , 0 , 25 , sizeof ( cz5yqt3r3xb .
dci24ewo3n ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . n20oxvozfr ) , rtdwData , 0 , 26 , sizeof ( cz5yqt3r3xb .
n20oxvozfr ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . akmdrfe3wk ) , rtdwData , 0 , 27 , sizeof ( cz5yqt3r3xb .
akmdrfe3wk ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . asn3ailf0a ) , rtdwData , 0 , 28 , sizeof ( cz5yqt3r3xb .
asn3ailf0a ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . eck5rxblzt ) , rtdwData , 0 , 29 , sizeof ( cz5yqt3r3xb .
eck5rxblzt ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . em1wbmdjow ) , rtdwData , 0 , 30 , sizeof ( cz5yqt3r3xb .
em1wbmdjow ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . jmm4c105ye ) , rtdwData , 0 , 31 , sizeof ( cz5yqt3r3xb .
jmm4c105ye ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . f05boyvyxi ) , rtdwData , 0 , 32 , sizeof ( cz5yqt3r3xb .
f05boyvyxi ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . dukvvezhh4 ) , rtdwData , 0 , 33 , sizeof ( cz5yqt3r3xb .
dukvvezhh4 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . hndyq1p4da ) , rtdwData , 0 , 34 , sizeof ( cz5yqt3r3xb .
hndyq1p4da ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . mhe3tr5m1h ) , rtdwData , 0 , 35 , sizeof ( cz5yqt3r3xb .
mhe3tr5m1h ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . metkb44aex ) , rtdwData , 0 , 36 , sizeof ( cz5yqt3r3xb .
metkb44aex ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . bk5zchkp0d ) , rtdwData , 0 , 37 , sizeof ( cz5yqt3r3xb .
bk5zchkp0d ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . csyymkwdxj ) , rtdwData , 0 , 38 , sizeof ( cz5yqt3r3xb .
csyymkwdxj ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . dkt3lps5cz ) , rtdwData , 0 , 39 , sizeof ( cz5yqt3r3xb .
dkt3lps5cz ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . phh4r25dqx ) , rtdwData , 0 , 40 , sizeof ( cz5yqt3r3xb .
phh4r25dqx ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . jpnae2oihw ) , rtdwData , 0 , 41 , sizeof ( cz5yqt3r3xb .
jpnae2oihw ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . himiqz4m3m ) , rtdwData , 0 , 42 , sizeof ( cz5yqt3r3xb .
himiqz4m3m ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . cwrrpplnpb ) , rtdwData , 0 , 43 , sizeof ( cz5yqt3r3xb .
cwrrpplnpb ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . plgoio1geg ) , rtdwData , 0 , 44 , sizeof ( cz5yqt3r3xb .
plgoio1geg ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . kblv4axo3c ) , rtdwData , 0 , 45 , sizeof ( cz5yqt3r3xb .
kblv4axo3c ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . m0ix3twyqi ) , rtdwData , 0 , 46 , sizeof ( cz5yqt3r3xb .
m0ix3twyqi ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . kqqvkns214 ) , rtdwData , 0 , 47 , sizeof ( cz5yqt3r3xb .
kqqvkns214 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . hg1heoe0ab ) , rtdwData , 0 , 48 , sizeof ( cz5yqt3r3xb .
hg1heoe0ab ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . j3jayeyudr ) , rtdwData , 0 , 49 , sizeof ( cz5yqt3r3xb .
j3jayeyudr ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . johw44ce4i ) , rtdwData , 0 , 50 , sizeof ( cz5yqt3r3xb .
johw44ce4i ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . o13svxvssq ) , rtdwData , 0 , 51 , sizeof ( cz5yqt3r3xb .
o13svxvssq ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . hnc4qrwkcy ) , rtdwData , 0 , 52 , sizeof ( cz5yqt3r3xb .
hnc4qrwkcy ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . nremqoghxn ) , rtdwData , 0 , 53 , sizeof ( cz5yqt3r3xb .
nremqoghxn ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . azwx5q01st ) , rtdwData , 0 , 54 , sizeof ( cz5yqt3r3xb .
azwx5q01st ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . b0kxfxynn3 ) , rtdwData , 0 , 55 , sizeof ( cz5yqt3r3xb .
b0kxfxynn3 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . j0engehfzs ) , rtdwData , 0 , 56 , sizeof ( cz5yqt3r3xb .
j0engehfzs ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . mm5oiqqh5r ) , rtdwData , 0 , 57 , sizeof ( cz5yqt3r3xb .
mm5oiqqh5r ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . e2wr3vcmsf ) , rtdwData , 0 , 58 , sizeof ( cz5yqt3r3xb .
e2wr3vcmsf ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . pumuolxchk ) , rtdwData , 0 , 59 , sizeof ( cz5yqt3r3xb .
pumuolxchk ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . cfbyafp2yp ) , rtdwData , 0 , 60 , sizeof ( cz5yqt3r3xb .
cfbyafp2yp ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . nu1w3dp3or ) , rtdwData , 0 , 61 , sizeof ( cz5yqt3r3xb .
nu1w3dp3or ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . k0uf3b30j1 ) , rtdwData , 0 , 62 , sizeof ( cz5yqt3r3xb .
k0uf3b30j1 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . fx2rxnzutk ) , rtdwData , 0 , 63 , sizeof ( cz5yqt3r3xb .
fx2rxnzutk ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . pgsfdyvzg3 ) , rtdwData , 0 , 64 , sizeof ( cz5yqt3r3xb .
pgsfdyvzg3 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . jekggfsago ) , rtdwData , 0 , 65 , sizeof ( cz5yqt3r3xb .
jekggfsago ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . dpc4gpu00e ) , rtdwData , 0 , 66 , sizeof ( cz5yqt3r3xb .
dpc4gpu00e ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . ldpanoehpw ) , rtdwData , 0 , 67 , sizeof ( cz5yqt3r3xb .
ldpanoehpw ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . iyzfufaeyj ) , rtdwData , 0 , 68 , sizeof ( cz5yqt3r3xb .
iyzfufaeyj ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . hxfbtrll0m ) , rtdwData , 0 , 69 , sizeof ( cz5yqt3r3xb .
hxfbtrll0m ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . dwnfs4t0ur . k44bc5mjbl ) , rtdwData , 0 , 70 , sizeof (
cz5yqt3r3xb . dwnfs4t0ur . k44bc5mjbl ) ) ; mr_SparkEV_restoreDataFromMxArray
( ( void * ) & ( cz5yqt3r3xb . dwnfs4t0ur . o5luu5smdl ) , rtdwData , 0 , 71
, sizeof ( cz5yqt3r3xb . dwnfs4t0ur . o5luu5smdl ) ) ;
mr_SparkEV_restoreDataFromMxArray ( ( void * ) & ( cz5yqt3r3xb . fuob0ddam2h
. k44bc5mjbl ) , rtdwData , 0 , 72 , sizeof ( cz5yqt3r3xb . fuob0ddam2h .
k44bc5mjbl ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . fuob0ddam2h . o5luu5smdl ) , rtdwData , 0 , 73 , sizeof (
cz5yqt3r3xb . fuob0ddam2h . o5luu5smdl ) ) ; for ( k0 = 0 ; k0 < 1 ; ++ k0 )
{ const mwIndex offset0 = k0 ; mr_SparkEV_restoreDataFromMxArrayWithOffset (
& ( cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . pggkitt2pt ) , rtdwData ,
0 , 74 , offset0 , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e .
pggkitt2pt ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . aikbu101md ) , rtdwData , 0 ,
75 , offset0 , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e .
aikbu101md ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . gijsd2nxsh ) , rtdwData , 0 ,
76 , offset0 , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e .
gijsd2nxsh ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . bke41ski0c ) , rtdwData , 0 ,
77 , offset0 , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e .
bke41ski0c ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . cwd4vpw3zu ) , rtdwData , 0 ,
78 , offset0 , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e .
cwd4vpw3zu ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . iulkqj0r4p ) , rtdwData , 0 ,
79 , offset0 , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e .
iulkqj0r4p ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . oqzdcqvnxt ) , rtdwData , 0 ,
80 , offset0 , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e .
oqzdcqvnxt ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . ckcpmdbuxk ) , rtdwData , 0 ,
81 , offset0 , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e .
ckcpmdbuxk ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . ifu0e5plsq ) , rtdwData , 0 ,
82 , offset0 , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e .
ifu0e5plsq ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . ng4ch3t5fg ) , rtdwData , 0 ,
83 , offset0 , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e .
ng4ch3t5fg ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . i2d3dblxse ) , rtdwData , 0 ,
84 , offset0 , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e .
i2d3dblxse ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . jl5e4qcf5y . mqxu23dmqr ) ,
rtdwData , 0 , 85 , offset0 , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] .
neijo20b0e . jl5e4qcf5y . mqxu23dmqr ) ) ;
mr_SparkEV_restoreDataFromMxArrayWithOffset ( & ( cz5yqt3r3xb . ngpegw05gp [
k0 ] . neijo20b0e . n4c32cozqj . heycmssseq ) , rtdwData , 0 , 86 , offset0 ,
sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . n4c32cozqj .
heycmssseq ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . pjngj1ll1b . kq21ggndfv ) ,
rtdwData , 0 , 87 , offset0 , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] .
neijo20b0e . pjngj1ll1b . kq21ggndfv ) ) ;
mr_SparkEV_restoreDataFromMxArrayWithOffset ( & ( cz5yqt3r3xb . ngpegw05gp [
k0 ] . neijo20b0e . pjngj1ll1b . nvixjavuae ) , rtdwData , 0 , 88 , offset0 ,
sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . pjngj1ll1b .
nvixjavuae ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . ngpegw05gp [ k0 ] . neijo20b0e . o4j5vlwe14 . b1zred4rog ) ,
rtdwData , 0 , 89 , offset0 , sizeof ( cz5yqt3r3xb . ngpegw05gp [ 0 ] .
neijo20b0e . o4j5vlwe14 . b1zred4rog ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 )
{ const mwIndex offset0 = k0 ; mr_SparkEV_restoreDataFromMxArrayWithOffset (
& ( cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . jtdeo3xwpe ) , rtdwData ,
0 , 90 , offset0 , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
jtdeo3xwpe ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . gtiwugh4xn ) , rtdwData , 0 ,
91 , offset0 , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
gtiwugh4xn ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . no1vbxkkq3 ) , rtdwData , 0 ,
92 , offset0 , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
no1vbxkkq3 ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . inlsalkodh ) , rtdwData , 0 ,
93 , offset0 , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
inlsalkodh ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . hor5qoll31 ) , rtdwData , 0 ,
94 , offset0 , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
hor5qoll31 ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . hlbnjoqlho ) , rtdwData , 0 ,
95 , offset0 , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
hlbnjoqlho ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . ceaeqbhd2w ) , rtdwData , 0 ,
96 , offset0 , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
ceaeqbhd2w ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . jeid4kmorf ) , rtdwData , 0 ,
97 , offset0 , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
jeid4kmorf ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . mzmvogimwr ) , rtdwData , 0 ,
98 , offset0 , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
mzmvogimwr ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . hg1u13cliy ) , rtdwData , 0 ,
99 , offset0 , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
hg1u13cliy ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . ixpxwmj3uh ) , rtdwData , 0 ,
100 , offset0 , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o .
ixpxwmj3uh ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . koua2ggizf0 . mqxu23dmqr ) ,
rtdwData , 0 , 101 , offset0 , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] .
eq332hab4o . koua2ggizf0 . mqxu23dmqr ) ) ;
mr_SparkEV_restoreDataFromMxArrayWithOffset ( & ( cz5yqt3r3xb . gugymbw2iq [
k0 ] . eq332hab4o . er0qshcg2fb . heycmssseq ) , rtdwData , 0 , 102 , offset0
, sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . er0qshcg2fb .
heycmssseq ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . ost4s50i5x5 . kq21ggndfv ) ,
rtdwData , 0 , 103 , offset0 , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] .
eq332hab4o . ost4s50i5x5 . kq21ggndfv ) ) ;
mr_SparkEV_restoreDataFromMxArrayWithOffset ( & ( cz5yqt3r3xb . gugymbw2iq [
k0 ] . eq332hab4o . ost4s50i5x5 . nvixjavuae ) , rtdwData , 0 , 104 , offset0
, sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . ost4s50i5x5 .
nvixjavuae ) ) ; mr_SparkEV_restoreDataFromMxArrayWithOffset ( & (
cz5yqt3r3xb . gugymbw2iq [ k0 ] . eq332hab4o . bsy0pqewaju . b1zred4rog ) ,
rtdwData , 0 , 105 , offset0 , sizeof ( cz5yqt3r3xb . gugymbw2iq [ 0 ] .
eq332hab4o . bsy0pqewaju . b1zred4rog ) ) ; } }
mr_SparkEV_restoreDataFromMxArray ( ( void * ) & ( noe4wlvctth ) , ssDW , 0 ,
2 , sizeof ( noe4wlvctth ) ) ; } mxArray *
mr_SparkEV_GetSimStateDisallowedBlocks ( ) { mxArray * data = NULL ; mwIndex
subs [ 2 ] , offset ; size_t numChildrenWithDisallowedBlocks = 0 ; size_t
numBlocks = 0 ; mxArray * disallowedBlocksInChild [ 3 ] ;
disallowedBlocksInChild [ 0 ] =
mr_DriverPassThrough_GetSimStateDisallowedBlocks ( ) ;
disallowedBlocksInChild [ 1 ] =
mr_EvPowertrainController_GetSimStateDisallowedBlocks ( ) ;
disallowedBlocksInChild [ 2 ] =
mr_OpenLoopBraking_GetSimStateDisallowedBlocks ( ) ; { size_t i ; for ( i = 0
; i < 3 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [ i ] ; if ( (
NULL ) != data_i ) { if ( 0 == numChildrenWithDisallowedBlocks ++ ) { data =
data_i ; } numBlocks += mxGetM ( data_i ) ; } } } data = mxCreateCellMatrix (
numBlocks + 5 , 3 ) ; { static const char * blockType [ 5 ] = { "Scope" ,
"Scope" , "Scope" , "S-Function" , "S-Function" , } ; static const char *
blockPath [ 5 ] = { "SparkEV/Visualization/Performance and FE Scope" ,
"SparkEV/Visualization/Steer, Velocity, Lat Accel" ,
"SparkEV/Visualization/Scope Type/None/Yaw Rate and Steer" ,
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/ SFunction "
,
 "SparkEV/Vehicle/Plant Models/Simulink Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/ SFunction "
, } ; static const int reason [ 5 ] = { 0 , 0 , 0 , 0 , 0 , } ; for ( subs [
0 ] = 0 ; subs [ 0 ] < 5 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } { size_t i
; for ( i = 0 ; i < 3 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [
i ] ; if ( ( NULL ) != data_i ) { mwIndex subs_i [ 2 ] , offset_i ; const
mwIndex numRows_i = ( mwIndex ) mxGetM ( data_i ) ; for ( subs_i [ 0 ] = 0 ;
subs_i [ 0 ] < numRows_i ; ++ ( subs_i [ 0 ] ) ) { mwIndex j ; for ( j = 0 ;
j < 3 ; ++ j ) { mxArray * data_ij ; subs_i [ 1 ] = j ; offset_i =
mxCalcSingleSubscript ( data_i , 2 , subs_i ) ; data_ij = mxGetCell ( data_i
, offset_i ) ; data_ij = mxDuplicateArray ( data_ij ) ; subs [ 1 ] = j ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , data_ij ) ; } ++ ( subs [ 0 ] ) ; } mxDestroyArray ( data_i ) ; } }
} return data ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS
, 40 ) ; ssSetNumPeriodicContStates ( rtS , 1 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 5 ) ; ssSetNumBlocks ( rtS , 1048 ) ;
ssSetNumBlockIO ( rtS , 414 ) ; ssSetNumBlockParams ( rtS , 4085 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 0.01 ) ;
ssSetSampleTime ( rtS , 3 , 0.1 ) ; ssSetSampleTime ( rtS , 4 , 0.5 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; ssSetOffsetTime ( rtS , 3 , 0.0 ) ;
ssSetOffsetTime ( rtS , 4 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 2888132551U ) ; ssSetChecksumVal ( rtS , 1 ,
2354616315U ) ; ssSetChecksumVal ( rtS , 2 , 3011396550U ) ; ssSetChecksumVal
( rtS , 3 , 192330028U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0
, sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & iowqpk3eub2 ) ) ; ( void ) memset ( ( ( void * ) & iowqpk3eub2
) , 0 , sizeof ( iowqpk3eub ) ) ; } { real_T * x = ( real_T * ) & chmgkez0tpf
; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof (
chmgkez0tp ) ) ; } { void * dwork = ( void * ) & cz5yqt3r3xb ; ssSetRootDWork
( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( cz5yqt3r3x ) ) ; } {
static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0
, sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 26 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; } SparkEV_InitializeDataMapInfo ( )
; ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"SparkEV" ) ; ssSetPath ( rtS , "SparkEV" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 2474.0 ) ; dl2qsu4ppj ( rtS , 2 , 0 , & ( cz5yqt3r3xb .
lofhsz2swn . rtm ) , & ( cz5yqt3r3xb . lofhsz2swn . rtb ) , NULL , 0 , & (
rt_dataMapInfoPtr -> mmi ) ,
"SparkEV/Controllers/Brake Control Unit (BCU)/Open Loop Braking" , 0 , - 1 )
; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( cz5yqt3r3xb . lofhsz2swn . rtm
) , sizeof ( cz5yqt3r3xb . lofhsz2swn . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath (
"SparkEV/Controllers/Brake Control Unit (BCU)/Open Loop Braking" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 0 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } lkghv3zku5 ( rtS , 2 ,
& ( cz5yqt3r3xb . kqktv02dou . rtm ) , NULL , 0 , & ( rt_dataMapInfoPtr ->
mmi ) ,
"SparkEV/Controllers/Transmission Control Unit (TCU)/Driver Pass Through" , 1
, - 1 ) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( cz5yqt3r3xb .
kqktv02dou . rtm ) , sizeof ( cz5yqt3r3xb . kqktv02dou . rtm ) ) ; { char_T *
tempStr = rtwCAPI_EncodePath (
"SparkEV/Controllers/Transmission Control Unit (TCU)/Driver Pass Through" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 1 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } io04qbfqhk ( rtS , 2 ,
0 , & ( cz5yqt3r3xb . hukxwubwy0 . rtm ) , & ( cz5yqt3r3xb . hukxwubwy0 . rtb
) , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 1EM" , 2 , - 1 ) ;
slsaCacheDWorkDataForSimTargetOP ( rtS , & ( cz5yqt3r3xb . hukxwubwy0 . rtm )
, sizeof ( cz5yqt3r3xb . hukxwubwy0 . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath ( "SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 1EM"
) ; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr
-> mmi ) , 2 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { rtliSetLogT (
ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "xFinal" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetMMI ( ssGetRTWLogInfo ( rtS ) , & ( rt_dataMapInfoPtr -> mmi
) ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static struct _ssStatesInfo2
statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 ) ; } { static
ssPeriodicStatesInfo periodicStatesInfo ; ssSetPeriodicStatesInfo ( rtS , &
periodicStatesInfo ) ; ssSetPeriodicContStateIndices ( rtS , psrnl3geoqh ) ;
( void ) memset ( ( void * ) psrnl3geoqh , 0 , 1 * sizeof ( int_T ) ) ;
ssSetPeriodicContStateRanges ( rtS , pfsggdhooaf ) ; ( void ) memset ( ( void
* ) pfsggdhooaf , 0 , 2 * sizeof ( real_T ) ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 40 ] ;
static real_T absTol [ 40 ] = { 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 } ; static uint8_T
absTolControl [ 40 ] = { 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U
, 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U ,
2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U } ;
static real_T contStateJacPerturbBoundMinVec [ 40 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 40 ] ; static uint8_T zcAttributes [ 15 ] =
{ ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( 0xc0 |
ZC_EVENT_ALL_UP ) , ( 0xc0 | ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_DN ) ,
( 0xc0 | ZC_EVENT_ALL_UP ) } ; static uint8_T zcEvents [ 15 ] = { ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL ) , (
0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , (
0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , (
0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL_DN ) , ( 0x40 | ZC_EVENT_ALL_UP
) } ; static ssNonContDerivSigInfo nonContDerivSigInfo [ 12 ] = { { 1 *
sizeof ( real_T ) , ( char * ) ( & iowqpk3eub2 . nt3tznw0vu ) , ( NULL ) } ,
{ 1 * sizeof ( real_T ) , ( char * ) ( & iowqpk3eub2 . gtaxtjiya4 ) , ( NULL
) } , { 3 * sizeof ( real_T ) , ( char * ) ( & iowqpk3eub2 . i42qwfv1dk [ 0 ]
) , ( NULL ) } , { 4 * sizeof ( real_T ) , ( char * ) ( & iowqpk3eub2 .
ig54gcy1dp [ 0 ] ) , ( NULL ) } , { 4 * sizeof ( real_T ) , ( char * ) ( &
iowqpk3eub2 . ig54gcy1dp [ 0 ] ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & iowqpk3eub2 . oytg0154s1 ) , ( NULL ) } , { 1 * sizeof ( real_T
) , ( char * ) ( & iowqpk3eub2 . ixwcnrrmnz ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & iowqpk3eub2 . ciy0n0fvf4 ) , ( NULL ) } , { 1 *
sizeof ( boolean_T ) , ( char * ) ( & iowqpk3eub2 . ngpegw05gp [ 0 ] .
neijo20b0e . o4j5vlwe14 . myu2drybjk ) , ( NULL ) } , { 1 * sizeof (
boolean_T ) , ( char * ) ( & iowqpk3eub2 . ngpegw05gp [ 0 ] . neijo20b0e .
pjngj1ll1b . ayfwykncou ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , ( char
* ) ( & iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o . bsy0pqewaju .
myu2drybjk ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , ( char * ) ( &
iowqpk3eub2 . gugymbw2iq [ 0 ] . eq332hab4o . ost4s50i5x5 . ayfwykncou ) , (
NULL ) } } ; { int i ; for ( i = 0 ; i < 40 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.01 )
; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 12 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "daessc" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 1 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 15 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverZcEventsVector ( rtS , zcEvents ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 0 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ; ssSetSolverZcThreshold ( rtS ,
0.001 ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 5 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 12 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 5 ) ; } {
ZCSigState * zc = ( ZCSigState * ) & noe4wlvctth ; ssSetPrevZCSigState ( rtS
, zc ) ; } { noe4wlvctth . hiezj5oam5 = UNINITIALIZED_ZCSIG ; noe4wlvctth .
b5lqrekcd2 = UNINITIALIZED_ZCSIG ; noe4wlvctth . k5hpujcbj0 =
UNINITIALIZED_ZCSIG ; } ssSetChecksumVal ( rtS , 0 , 2888132551U ) ;
ssSetChecksumVal ( rtS , 1 , 2354616315U ) ; ssSetChecksumVal ( rtS , 2 ,
3011396550U ) ; ssSetChecksumVal ( rtS , 3 , 192330028U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 40 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = (
sysRanDType * ) & cz5yqt3r3xb . fuob0ddam2h . k44bc5mjbl ; systemRan [ 2 ] =
& rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ; systemRan [ 4 ] = (
sysRanDType * ) & cz5yqt3r3xb . dwnfs4t0ur . k44bc5mjbl ; systemRan [ 5 ] = &
rtAlwaysEnabled ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = &
rtAlwaysEnabled ; systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = &
rtAlwaysEnabled ; systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = &
rtAlwaysEnabled ; systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = &
rtAlwaysEnabled ; systemRan [ 14 ] = & rtAlwaysEnabled ; systemRan [ 15 ] = &
rtAlwaysEnabled ; systemRan [ 16 ] = & rtAlwaysEnabled ; systemRan [ 17 ] = &
rtAlwaysEnabled ; systemRan [ 18 ] = & rtAlwaysEnabled ; systemRan [ 19 ] = &
rtAlwaysEnabled ; systemRan [ 20 ] = ( sysRanDType * ) & cz5yqt3r3xb .
gugymbw2iq [ 0 ] . eq332hab4o . er0qshcg2fb . heycmssseq ; systemRan [ 21 ] =
( sysRanDType * ) & cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . koua2ggizf0
. mqxu23dmqr ; systemRan [ 22 ] = ( sysRanDType * ) & cz5yqt3r3xb .
gugymbw2iq [ 0 ] . eq332hab4o . ost4s50i5x5 . nvixjavuae ; systemRan [ 23 ] =
( sysRanDType * ) & cz5yqt3r3xb . gugymbw2iq [ 0 ] . eq332hab4o . bsy0pqewaju
. b1zred4rog ; systemRan [ 24 ] = & rtAlwaysEnabled ; systemRan [ 25 ] = &
rtAlwaysEnabled ; systemRan [ 26 ] = & rtAlwaysEnabled ; systemRan [ 27 ] = &
rtAlwaysEnabled ; systemRan [ 28 ] = & rtAlwaysEnabled ; systemRan [ 29 ] = &
rtAlwaysEnabled ; systemRan [ 30 ] = ( sysRanDType * ) & cz5yqt3r3xb .
ngpegw05gp [ 0 ] . neijo20b0e . n4c32cozqj . heycmssseq ; systemRan [ 31 ] =
( sysRanDType * ) & cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . jl5e4qcf5y
. mqxu23dmqr ; systemRan [ 32 ] = ( sysRanDType * ) & cz5yqt3r3xb .
ngpegw05gp [ 0 ] . neijo20b0e . pjngj1ll1b . nvixjavuae ; systemRan [ 33 ] =
( sysRanDType * ) & cz5yqt3r3xb . ngpegw05gp [ 0 ] . neijo20b0e . o4j5vlwe14
. b1zred4rog ; systemRan [ 34 ] = & rtAlwaysEnabled ; systemRan [ 35 ] = &
rtAlwaysEnabled ; systemRan [ 36 ] = & rtAlwaysEnabled ; systemRan [ 37 ] = &
rtAlwaysEnabled ; systemRan [ 38 ] = & rtAlwaysEnabled ; systemRan [ 39 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_SparkEV_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS
, mr_SparkEV_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_SparkEV_SetDWork ) ; kjmvupbl2i . Saturation_UpperSat_eo55tnq2by = rtInf ;
kjmvupbl2i . DisallowNegativeBrakeTorque_UpperSat = rtInf ; kjmvupbl2i .
DisallowNegativeBrakeTorque_UpperSat_o1kzlkoiof = rtInf ; kjmvupbl2i .
Saturation1_UpperSat = rtInf ; kjmvupbl2i . Saturation_UpperSat_petchupvyj =
rtInf ; kjmvupbl2i . Saturation1_UpperSat_jybwri54h2 = rtInf ; kjmvupbl2i .
Saturation_UpperSat_ffmhckns0u = rtInf ; kjmvupbl2i . FirstOrderHold1_ErrTol
= rtInf ; kjmvupbl2i . FirstOrderHold_ErrTol = rtInf ; kjmvupbl2i .
DeadZone_Start_md5ahj13hx = rtMinusInf ; kjmvupbl2i .
Saturation_UpperSat_bopsnau5hk = rtInf ; kjmvupbl2i .
Saturation_UpperSat_bsj0f3al0o = rtInf ; rt_RapidReadMatFileAndUpdateParams (
rtS ) ; if ( ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 5 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID5 ( tid ) ; }
