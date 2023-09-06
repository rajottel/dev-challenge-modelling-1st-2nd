#include "look_SplNBinCZcd.h"
#include "plook_binc.h"
#include "intrp_NSplcd.h"
#include "rtsplntypes.h"
#include "rtwtypes.h"
#include "multiword_types.h"

real_T look_SplNBinCZcd(uint32_T numDims, const real_T* u, const
  rt_LUTSplineWork * const SWork)
{
  rt_LUTnWork * const TWork_look = SWork->m_TWork;
  real_T* const fraction = (real_T*) TWork_look->m_bpLambda;
  uint32_T* const bpIdx = TWork_look->m_bpIndex;
  const uint32_T* const maxIndex = TWork_look->m_maxIndex;
  uint32_T k;
  for (k = 0U; k < numDims; k++) {
    const real_T* const bpData = ((const real_T * const *)
      TWork_look->m_bpDataSet)[k];
    bpIdx[k] = plook_binc(u[k], bpData, maxIndex[k], &fraction[k]);
  }

  return(intrp_NSplcd(numDims, SWork, 1U));
}
