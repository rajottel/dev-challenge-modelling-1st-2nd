#ifndef RTW_HEADER_SparkEV_h_
#define RTW_HEADER_SparkEV_h_
#ifndef SparkEV_COMMON_INCLUDES_
#define SparkEV_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "slexec_parallel.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "SparkEV_types.h"
#include "OpenLoopBraking.h"
#include "DriverPassThrough.h"
#include "EvPowertrainController.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include <string.h>
#include "rt_zcfcn.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "zero_crossing_types.h"
#define MODEL_NAME SparkEV
#define NSAMPLE_TIMES (6) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (414) 
#define NUM_ZC_EVENTS (3) 
#ifndef NCSTATES
#define NCSTATES (40)   
#elif NCSTATES != 40
#error Invalid specification of NCSTATES defined in compiler command
#endif
#define UseMMIDataLogging
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T motv0pybyv ; } ejm5hae4gj ; typedef struct { int8_T
k44bc5mjbl ; boolean_T o5luu5smdl ; } mgxctp3zid ; typedef struct { real_T
mcuiddfo52 [ 3 ] ; real_T bq14nuexev [ 9 ] ; real_T dombbngwxk [ 9 ] ; real_T
cvsblo3jno [ 3 ] ; } eeylscnhvf ; typedef struct { real_T b3ctjms5s3 [ 5 ] ;
real_T lfzo14qhui [ 16 ] ; real_T g2citiqvw0 [ 24 ] ; real_T lpoql10kbh ;
real_T ewiw2ra5at ; real_T h3cfwzlt1t ; real_T ozaa1drp55 ; } f1t4wk0v1k ;
typedef struct { boolean_T myu2drybjk ; } kkan3dtgqb ; typedef struct {
int8_T b1zred4rog ; } efbforbhag ; typedef struct { real_T mzqxxxozo5 ;
boolean_T ayfwykncou ; } l4bjgijxai ; typedef struct { boolean_T kq21ggndfv ;
int8_T nvixjavuae ; } pbzhn4zoiu ; typedef struct { int8_T heycmssseq ; }
hy5q5kmqsn ; typedef struct { real_T pqkyknwcy0 ; real_T gnnfdeep31 ; real_T
flv0itqepg ; real_T irlsod2fw3 ; real_T l0ncirvkfw ; real_T dc1ukp4fgk ; }
blpitytuq4 ; typedef struct { int8_T mqxu23dmqr ; } hunus0uk5g ; typedef
struct { real_T i1rcezf1gq ; } gr4zsd3ftb ; typedef struct { real_T
i1rcezf1gq ; } k4grq5b0ie ; typedef struct { boolean_T i1rcezf1gq ; }
fqxkd2q4va ; typedef struct { real_T i1rcezf1gq ; } d3nlncdgqe ; typedef
struct { real_T i1rcezf1gq ; } njessc3uja ; typedef struct { real_T
i1rcezf1gq ; } kkcgfrdkvs ; typedef struct { real_T l1npf2t5km ; real_T
fzqtuyqi2m ; real_T nr0t3tcra1 ; real_T mi4rs4gjdt ; real_T aseqcyqgtw ;
real_T dhjwhtydhg ; real_T eqrog2hdmh ; real_T adsixgkqky ; blpitytuq4
koua2ggizf0 ; l4bjgijxai ost4s50i5x5 ; kkan3dtgqb bsy0pqewaju ; } lj4asj5mcu
; typedef struct { real_T jtdeo3xwpe ; real_T gtiwugh4xn ; real_T no1vbxkkq3
; void * oe2spdonlu ; void * hpfiorm2tv ; int32_T inlsalkodh ; uint32_T
hor5qoll31 ; int8_T hlbnjoqlho ; int8_T ceaeqbhd2w ; uint8_T jeid4kmorf ;
boolean_T mzmvogimwr ; boolean_T hg1u13cliy ; boolean_T ixpxwmj3uh ;
hunus0uk5g koua2ggizf0 ; hy5q5kmqsn er0qshcg2fb ; pbzhn4zoiu ost4s50i5x5 ;
efbforbhag bsy0pqewaju ; } jk5uxxpfl5 ; typedef struct { gr4zsd3ftb
koua2ggizf0 ; } p3n4530usz ; typedef struct { k4grq5b0ie koua2ggizf0 ; }
i2a0hmsvxn ; typedef struct { fqxkd2q4va koua2ggizf0 ; } nntgsjyc2o ; typedef
struct { d3nlncdgqe koua2ggizf0 ; } lrc2z4bdzu ; typedef struct { njessc3uja
koua2ggizf0 ; } izvajpao23 ; typedef struct { kkcgfrdkvs koua2ggizf0 ; }
go15uvmpbh ; typedef struct { lj4asj5mcu eq332hab4o ; } m2hwj1bbkh ; typedef
struct { jk5uxxpfl5 eq332hab4o ; } nwl2anjax0 ; typedef struct { p3n4530usz
eq332hab4o ; } goi00ob0ow ; typedef struct { i2a0hmsvxn eq332hab4o ; }
pfxjuygh52 ; typedef struct { nntgsjyc2o eq332hab4o ; } o4rofp2w0q ; typedef
struct { lrc2z4bdzu eq332hab4o ; } a5qkuvfxsn ; typedef struct { izvajpao23
eq332hab4o ; } mksthrfmu5 ; typedef struct { go15uvmpbh eq332hab4o ; }
ejtz25ztif ; typedef struct { real_T fp3ahepphh ; real_T hyfpurx0yo ; real_T
a0b3v1qg1i ; real_T jmb0y2cftd ; real_T j5ybwspdla ; real_T pizt32ck1y ;
real_T eykroya1zm ; real_T fjrzzbxuaj ; blpitytuq4 jl5e4qcf5y ; l4bjgijxai
pjngj1ll1b ; kkan3dtgqb o4j5vlwe14 ; } c2fxpy2z1g ; typedef struct { real_T
pggkitt2pt ; real_T aikbu101md ; real_T gijsd2nxsh ; void * ghzjsy0neq ; void
* pjr0kw2nrv ; int32_T bke41ski0c ; uint32_T cwd4vpw3zu ; int8_T iulkqj0r4p ;
int8_T oqzdcqvnxt ; uint8_T ckcpmdbuxk ; boolean_T ifu0e5plsq ; boolean_T
ng4ch3t5fg ; boolean_T i2d3dblxse ; hunus0uk5g jl5e4qcf5y ; hy5q5kmqsn
n4c32cozqj ; pbzhn4zoiu pjngj1ll1b ; efbforbhag o4j5vlwe14 ; } mrsxdde3oa ;
typedef struct { gr4zsd3ftb jl5e4qcf5y ; } d3hc2kyxu1 ; typedef struct {
k4grq5b0ie jl5e4qcf5y ; } ln3hpsu2ij ; typedef struct { fqxkd2q4va jl5e4qcf5y
; } iihlacg0mj ; typedef struct { d3nlncdgqe jl5e4qcf5y ; } kh4jl4s3ol ;
typedef struct { njessc3uja jl5e4qcf5y ; } artsu5ydqg ; typedef struct {
kkcgfrdkvs jl5e4qcf5y ; } ctvykc1lk2 ; typedef struct { c2fxpy2z1g neijo20b0e
; } dqlbncny2t ; typedef struct { mrsxdde3oa neijo20b0e ; } k25dfib3xb ;
typedef struct { d3hc2kyxu1 neijo20b0e ; } k4khejqp01 ; typedef struct {
ln3hpsu2ij neijo20b0e ; } jxfiesig22 ; typedef struct { iihlacg0mj neijo20b0e
; } ksiv5ovpyy ; typedef struct { kh4jl4s3ol neijo20b0e ; } glcyn3bqkt ;
typedef struct { artsu5ydqg neijo20b0e ; } mxsbo3s1ds ; typedef struct {
ctvykc1lk2 neijo20b0e ; } h0h0sxessv ; typedef struct { real_T atfdsr0huc ;
real_T ciy0n0fvf4 ; real_T m3s2vgesq4 ; real_T hy1torfg4w [ 2 ] ; real_T
pcflqp2d2t [ 2 ] ; real_T ieofldeqy2 [ 3 ] ; real_T haybfyc2q4 ; real_T
dqkowwdyo5 ; real_T cgnfgn223x ; real_T dqh4oe22xa ; real_T jfa1nbks1u ;
real_T o4djdimsdm ; real_T jpcr1f245w ; real_T h2mcwsniul ; real_T n3drdbfr2d
; real_T p1wsp4msvl ; real_T dqqdmdpyoe ; real_T dknfaxifuu ; real_T
jnpzg142hx ; real_T jztvbzsesd ; real_T hq4ll3qyzp ; real_T ok34kzchcv ;
real_T mlr1surpas ; real_T c3irmcv4ar ; real_T l0jn2lsago ; real_T nzrgmpq2kc
; real_T l05au4wqsc ; real_T fyfoh3jqvh ; real_T it0brydt4y [ 3 ] ; real_T
excv5bvsnq ; real_T ipitix1sph [ 2 ] ; real_T eulnmgegcl ; real_T ixwcnrrmnz
; real_T me1friqgpo ; real_T om2tfdfzpf ; real_T mnx3jlre3e ; real_T
ltojpdf1ny ; real_T hreyyfol5z ; real_T oytg0154s1 ; real_T jca5e2ozdf ;
real_T ghrf1v1zl1 ; real_T jwausjpzws ; real_T era2dgtrck ; real_T jbgfcwpebf
; real_T nodgw2f1ru [ 4 ] ; real_T kggvpu401a ; real_T jzibsxlg2x ; real_T
hmrl2pnkei ; real_T npw2p1gyxa ; real_T mubnbbme0n ; real_T a4b5yp1ztb ;
real_T d4rqnnq3qc [ 4 ] ; real_T d23gupiqyg [ 4 ] ; real_T a0xxw4glf3 [ 4 ] ;
real_T mdv0kbjtue ; real_T lbrhvvx0as ; real_T bor30mivo0 ; real_T esrwu2tlga
; real_T o24lfarmih ; real_T hbi3xwos1i ; real_T nc1n0ec5qh ; real_T
oobfcqh5ys ; real_T jaeul1jr5j ; real_T j0r5bjaq2v ; real_T a1ph325uji ;
real_T kfyckqnkve [ 3 ] ; real_T lfmebcy0qq [ 3 ] ; real_T ig54gcy1dp [ 4 ] ;
real_T bdac45x5j4 ; real_T cjintpfg52 ; real_T f4hqazlsnx ; real_T nn3knanxji
; real_T moec5qfiw2 ; real_T oblub0q0xy ; real_T cz5uwjohsf ; real_T
ngroqkt0pw ; real_T awed5xcf4w ; real_T ptvh2on4rv ; real_T ogn0f5pp4g ;
real_T k0hqlnc5zr ; real_T f3b5qs3y2i ; real_T lhxhxansdi ; real_T ankpmmyhrc
; real_T lqcbudindy ; real_T ieuul0ehou [ 3 ] ; real_T b0ut3x2rou [ 3 ] ;
real_T a043amhdpn [ 4 ] ; real_T gi0w2rdunb ; real_T oozbsuyo0w ; real_T
l5capshjmg ; real_T mxj1ezdble [ 2 ] ; real_T jx23o501wt [ 3 ] ; real_T
ptmq24ign2 [ 3 ] ; real_T pbsshwqr4c [ 3 ] ; real_T iwn3v1eud0 [ 9 ] ; real_T
mybqcz32qe [ 9 ] ; real_T cueeis35rw [ 3 ] ; real_T nbtpcxmbom [ 3 ] ; real_T
dahbupbiyl [ 9 ] ; real_T nbnkfdvqmr [ 9 ] ; real_T i35om0deks [ 3 ] ; real_T
m2vaomzt5b [ 3 ] ; real_T igqq0bffvg [ 2 ] ; real_T arewjxhwf2 [ 2 ] ; real_T
jp5pcaboje [ 2 ] ; real_T ccpbmibxu1 [ 2 ] ; real_T pdtzd43pag [ 2 ] ; real_T
an5lcjhr21 [ 2 ] ; real_T e0ng4xzira [ 2 ] ; real_T mggaons4rn [ 2 ] ; real_T
i42qwfv1dk [ 12 ] ; real_T gtaxtjiya4 ; real_T bvukyawnn2 [ 4 ] ; real_T
eoin413gqw [ 3 ] ; real_T kn03lhlboz [ 3 ] ; real_T hamrym443t [ 3 ] ; real_T
nktxf2g2id [ 3 ] ; real_T aedljs0e4u [ 3 ] ; real_T m5vbsnyz5y [ 3 ] ; real_T
dop2xc5lh4 [ 3 ] ; real_T aw422d2u0j [ 3 ] ; real_T oyf1kknxky [ 3 ] ; real_T
hd2z2xy0lb [ 3 ] ; real_T p333nkuoxh ; real_T oduhehvfwb ; real_T ma1olqmik5
[ 6 ] ; real_T dfzzklugat [ 6 ] ; real_T lszyzcrgde [ 6 ] ; real_T cb3a3cmvqi
[ 3 ] ; real_T giviabarth [ 3 ] ; real_T araqn4x4bn ; real_T do2ad42p4b ;
real_T irik5hamck [ 2 ] ; real_T f35pdcffvo [ 2 ] ; real_T jzqwpbqwdi [ 2 ] ;
real_T cwrvyfrsdw [ 2 ] ; real_T huhttmored [ 2 ] ; real_T jsgjt0fuoh [ 3 ] ;
real_T hdxvrl0b43 ; real_T af01y0tyx5 ; real_T gfzt5manw2 ; real_T lxjoffd23j
; real_T dttp424sgc ; real_T liyhqocsj3 [ 2 ] ; real_T ivcelveswb ; real_T
cyvi2yk4zm ; real_T pupxf42qyi ; real_T c02ood1bjt ; real_T p0b3m4xtnw ;
real_T mytvvfcg1y ; real_T k4zukswayf ; real_T khcqvoneta ; real_T ffjzw3xpup
; real_T pjeugxnijx ; real_T j5ydyic0d5 ; real_T kvtxbs1osx ; real_T
nk5i1tvfs4 ; real_T hkfoqcrcaa ; real_T fygmwizxbe ; real_T if3ap21cin ;
real_T meiux3s5v1 ; real_T d4vvdrgtgs ; real_T bbwodlczuz ; real_T cfykfdt0uw
; real_T gk5c3nru3t ; real_T gtc1bz3bpt ; real_T ll5kvzbeqe ; real_T
dxggtyvppm ; real_T iqd4x5zmdq ; real_T fslb3e0kt4 ; real_T fyv5hziyzu ;
real_T hvofgrdmb4 [ 4 ] ; real_T ckogufqgce ; real_T orjxb10cau ; real_T
m2yfudsyf0 ; real_T bqypj3eyiq ; real_T gwnl2155xk ; real_T kb23u2basn ;
real_T biqv0f0tfc [ 4 ] ; real_T icp2bbe015 ; real_T msjuqz2cog ; real_T
dnjk2135yv ; real_T crfjrsqdom ; real_T o2cjlwehyr ; real_T or4x0ngped ;
real_T gfa1pnn0i5 ; real_T j4h3u5o2s0 ; real_T hvrj3ku4rl ; real_T niktayqu0g
; real_T n1qbwalijw ; real_T jlncf1nhxu ; real_T dtch5f4az1 ; real_T
oqfbznbud3 ; real_T b25h3lrxlo [ 2 ] ; real_T eycgm5czdn [ 2 ] ; real_T
fjnu3gvsoe ; real_T hiqbgqctfu ; real_T bwgdzgdu1v ; real_T fhd2qe1xn4 [ 4 ]
; real_T hdpouphvxx ; real_T odlevesch3 [ 4 ] ; real_T oq1kbno45o [ 4 ] ;
real_T pjkdriloq3 [ 4 ] ; real_T lvd3mg41ca ; real_T i44juxrctd ; real_T
fhuiylguyp [ 2 ] ; real_T fv3tc4cscj ; real_T irlowhecsn ; real_T flqzfbsj2v
; real_T irrzi1045j [ 3 ] ; real_T f34sqchkix ; real_T nauemcaz3d ; real_T
lieehcoatc ; real_T mnpes3j1iq ; real_T otzseahofd [ 3 ] ; real_T d5pwtznta0
[ 9 ] ; real_T eiykk5beex [ 9 ] ; real_T nkbbssdc5d [ 3 ] ; real_T dnenu1vbpk
[ 3 ] ; real_T ch0o5ig4cr [ 2 ] ; real_T lfofnxfayn [ 6 ] ; real_T iaezmlrkox
[ 3 ] ; real_T dyhmr3qcbv ; real_T gdnyk5p1e3 ; real_T g3macyhggt [ 3 ] ;
real_T fbzkojgyr0 ; real_T k3isxzlaln ; real_T oiwa3jkvb5 [ 3 ] ; real_T
dsadicqcwv [ 3 ] ; real_T l2egj4cytx [ 3 ] ; real_T o4xtsrd0je ; real_T
iotv5isaib ; real_T d0xprkwmho ; real_T d1mihyi2ba ; real_T fxzb5xblol ;
real_T cjp5kr4awk ; real_T cjvyxh13dv ; real_T a24mklqmql ; real_T oee54crz1e
; real_T mzj01xvkrr ; real_T hr2pqxcus4 ; real_T bgquks0gef ; real_T
ch4cxv3mlw ; real_T d5am3mkuih ; real_T ekohgouk1y ; real_T c52p1ih31b ;
real_T dvwgmcheyq ; real_T c1rn35nztg ; real_T o1byibse1l [ 4 ] ; real_T
nt3tznw0vu ; real_T gbaltmt113 ; real_T jhc4ii4xbs ; real_T bvnglhibbn ;
real_T orndyrmi2r ; real_T hau1vvqsb5 ; real_T okmlvakeqk [ 2 ] ; real_T
c2wzjcaepr [ 2 ] ; real_T ohiyphp5ep [ 2 ] ; real_T kortgcvvps ; real_T
b0lxiysli2 [ 2 ] ; real_T kq0sl3ydh0 [ 4 ] ; real_T jinfsbbhky ; real_T
cvqlqdsndf ; real_T er5iejwbmj ; real_T p5vgig23ib ; real_T nrrsykecbr ;
real_T kzthjajhu2 ; real_T hj1vvcjcba ; real_T lowpzb4o0j ; real_T a3se3uxsa0
; real_T b1002ja30r ; real_T c0212dk5n0 ; real_T a1jfohnbbb ; real_T
lbbeqssvkc ; real_T oon0lyzoaz ; real_T gbv4umsqtz ; real_T lstfxdco4s ;
real_T phi3srvxtn ; real_T ngkymifojl ; real_T lozlso34a1 ; real_T f2i0rhb4j1
; real_T jo3zl1sua4 ; real_T hey313hwyt ; real_T o22bitd451 ; real_T
obzquwaaiq ; real_T apvubbfw3c ; real_T dcgngg1mg5 ; real_T f3sljn1wd2 ;
real_T fq0fiv3ziz ; real_T hbtxdpylgh ; real_T li524emhoo ; real_T iafdmwbgzy
; real_T dlxs0ivr5u ; real_T fqwiz5f4up ; real_T djiotohjne ; real_T
d4sykcs5wk ; real_T dud1uvzkqh ; real_T if14etsg0u ; real_T hhoz5bkyag ;
real_T fcf2vxrh2g ; real_T dhr3me1nz0 ; real_T oegjxatj1q ; real_T cw0ygcscpp
; real_T jxwxzdj1f1 ; real_T dd1hidzbwa ; real_T jlkhwd1jet ; real_T
cam22f11mr ; real_T hbjjgcn42r ; real_T jpyepvm3xu ; real_T nvxci0i4yu ;
real_T jh3c41lpx2 ; real_T bmuzvpozlw ; real_T auhfud24ib ; real_T f1ue2yetzx
; real_T pezbzcp2ij ; real_T pynezfpwd5 ; real_T nriww5alsm ; real_T
ls3ug4yvlk ; real_T eocs5on0jt ; real_T flbxxyyfom ; real_T njlftunr4h ;
real_T j3qtbjnizf ; real_T dfw11gckk0 ; real_T ldqpwfgupj ; real_T nz1eo0mhjt
; real_T pvdiosiz3s ; real_T hpa0jnkmab ; real_T dsgbg2ev15 [ 3 ] ; real_T
ha5st20hrl [ 3 ] ; real_T mkoefhpy3s [ 3 ] ; real_T c5qsn10kon ; real_T
eiobpiy5iw ; real_T ha4njibf2o ; real_T g3u0z4mibd ; real_T jvwkib0hfu ;
real_T mmyyvvwxlz [ 2 ] ; real_T cqrxigykwm ; real_T d1uv3awlwx ; real_T
k45bb5csjy ; real_T gk34ntrgmq ; real_T ixgkgjvbsp ; real_T fahxrqmdmd ;
real_T mcfo01bafi ; real_T e3bitaa0oq ; real_T dd00q2xdge [ 3 ] ; real_T
dmnvn5gvd4 [ 2 ] ; real_T adayadw0rs ; real_T bugorax2wv ; real_T nxf5jr3qba
; real_T bnugi4f5zh ; real_T b4tu2y2jyw [ 12 ] ; real_T pstm2khcrt [ 3 ] ;
real_T ivqnpc0uok ; boolean_T fjkq3v532f ; boolean_T ceqisvxe55 ; boolean_T
jtrhoigdxv ; boolean_T np15oib1kn ; boolean_T puwtafzry1 ; boolean_T
jiym3rqvan ; boolean_T gcn3sxipyq ; dqlbncny2t ngpegw05gp [ 1 ] ; f1t4wk0v1k
kzv4bjyp4c ; m2hwj1bbkh gugymbw2iq [ 1 ] ; f1t4wk0v1k hl3n1vp0xp ; eeylscnhvf
k04ingjquh [ 4 ] ; ejm5hae4gj dwnfs4t0ur ; ejm5hae4gj fuob0ddam2h ; }
iowqpk3eub ; typedef struct { real_T ovftuesk53 [ 2 ] ; real_T kodqgqrf0p ;
real_T eo23of04rz ; volatile real_T ho5bua3cli [ 2 ] ; volatile real_T
oqnelch0g4 ; volatile real_T lgs1ws31ib ; volatile real_T hgdclbpf45 ;
volatile real_T dfvfksmo3u ; volatile real_T j0t5dz02te ; volatile real_T
d0jgs1xeud ; volatile real_T i5wargkafk ; volatile real_T noizxcaj0u ;
volatile real_T ahz4qvibsf ; volatile real_T gelfja001m ; volatile real_T
im2dnqr2y0 ; volatile real_T ivmw2mj2cj ; volatile real_T e2o3ismpif ; real_T
hqv0oirn0q ; real_T lzovmgc1ye [ 4 ] ; real_T ggdayeevtv [ 4 ] ; real_T
ipqlah0gj1 [ 4 ] ; real_T dfwjuauqhh ; real_T dci24ewo3n ; real_T n20oxvozfr
; real_T akmdrfe3wk ; real_T asn3ailf0a ; real_T eck5rxblzt ; real_T
em1wbmdjow ; real_T jmm4c105ye ; real_T f05boyvyxi ; real_T dukvvezhh4 ;
struct { void * AQHandles ; } dqdopzr2jv ; struct { void * AQHandles ; }
ate5v5wkj2 ; struct { void * AQHandles ; } cj0ldup5gu ; struct { void *
AQHandles ; } jgeac3tq21 ; struct { void * AQHandles ; } irudyghn3o ; struct
{ void * AQHandles ; } nikehp134v ; struct { void * AQHandles ; } gxisg0jsgi
; struct { void * AQHandles ; } ibizqnzh0w ; struct { void * AQHandles ; }
aj1d134nmk ; struct { void * AQHandles ; } frybx0mj1e ; struct { void *
AQHandles ; } kx02fuyglo ; struct { void * AQHandles ; } ivzabugs2u ; struct
{ void * LoggedData [ 7 ] ; } cdaylxvgal ; struct { void * LoggedData [ 3 ] ;
} ininr2hc2p ; struct { void * AQHandles ; } jzwhcyoyki ; struct { void *
AQHandles ; } bqlccsba5g ; struct { void * AQHandles ; } i01ezsocmb ; struct
{ void * LoggedData [ 2 ] ; } fbajak152x ; struct { void * AQHandles ; }
hlhqdk1445 ; struct { void * AQHandles ; } kzgixjdqqa ; struct { void *
AQHandles ; } gynuv0krsy ; struct { void * AQHandles ; } cismfzyk15 ; int32_T
hndyq1p4da ; uint32_T mhe3tr5m1h ; uint32_T metkb44aex ; int_T bk5zchkp0d ;
int_T csyymkwdxj ; int_T dkt3lps5cz ; int_T phh4r25dqx ; int_T jpnae2oihw ;
int_T himiqz4m3m ; int_T cwrrpplnpb ; int_T plgoio1geg ; int_T kblv4axo3c ;
int_T m0ix3twyqi ; int_T kqqvkns214 ; int_T hg1heoe0ab ; int8_T j3jayeyudr ;
volatile int8_T johw44ce4i ; volatile int8_T o13svxvssq ; volatile int8_T
hnc4qrwkcy ; volatile int8_T nremqoghxn ; volatile int8_T azwx5q01st ;
volatile int8_T b0kxfxynn3 ; volatile int8_T j0engehfzs ; volatile int8_T
mm5oiqqh5r ; int8_T e2wr3vcmsf ; volatile int8_T pumuolxchk ; volatile int8_T
cfbyafp2yp ; volatile int8_T nu1w3dp3or ; volatile int8_T k0uf3b30j1 ;
volatile int8_T fx2rxnzutk ; volatile int8_T pgsfdyvzg3 ; int8_T jekggfsago ;
int8_T dpc4gpu00e ; uint8_T ldpanoehpw ; uint8_T iyzfufaeyj ; boolean_T
hxfbtrll0m ; j2diisom34j lofhsz2swn ; am5nrfreizz kqktv02dou ; pwecol01r52
hukxwubwy0 ; k25dfib3xb ngpegw05gp [ 1 ] ; nwl2anjax0 gugymbw2iq [ 1 ] ;
mgxctp3zid dwnfs4t0ur ; mgxctp3zid fuob0ddam2h ; } cz5yqt3r3x ; typedef
struct { real_T h3jcgsxl3g ; real_T nu0uj5bmhw [ 2 ] ; real_T bkhbsrsujg ;
real_T idw3fynbuy ; real_T ozjmimh0zs ; real_T ptjew1tdci ; real_T ovuztebk3m
; real_T dnh4xblb2m ; real_T frrsnlydio ; real_T gqe2iwaq4w ; real_T
gd53vwvy1z ; real_T b3wjkyrln3 ; real_T hys5vfyni2 ; real_T hlouk1zoiv ;
real_T gvprqgkyrb ; real_T fs3asrx1bi [ 4 ] ; real_T loymnatkey ; real_T
njzuxe2cj0 ; real_T lz5qf1zk2o [ 2 ] ; real_T iysy5igbzt ; real_T bhmvyo1hjl
; real_T iarnkoswlx ; real_T lywux4fr45 ; real_T igaknrnpbi ; real_T
fnlgzvne04 ; real_T blfalouxud ; real_T icfrc3vdyk ; real_T e3mnx1zztt ;
real_T ifte0hcjd1 ; real_T hzhiczi0l3 ; real_T ftygsqggs5 ; real_T kkyrf40rpz
[ 2 ] ; k4khejqp01 ngpegw05gp [ 1 ] ; goi00ob0ow gugymbw2iq [ 1 ] ; }
chmgkez0tp ; typedef int_T psrnl3geoq [ 1 ] ; typedef real_T pfsggdhooa [ 2 ]
; typedef struct { real_T h3jcgsxl3g ; real_T nu0uj5bmhw [ 2 ] ; real_T
bkhbsrsujg ; real_T idw3fynbuy ; real_T ozjmimh0zs ; real_T ptjew1tdci ;
real_T ovuztebk3m ; real_T dnh4xblb2m ; real_T frrsnlydio ; real_T gqe2iwaq4w
; real_T gd53vwvy1z ; real_T b3wjkyrln3 ; real_T hys5vfyni2 ; real_T
hlouk1zoiv ; real_T gvprqgkyrb ; real_T fs3asrx1bi [ 4 ] ; real_T loymnatkey
; real_T njzuxe2cj0 ; real_T lz5qf1zk2o [ 2 ] ; real_T iysy5igbzt ; real_T
bhmvyo1hjl ; real_T iarnkoswlx ; real_T lywux4fr45 ; real_T igaknrnpbi ;
real_T fnlgzvne04 ; real_T blfalouxud ; real_T icfrc3vdyk ; real_T e3mnx1zztt
; real_T ifte0hcjd1 ; real_T hzhiczi0l3 ; real_T ftygsqggs5 ; real_T
kkyrf40rpz [ 2 ] ; jxfiesig22 ngpegw05gp [ 1 ] ; pfxjuygh52 gugymbw2iq [ 1 ]
; } ihgnjubmvk ; typedef struct { boolean_T h3jcgsxl3g ; boolean_T nu0uj5bmhw
[ 2 ] ; boolean_T bkhbsrsujg ; boolean_T idw3fynbuy ; boolean_T ozjmimh0zs ;
boolean_T ptjew1tdci ; boolean_T ovuztebk3m ; boolean_T dnh4xblb2m ;
boolean_T frrsnlydio ; boolean_T gqe2iwaq4w ; boolean_T gd53vwvy1z ;
boolean_T b3wjkyrln3 ; boolean_T hys5vfyni2 ; boolean_T hlouk1zoiv ;
boolean_T gvprqgkyrb ; boolean_T fs3asrx1bi [ 4 ] ; boolean_T loymnatkey ;
boolean_T njzuxe2cj0 ; boolean_T lz5qf1zk2o [ 2 ] ; boolean_T iysy5igbzt ;
boolean_T bhmvyo1hjl ; boolean_T iarnkoswlx ; boolean_T lywux4fr45 ;
boolean_T igaknrnpbi ; boolean_T fnlgzvne04 ; boolean_T blfalouxud ;
boolean_T icfrc3vdyk ; boolean_T e3mnx1zztt ; boolean_T ifte0hcjd1 ;
boolean_T hzhiczi0l3 ; boolean_T ftygsqggs5 ; boolean_T kkyrf40rpz [ 2 ] ;
ksiv5ovpyy ngpegw05gp [ 1 ] ; o4rofp2w0q gugymbw2iq [ 1 ] ; } csjfowx4jp ;
typedef struct { real_T h3jcgsxl3g ; real_T nu0uj5bmhw [ 2 ] ; real_T
bkhbsrsujg ; real_T idw3fynbuy ; real_T ozjmimh0zs ; real_T ptjew1tdci ;
real_T ovuztebk3m ; real_T dnh4xblb2m ; real_T frrsnlydio ; real_T gqe2iwaq4w
; real_T gd53vwvy1z ; real_T b3wjkyrln3 ; real_T hys5vfyni2 ; real_T
hlouk1zoiv ; real_T gvprqgkyrb ; real_T fs3asrx1bi [ 4 ] ; real_T loymnatkey
; real_T njzuxe2cj0 ; real_T lz5qf1zk2o [ 2 ] ; real_T iysy5igbzt ; real_T
bhmvyo1hjl ; real_T iarnkoswlx ; real_T lywux4fr45 ; real_T igaknrnpbi ;
real_T fnlgzvne04 ; real_T blfalouxud ; real_T icfrc3vdyk ; real_T e3mnx1zztt
; real_T ifte0hcjd1 ; real_T hzhiczi0l3 ; real_T ftygsqggs5 ; real_T
kkyrf40rpz [ 2 ] ; glcyn3bqkt ngpegw05gp [ 1 ] ; a5qkuvfxsn gugymbw2iq [ 1 ]
; } ij1e2btwbd ; typedef struct { real_T h3jcgsxl3g ; real_T nu0uj5bmhw [ 2 ]
; real_T bkhbsrsujg ; real_T idw3fynbuy ; real_T ozjmimh0zs ; real_T
ptjew1tdci ; real_T ovuztebk3m ; real_T dnh4xblb2m ; real_T frrsnlydio ;
real_T gqe2iwaq4w ; real_T gd53vwvy1z ; real_T b3wjkyrln3 ; real_T hys5vfyni2
; real_T hlouk1zoiv ; real_T gvprqgkyrb ; real_T fs3asrx1bi [ 4 ] ; real_T
loymnatkey ; real_T njzuxe2cj0 ; real_T lz5qf1zk2o [ 2 ] ; real_T iysy5igbzt
; real_T bhmvyo1hjl ; real_T iarnkoswlx ; real_T lywux4fr45 ; real_T
igaknrnpbi ; real_T fnlgzvne04 ; real_T blfalouxud ; real_T icfrc3vdyk ;
real_T e3mnx1zztt ; real_T ifte0hcjd1 ; real_T hzhiczi0l3 ; real_T ftygsqggs5
; real_T kkyrf40rpz [ 2 ] ; mxsbo3s1ds ngpegw05gp [ 1 ] ; mksthrfmu5
gugymbw2iq [ 1 ] ; } ct0khgqqw5 ; typedef struct { real_T h3jcgsxl3g ; real_T
nu0uj5bmhw [ 2 ] ; real_T bkhbsrsujg ; real_T idw3fynbuy ; real_T ozjmimh0zs
; real_T ptjew1tdci ; real_T ovuztebk3m ; real_T dnh4xblb2m ; real_T
frrsnlydio ; real_T gqe2iwaq4w ; real_T gd53vwvy1z ; real_T b3wjkyrln3 ;
real_T hys5vfyni2 ; real_T hlouk1zoiv ; real_T gvprqgkyrb ; real_T fs3asrx1bi
[ 4 ] ; real_T loymnatkey ; real_T njzuxe2cj0 ; real_T lz5qf1zk2o [ 2 ] ;
real_T iysy5igbzt ; real_T bhmvyo1hjl ; real_T iarnkoswlx ; real_T lywux4fr45
; real_T igaknrnpbi ; real_T fnlgzvne04 ; real_T blfalouxud ; real_T
icfrc3vdyk ; real_T e3mnx1zztt ; real_T ifte0hcjd1 ; real_T hzhiczi0l3 ;
real_T ftygsqggs5 ; real_T kkyrf40rpz [ 2 ] ; h0h0sxessv ngpegw05gp [ 1 ] ;
ejtz25ztif gugymbw2iq [ 1 ] ; } ih4uf25wks ; typedef struct { real_T
f1oxvk4tah ; real_T lx5dierh2f ; real_T mrl2anhzoj ; real_T llysr54lb0 ;
real_T ilcoyzdnkq ; real_T nkt40mqyk5 ; real_T mzvvwy2jko ; real_T l4jjin13m4
; real_T fqh42shget ; real_T it1ks1knk1 ; real_T hkjecwkoxq ; real_T
idcagc5jv4 ; real_T et32jteqej ; real_T jvhl4pwkuk ; real_T gecavxxci2 ; }
bor3rs1x4c ; typedef struct { ZCSigState hiezj5oam5 ; ZCSigState b5lqrekcd2 ;
ZCSigState k5hpujcbj0 ; } noe4wlvctt ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo * childMMI [ 3 ] ; }
DataMapInfo ; struct n1rm1v1mrv_ { real_T phi_Value ; real_T psi_Value ; } ;
struct hncqrffgba_ { boolean_T yn_Y0 ; } ; struct e1x3oofaiy_ { real_T
Constant_Value ; boolean_T yn_Y0 ; boolean_T UnitDelay_InitialCondition ;
boolean_T CombinatorialLogic_table [ 8 ] ; } ; struct oy5jc31flu_ { real_T
Constant_Value ; real_T Constant1_Value ; real_T Constant2_Value ; } ; struct
pfusmvg4mq_ { real_T u_Gain ; } ; struct m3chvwfzhf_ { pfusmvg4mq koua2ggizf0
; oy5jc31flu er0qshcg2fb ; e1x3oofaiy ost4s50i5x5 ; hncqrffgba bsy0pqewaju ;
} ; struct pb0g5jfx5m_ { m3chvwfzhf eq332hab4o ; } ; struct epsb413ikh_ {
pfusmvg4mq jl5e4qcf5y ; oy5jc31flu n4c32cozqj ; e1x3oofaiy pjngj1ll1b ;
hncqrffgba o4j5vlwe14 ; } ; struct bphnv3gzy1_ { epsb413ikh neijo20b0e ; } ;
struct kjmvupbl2i3_ { real_T DragForce_Cs [ 2 ] ; real_T DragForce_Cym [ 2 ]
; real_T VehicleBody3DOFLongitudinal_FsbF [ 7 ] ; real_T
VehicleBody3DOFLongitudinal_FsbR [ 7 ] ; real_T
VehicleBody3DOFLongitudinal_FskF [ 6 ] ; real_T
VehicleBody3DOFLongitudinal_FskR [ 6 ] ; real_T SignalHold_IC ; real_T
SignalHold_IC_bl0xhwyuht ; real_T DragForce_R ; real_T
HardPointCoordinateTransformFront_R_T2 ; real_T
HardPointCoordinateTransformRear_R_T2 ; real_T LithiumIonBatteryPack_Vinit ;
real_T DragForce_beta_w [ 2 ] ; real_T CompareToConstant_const ; real_T
CompareToConstant1_const ; real_T CompareToConstant2_const ; real_T
CompareToConstant3_const ; real_T CompareToConstant4_const ; real_T
VehicleBody3DOFLongitudinal_dzdotsF [ 7 ] ; real_T
VehicleBody3DOFLongitudinal_dzdotsR [ 7 ] ; real_T
VehicleBody3DOFLongitudinal_dzsF [ 6 ] ; real_T
VehicleBody3DOFLongitudinal_dzsR [ 6 ] ; real_T uDOFBodyAxes_g ; real_T
uDOFBodyAxes_pos_ini [ 2 ] ; real_T VehicleBody3DOFLongitudinal_q_o ; real_T
VehicleBody3DOFLongitudinal_theta_o ; real_T div0protectabspoly_thresh ;
real_T uDOFBodyAxes_v_ini ; real_T VehicleBody3DOFLongitudinal_zdot_o ;
real_T u1_UpperSat ; real_T u1_LowerSat ; real_T u0_UpperSat ; real_T
u0_LowerSat ; real_T OpenDifferential_shaftSwitchMask ; real_T Constant_Value
; real_T Constant_Value_agm4xpnhd5 ; real_T Integrator1_IC ; real_T
Saturation_UpperSat ; real_T Saturation_LowerSat ; real_T Constant4_Value ;
real_T IntegratorLimited_LowerSat ; real_T SOCRatioto_Gain ; real_T
Switch_Threshold ; real_T uDLookupTable_tableData [ 601 ] ; real_T
uDLookupTable_bp01Data [ 601 ] ; real_T Saturation_UpperSat_ncjkk1jucd ;
real_T Saturation_LowerSat_g5xnm5rrtb ; real_T DeadZone_Start ; real_T
DeadZone_End ; real_T DeadZone2_Start ; real_T DeadZone2_End ; real_T
MaxTorqueLimit_tableData [ 58 ] ; real_T MaxTorqueLimit_bp01Data [ 58 ] ;
real_T Integrator_IC ; real_T Interpolatedzerocrossing_tableData [ 2 ] ;
real_T Interpolatedzerocrossing_bp01Data [ 2 ] ; real_T
uDLookupTable_tableData_boreho334u [ 1932 ] ; real_T
uDLookupTable_bp01Data_j0jelwswp2 [ 42 ] ; real_T uDLookupTable_bp02Data [ 46
] ; real_T Saturation_UpperSat_eo55tnq2by ; real_T
Saturation_LowerSat_l32n30czhn ; real_T MotorCouplingDynamics_A ; real_T
MotorCouplingDynamics_C ; real_T DeadZone1_Start ; real_T DeadZone1_End ;
real_T Constant8_Value ; real_T Constant9_Value ; real_T
Theta_WrappedStateUpperValue ; real_T Theta_WrappedStateLowerValue ; real_T
Integrator1_IC_mcnartj4ei ; real_T Memory_InitialCondition ; real_T
Memory_InitialCondition_le3kqxuyfm ; real_T Constant1_Value ; real_T
Constant3_Value ; real_T Integrator_IC_h1e41bii31 ; real_T
Signconvention_Gain ; real_T Integrator1_IC_mwxgl4nrr1 ; real_T
DisallowNegativeBrakeTorque_UpperSat ; real_T
DisallowNegativeBrakeTorque_LowerSat ; real_T Integrator1_IC_iuffdm3tby ;
real_T Integrator_IC_k10nspe4rb ; real_T Signconvention_Gain_mp05x1ag5n ;
real_T DisallowNegativeBrakeTorque_UpperSat_o1kzlkoiof ; real_T
DisallowNegativeBrakeTorque_LowerSat_dih5vnpzw3 ; real_T
Constant3_Value_m0hpy20xls ; real_T Constant6_Value ; real_T Constant7_Value
; real_T NFNR_Gain [ 2 ] ; real_T Gain_Gain [ 3 ] ; real_T Gain1_Gain [ 3 ] ;
real_T u_Gain [ 3 ] ; real_T Crm_tableData [ 2 ] ; real_T Crm_bp01Data [ 2 ]
; real_T MatrixGain_Gain [ 4 ] ; real_T Constant5_Value ; real_T
Integrator_IC_aozxujrrto ; real_T Integrator_IC_giy1ho51ik ; real_T
mtomile_Gain ; real_T Integrator1_IC_b5h1v25iea ; real_T m3toUSGal_Gain ;
real_T Saturation1_UpperSat ; real_T Saturation1_LowerSat ; real_T
Integrator_IC_m2ei5srufe ; real_T mtomi_Gain ; real_T
Saturation_UpperSat_petchupvyj ; real_T Saturation_LowerSat_deqaxwlb4p ;
real_T mtokm_Gain ; real_T Saturation1_UpperSat_jybwri54h2 ; real_T
Saturation1_LowerSat_indvuhds5q ; real_T Integrator1_IC_exhcff4x2k ; real_T
Integrator2_IC ; real_T Integrator3_IC ; real_T Integrator4_IC ; real_T
Gain_Gain_aepvwbsvgj ; real_T m3pergal_Gain ; real_T mto100Km_Gain ; real_T
Saturation_UpperSat_ffmhckns0u ; real_T Saturation_LowerSat_git52jcjbr ;
real_T Constant_Value_hmxpxo4t1j ; real_T Integrator2_IC_fjcqqry33i ; real_T
UnitDelay_InitialCondition [ 2 ] ; real_T HitCrossing_Offset ; real_T
FirstOrderHold1_IniOut ; real_T FirstOrderHold1_ErrTol ; real_T
FirstOrderHold_IniOut ; real_T FirstOrderHold_ErrTol ; real_T
DeadZone_Start_md5ahj13hx ; real_T DeadZone_End_lo1jymlqtv ; real_T uNF_Gain
; real_T uNR_Gain ; real_T Constant_Value_o0rfnlk4rs ; real_T
Constant1_Value_lrolnezkiq ; real_T Constant10_Value ; real_T
Constant11_Value ; real_T Constant2_Value ; real_T NFNRb_Gain [ 2 ] ; real_T
NFNRk_Gain [ 2 ] ; real_T Constant_Value_nagsezfz0a ; real_T
Constant1_Value_e5rtc4313u ; real_T Constant2_Value_mgh0x4uagx ; real_T
Constant3_Value_mvlje44lcv ; real_T Constant_Value_mx4nhpobes ; real_T
Constant1_Value_fzmubeu2l0 ; real_T Constant2_Value_byckym2ock ; real_T
Constant3_Value_c4qtutqm5t ; real_T Constant_Value_drg3tscxmg ; real_T
Constant1_Value_mtzuqwvwq1 ; real_T Constant2_Value_m2qnkpfbgc ; real_T
Constant3_Value_cco4fo4joe ; real_T Constant_Value_bj45letrrr ; real_T
Constant1_Value_mjx3l44xzr ; real_T Constant2_Value_gwwihg3nf5 ; real_T
Constant3_Value_otshnnfmem ; real_T Memory_InitialCondition_cwhmkrh11u ;
real_T Integrator_UpperSat ; real_T Integrator_LowerSat ; real_T
Gain1_Gain_fidaxlyian ; real_T Switch_Threshold_ga0yoodqm3 ; real_T
Gain1_Gain_ii2idyqiil ; real_T Gain2_Gain ; real_T Gain_Gain_mtqxhf4gg3 ;
real_T Switch_Threshold_avxmrzxuk0 ; real_T Gain1_Gain_ffmnri5gvm ; real_T
Gain2_Gain_nrz2w3wsty ; real_T Gain_Gain_pcvx1pzleq ; real_T
Switch_Threshold_gyzjwoigpp ; real_T Gain1_Gain_myke1ppinz ; real_T
Gain2_Gain_cs3tlkzyou ; real_T Gain_Gain_aswlq0g5zi ; real_T Em_tableData [
101 ] ; real_T Em_bp01Data [ 101 ] ; real_T Constant3_Value_hsmcqc2qzw ;
real_T DeadZone3_Start ; real_T DeadZone3_End ; real_T EngTrq_Value ; real_T
EngSpd_Value ; real_T USEPAkwhUSgalequivalent_Value ; real_T sperh_Value ;
real_T wperkw_Value ; real_T Constant_Value_i0lrc5dd0p ; real_T
Constant_Value_lmvdjicp50 ; real_T Constant_Value_gn4owpvnhh ; real_T
Constant1_Value_krev4j2l44 ; real_T Constant1_Value_m0radogykp [ 4 ] ; real_T
Gain_Gain_anjvar3enl ; real_T Gain1_Gain_b2x0xrdboa ; real_T
Constant2_Value_cv5k10omis ; real_T Constant8_Value_orsngthdfl ; real_T
repeat_Value ; real_T tFinal_Value ; real_T FExtConstant_Value [ 3 ] ; real_T
MExtConstant_Value [ 3 ] ; real_T Constant2_Value_pdymtmke3u ; real_T
Constant_Value_fqa2j2pnak ; real_T Constant1_Value_ieeszgtdrd ; real_T
Constant12_Value ; real_T Constant2_Value_k1kw5pzbeu ; real_T
Constant_Value_bhk4qsr3vd ; real_T Constant4_Value_an3au0uy5w [ 3 ] ; real_T
FxType_Value ; real_T Saturation_UpperSat_bopsnau5hk ; real_T
Saturation_LowerSat_dbw20intcx ; real_T Constant_Value_ox4b0qmmua ; real_T
Constant1_Value_madrljuz5s ; real_T Constant7_Value_jw4525ferj ; real_T
Constant6_Value_haqashkspo ; real_T Constant2_Value_hrl4h1nv5h [ 34 ] ;
real_T Constant19_Value [ 3 ] ; real_T Constant12_Value_i31yk0uobv [ 3 ] ;
real_T Constant14_Value [ 9 ] ; real_T Constant5_Value_dacbkkfpn1 ; real_T
Constant2_Value_oxwaq1rttm ; real_T Constant16_Value ; real_T
Constant7_Value_foxxbjtyrb ; real_T Constant9_Value_eysw0sbbzh ; real_T
Constant11_Value_nocbm1rgns ; real_T Constant10_Value_avvpfk2yix ; real_T
Constant1_Value_mn3owz1rml ; real_T Constant3_Value_k0ow21geiu ; real_T
Constant19_Value_oenymaoxve [ 3 ] ; real_T Constant12_Value_farpfklrnv [ 3 ]
; real_T Constant14_Value_lybnj0wjpu [ 9 ] ; real_T
Constant14_Value_lvkuq2smhk ; real_T Constant1_Value_cfz1jt3mva ; real_T
Constant19_Value_n1gnmpmhhz ; real_T Constant2_Value_oss1gtz0qr ; real_T
Constant3_Value_cfl5diz1lh ; real_T Constant4_Value_fhufcungmj ; real_T
Constant5_Value_a24smbxcxn ; real_T Constant6_Value_gp2r5vw2mo ; real_T
Constant7_Value_k2q5ccyqdb ; real_T Constant8_Value_h25n4izmhu ; real_T
Constant9_Value_drrybtftp2 ; real_T Constant10_Value_mqgatp2bxz ; real_T
Constant11_Value_b51kwi1veq ; real_T Constant16_Value_lkmy5w415o ; real_T
Constant17_Value ; real_T Constant13_Value ; real_T Constant15_Value ; real_T
Constant21_Value ; real_T Constant22_Value ; real_T Constant18_Value ; real_T
Constant20_Value ; real_T Constant24_Value ; real_T Constant23_Value ; real_T
rollType_Value ; real_T vertType_Value ; real_T TorqueConversion1_Gain ;
real_T FxType_Value_ia5teaumdj ; real_T Saturation_UpperSat_bsj0f3al0o ;
real_T Saturation_LowerSat_ju3hf2ul0w ; real_T Constant_Value_lrohdfumq0 ;
real_T Constant1_Value_axx41mppte ; real_T Constant7_Value_i21l0p1igp ;
real_T Constant6_Value_fa5rtppirt ; real_T Constant2_Value_iowj05grf3 [ 34 ]
; real_T Constant19_Value_dpn5hbziwd [ 3 ] ; real_T
Constant12_Value_ivwhvv2f32 [ 3 ] ; real_T Constant14_Value_lrrto4y5wk [ 9 ]
; real_T Constant5_Value_nrupuvlr2x ; real_T Constant2_Value_btgexx4rdf ;
real_T Constant16_Value_outaov0n1i ; real_T Constant7_Value_jc1h2p4tmo ;
real_T Constant9_Value_bpp23kljtg ; real_T Constant11_Value_k5z1c1pccv ;
real_T Constant10_Value_chawn1iunv ; real_T Constant1_Value_ijjucdpx4z ;
real_T Constant3_Value_kd1cdwvsmq ; real_T Constant19_Value_carumowgfd [ 3 ]
; real_T Constant12_Value_p41n2rkj3c [ 3 ] ; real_T
Constant14_Value_iudgfqgatl [ 9 ] ; real_T Constant14_Value_ejjg4lvjbm ;
real_T Constant1_Value_lssuufufgs ; real_T Constant19_Value_ie2icqjt3r ;
real_T Constant2_Value_gto0akxltq ; real_T Constant3_Value_pwu4uracio ;
real_T Constant4_Value_hwugnn04il ; real_T Constant5_Value_gfvvgq5u2g ;
real_T Constant6_Value_bhkz5yhocd ; real_T Constant7_Value_ht4v3ntoks ;
real_T Constant8_Value_dxmm43aqzd ; real_T Constant9_Value_c24m3kfu3n ;
real_T Constant10_Value_beeuojsfr5 ; real_T Constant11_Value_hxdnpy4b1i ;
real_T Constant16_Value_ouvmeicr45 ; real_T Constant17_Value_m0zpppdh3a ;
real_T Constant13_Value_j2lsewktzu ; real_T Constant15_Value_fipekdq3rg ;
real_T Constant21_Value_ellpoqjiq3 ; real_T Constant22_Value_bc01pf1do2 ;
real_T Constant18_Value_pgi4gobtba ; real_T Constant20_Value_iazvmhwnvz ;
real_T Constant24_Value_ocljdcjnlv ; real_T Constant23_Value_njgl4ivha2 ;
real_T rollType_Value_antrfjfwjn ; real_T vertType_Value_gb2pmxm2ig ; real_T
TorqueConversion1_Gain_oj0lwphizv ; real_T Constant_Value_fgrzpiya5g ; real_T
Constant6_Value_m2h55yhwr4 ; real_T Switch1_Threshold ; real_T
Constant_Value_khdc5alm40 ; real_T Constant_Value_fuym3tk21u ; real_T
Constant1_Value_aimltjen1o ; real_T Constant_Value_p1rckdatju ; real_T
Constant_Value_hjedmjpnna ; real_T Constant1_Value_a4s255zunz ; real_T
Constant_Value_oz0y4pnsuv ; real_T Constant_Value_nr1euqdfq2 ; real_T
Constant1_Value_nx3a4k3tdd ; real_T Constant_Value_iehwwg2crd ; real_T
Constant1_Value_a0no2aojio ; real_T Switch_Threshold_gdeuynuela ; real_T
Reset_Value ; real_T Reset_Value_lzuzrr2wh5 ; real_T Reset_Value_huedlplppt ;
real_T ClsdLpFuelMult_Value ; real_T FuelVolFlw_Value ; real_T TPCO_Value ;
real_T TPCO2_Value ; real_T TPHC_Value ; real_T TPNOx_Value ; uint32_T
uDLookupTable_maxIndex [ 2 ] ; uint32_T R_maxIndex [ 2 ] ; boolean_T
Constant9_Value_bderlrgqtg ; boolean_T Constant6_Value_ntv4lpcswr ; boolean_T
Constant7_Value_dyep4qzmxf ; boolean_T Constant12_Value_lr1o3jzrdw ;
boolean_T Constant11_Value_doz0cijqot ; boolean_T Constant10_Value_ok4kguqinp
; uint8_T GradeSource_CurrentSetting ; bphnv3gzy1 ngpegw05gp ; pb0g5jfx5m
gugymbw2iq ; n1rm1v1mrv k04ingjquh ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern iowqpk3eub iowqpk3eub2 ; extern
chmgkez0tp chmgkez0tpf ; extern cz5yqt3r3x cz5yqt3r3xb ; extern noe4wlvctt
noe4wlvctth ; extern kjmvupbl2i3 kjmvupbl2i ; extern real_T
rtP__CtrlVcuEvBattChrgPwrMax2f2EvVCU_sldd_ ; extern real_T
rtP__CtrlVcuEvBattDischrgPwrMax2f2EvVCU_sldd_ ; extern real_T
rtP__CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_ [ 11 ] ; extern real_T
rtP__CtrlVcuEvDischrgLmtBpt2f2EvVCU_sldd_ [ 11 ] ; extern real_T
rtP__CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_ [ 2 ] ; extern real_T
rtP__CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_ [ 2 ] ; extern real_T
rtP__CtrlVcuEvSocBpt2f2EvVCU_sldd_ [ 11 ] ; extern real_T
rtP__DriverAeroRes2f2Driver_sldd_ ; extern real_T
rtP__DriverDrivelineRes2f2Driver_sldd_ ; extern real_T
rtP__DriverInitialGear2f2Driver_sldd_ ; extern real_T
rtP__DriverPreviewDist2f2Driver_sldd_ ; extern real_T
rtP__DriverRollRes2f2Driver_sldd_ ; extern real_T
rtP__DriverShiftTime2f2Driver_sldd_ ; extern real_T
rtP__DriverTimeConst2f2Driver_sldd_ ; extern real_T
rtP__DriverTractiveForce2f2Driver_sldd_ ; extern real_T
rtP__EnvAbsPrs2f2Environment_sldd_ ; extern real_T
rtP__EnvAirTemp2f2Environment_sldd_ ; extern real_T
rtP__EnvGrvty2f2Environment_sldd_ ; extern real_T
rtP__EnvNomFrictionScaling2f2Environment_sldd_ ; extern real_T
rtP__EnvNominalGrade2f2Environment_sldd_ ; extern real_T
rtP__EnvWindVelX2f2Environment_sldd_ ; extern real_T
rtP__EnvWindVelY2f2Environment_sldd_ ; extern real_T
rtP__EnvWindVelZ2f2Environment_sldd_ ; extern real_T
rtP__PlntBattIntrnRes2f2BatteryDCDC_sldd_ [ 42 ] ; extern real_T
rtP__PlntBattNumCellPar2f2BatteryDCDC_sldd_ ; extern real_T
rtP__PlntBattNumCellSer2f2BatteryDCDC_sldd_ ; extern real_T
rtP__PlntBattSocBpt2f2BatteryDCDC_sldd_ [ 6 ] ; extern real_T
rtP__PlntBattTempBpt2f2BatteryDCDC_sldd_ [ 7 ] ; extern real_T
rtP__PlntBattTimeCnst2f2BatteryDCDC_sldd_ ; extern real_T
rtP__PlntBrkActrBoreFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkActrBoreRear2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkKinFricCffRear2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkNumPadsRear2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkPadMeanRadiusRear2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkRearBias2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkStcFricCffFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkStcFricCffRear2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkWc2f2PassVeh_sldd_ ; extern real_T
rtP__PlntDiffrntlAxl1Damp2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDiffrntlAxl1Inertia2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDiffrntlAxl1InitVel2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDiffrntlAxl2Damp2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDiffrntlAxl2Inertia2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDiffrntlAxl2InitVel2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDiffrntlCarrDamp2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDiffrntlCarrInertia2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDriveshftDamp2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDriveshftDampCutoffFreq2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDriveshftInitDeflect2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDriveshftInitVel2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDriveshftStiff2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntEM1Damp2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntEM1Inertia2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntEM1InitVel2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntEM1TimeCnst2f2ElectricMachine1_sldd_ ; extern real_T
rtP__PlntVehAeroDragCff2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehAeroFrntArea2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehAeroLiftCff2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehAeroPitchCff2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehCGHgtAxl2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehDstCGFrntAxl2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehDstCGRearAxl2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehFzFlt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehInitLongVel2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehMass2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehPitchMomentInertia2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlDampCoeffFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlDampCoeffRear2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlInertiaFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlInertiaRear2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlInitAngVel2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlLdRadius2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlLnrVelForceComp2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlMaxFz2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlMaxSlipRatio2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlMinFz2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlNrmlForceExp2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlPrsFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlPrsRear2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlQuadVelForceComp2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlRlxLngth2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlTirPrsExp2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlUnldRadius2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlVelIndpntForceCff2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlVelTolLowVel2f2PassVeh_sldd_ ; extern real_T
rtP__Spark_EffMap2f2SparkEM_sldd_ [ 483 ] ; extern real_T
rtP__Spark_MaxTrq2f2SparkEM_sldd_ [ 29 ] ; extern real_T
rtP__Spark_MaxTrq_Spd2f2SparkEM_sldd_ [ 29 ] ; extern real_T
rtP__Spark_Spd_BrkPts2f2SparkEM_sldd_ [ 21 ] ; extern real_T
rtP__Spark_Trq_BrkPts2f2SparkEM_sldd_ [ 23 ] ; extern real_T
rtP__batt_cap_init2f2SparkBat_sldd_ ; extern real_T
rtP__soc_init2f2SparkBat_sldd_ ; extern mxArray * mr_SparkEV_GetDWork ( ) ;
extern void mr_SparkEV_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_SparkEV_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * SparkEV_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
