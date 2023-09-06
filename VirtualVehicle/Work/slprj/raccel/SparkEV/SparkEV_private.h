#ifndef RTW_HEADER_SparkEV_private_h_
#define RTW_HEADER_SparkEV_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "SparkEV.h"
#include "SparkEV_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
extern void kkt5tjhslu ( real_T rtp_IC , ejm5hae4gj * localB ) ; extern void
bnlff5ayna ( SimStruct * rtS_p , mgxctp3zid * localDW ) ; extern void
aup0omwjn5 ( mgxctp3zid * localDW ) ; extern void fuob0ddam2 ( SimStruct *
rtS_i , boolean_T l0blttywkq , real_T epomb1gr42 , ejm5hae4gj * localB ,
mgxctp3zid * localDW ) ; extern void jpsdmdkpvb ( real_T dktnql4rdc , real_T
oibbbmluqf , real_T g5c3lpi21w , real_T jqwqb31imn , real_T jmt3wslcux ,
real_T j5g0lv5w2t , real_T nyn2enrmqk , real_T flw3014l5l , real_T dr2wwwgcqq
, const real_T acyyt2c3sd [ 34 ] , const real_T nolzfnzgog [ 3 ] , const
real_T np33baqv0z [ 3 ] , const real_T cuhb2c43r1 [ 9 ] , real_T cwumy4oyzo ,
real_T mcbnhkacqv , real_T l3nteyfq0o , real_T kaatiy3pyo , real_T h5t5edhcvq
, real_T cfx1ep5ajt , real_T lgbt4epz0h , real_T bwx0s11oqh , real_T
pirm10rjin , real_T aywbcc003i , real_T dlryh21pe3 , real_T pe11e4jbil ,
real_T pcocdg01db , real_T f5vhwuclmf , real_T hjondtefj2 , real_T fi3dosih30
, const real_T afshqbq0nt [ 3 ] , const real_T flbqc2fzdk [ 3 ] , const
real_T pagz5bl3zm [ 9 ] , real_T e4irtzy4j3 , real_T lwkv2qjcc0 , real_T
nxy44lipgr , real_T fwhderflnq , real_T btei1l52mj , real_T f24d4whz0n ,
real_T jlmgxxzz04 , real_T l4jiflo2gi , real_T ldfeh0gkm2 , real_T pqagd3mh0l
, real_T ldxz1pnzq0 , real_T aro2ihjb1h , real_T fxasuepo1s , real_T
hjktfap0mv , real_T kvv3xxnbot , real_T fmu01gtyh5 , real_T acfn1johsv ,
real_T eedc14ohgn , real_T ajbhjifr3a , real_T nr4ldqqeqm , real_T dc0lpymeql
, real_T nqlcnuj2bo , real_T isyy3iaw5j , real_T j32f1t4ado , real_T
enzz41djgg , real_T f1zrqmjzxe , real_T ehdypio5vy , real_T rtp_FZMAX ,
real_T rtp_FZMIN , real_T rtp_VXLOW , real_T rtp_kappamax , f1t4wk0v1k *
localB ) ; extern void ioxxeg3ii2 ( kkan3dtgqb * localB , hncqrffgba * localP
) ; extern void aejxmdeg1v ( kkan3dtgqb * localB ) ; extern void bsy0pqewaj (
real_T d0wvrywhyo , real_T opik2pdxsr , kkan3dtgqb * localB , efbforbhag *
localDW ) ; extern void loiaz0s5vi ( l4bjgijxai * localB , pbzhn4zoiu *
localDW , e1x3oofaiy * localP ) ; extern void bdgtgtn0zv ( l4bjgijxai *
localB ) ; extern void ost4s50i5x ( real_T f3cqrubvgy , real_T hueeevgufm ,
l4bjgijxai * localB , pbzhn4zoiu * localDW , e1x3oofaiy * localP ) ; extern
void ost4s50i5xTID5 ( real_T rtp_br , l4bjgijxai * localB , e1x3oofaiy *
localP ) ; extern void jqss0ipnij ( SimStruct * rtS_n ) ; extern void
hleumlqoxf ( real_T * nnh0mwuk5o , real_T * dnc3ta04xv , real_T * no33oxrejn
, real_T * grsswsnfoe ) ; extern void pkh4t44ipy ( SimStruct * rtS_m ) ;
extern void er0qshcg2f ( SimStruct * rtS_g , real_T l5t1gh51gl , real_T *
nnh0mwuk5o , real_T * dnc3ta04xv , real_T * no33oxrejn , real_T * grsswsnfoe
, oy5jc31flu * localP ) ; extern void ljvixv5dz0 ( real_T rtp_omegao ,
gr4zsd3ftb * localX ) ; extern void diq0mu0o25 ( SimStruct * rtS_d ,
fqxkd2q4va * localXdis ) ; extern void pr0mh1uubi ( real_T * oef4pyyqfb ,
real_T * cjz5vtfj3p , real_T * p11haannar , real_T * guoabe1ble , blpitytuq4
* localB ) ; extern void nbekiifdnn ( blpitytuq4 * localB , k4grq5b0ie *
localXdot ) ; extern void blj2blnlcv ( SimStruct * rtS_j , fqxkd2q4va *
localXdis ) ; extern void koua2ggizf ( real_T koilylp1r0 , real_T njhr5exrgu
, real_T * oef4pyyqfb , real_T * cjz5vtfj3p , real_T * p11haannar , real_T *
guoabe1ble , real_T rtp_br , real_T rtp_Iyy , blpitytuq4 * localB ,
pfusmvg4mq * localP , gr4zsd3ftb * localX ) ; extern void pkedxe1l0n ( real_T
rtp_omegao , lj4asj5mcu * localB , jk5uxxpfl5 * localDW , m3chvwfzhf * localP
, p3n4530usz * localX ) ; extern void ikid33ax2e ( lj4asj5mcu * localB ) ;
extern void epfuneqdrc ( lj4asj5mcu * localB , jk5uxxpfl5 * localDW ,
i2a0hmsvxn * localXdot ) ; extern void ifd12z2us4 ( SimStruct * rtS_b ,
real_T d4rzxmd0tu , real_T k5zhllvll2 , real_T a1aakxb0kw , real_T rtp_omegao
, real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol , lj4asj5mcu * localB
, jk5uxxpfl5 * localDW , m3chvwfzhf * localP , p3n4530usz * localX ,
nntgsjyc2o * localXdis ) ; extern void ifd12z2us4TID5 ( real_T rtp_br ,
lj4asj5mcu * localB , m3chvwfzhf * localP ) ; extern void faznt0co0o ( real_T
rtp_omegao , c2fxpy2z1g * localB , mrsxdde3oa * localDW , epsb413ikh * localP
, d3hc2kyxu1 * localX ) ; extern void ipqw4qhrhj ( c2fxpy2z1g * localB ) ;
extern void keurgjamya ( c2fxpy2z1g * localB , mrsxdde3oa * localDW ,
ln3hpsu2ij * localXdot ) ; extern void ox4yrtzjzo ( SimStruct * rtS_fd ,
real_T a42gq14v1q , real_T awxpau4z2l , real_T lbjszii20x , real_T rtp_omegao
, real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol , c2fxpy2z1g * localB
, mrsxdde3oa * localDW , epsb413ikh * localP , d3hc2kyxu1 * localX ,
iihlacg0mj * localXdis ) ; extern void ox4yrtzjzoTID5 ( real_T rtp_br ,
c2fxpy2z1g * localB , epsb413ikh * localP ) ; extern void plzq12jdos ( void )
; extern void iwjxg25rah ( int32_T maeq42maen ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
