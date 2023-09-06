#ifndef RTW_HEADER_intrp_NSplcd_h_
#define RTW_HEADER_intrp_NSplcd_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "rtsplntypes.h"

real_T intrp_NSplcd(uint32_T numDims, const rt_LUTSplineWork * const splWork,
                    uint32_T extrapMethod);

#endif
