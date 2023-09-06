#include "rtwtypes.h"
#include "interp2_0XbyHNhZ.h"

real_T interp2_0XbyHNhZ(const real_T varargin_1[3], const real_T varargin_2[3],
  const real_T varargin_3[9], real_T varargin_4, real_T varargin_5)
{
  real_T Vq;
  real_T qx1;
  real_T rx;
  int32_T ix;
  int32_T low_ip1;
  if ((varargin_4 >= varargin_1[0]) && (varargin_4 <= varargin_1[2]) &&
      (varargin_5 >= varargin_2[0]) && (varargin_5 <= varargin_2[2])) {
    ix = 0;
    if (varargin_4 >= varargin_1[1]) {
      ix = 1;
    }

    low_ip1 = 0;
    if (varargin_5 >= varargin_2[1]) {
      low_ip1 = 1;
    }

    if (varargin_4 == varargin_1[ix]) {
      qx1 = varargin_3[3 * ix + low_ip1];
      Vq = varargin_3[(3 * ix + low_ip1) + 1];
    } else if (varargin_1[ix + 1] == varargin_4) {
      qx1 = varargin_3[(ix + 1) * 3 + low_ip1];
      Vq = varargin_3[((ix + 1) * 3 + low_ip1) + 1];
    } else {
      rx = (varargin_4 - varargin_1[ix]) / (varargin_1[ix + 1] - varargin_1[ix]);
      if (varargin_3[(ix + 1) * 3 + low_ip1] == varargin_3[3 * ix + low_ip1]) {
        qx1 = varargin_3[3 * ix + low_ip1];
      } else {
        qx1 = varargin_3[(ix + 1) * 3 + low_ip1] * rx + varargin_3[3 * ix +
          low_ip1] * (1.0 - rx);
      }

      if (varargin_3[((ix + 1) * 3 + low_ip1) + 1] == varargin_3[(3 * ix +
           low_ip1) + 1]) {
        Vq = varargin_3[(3 * ix + low_ip1) + 1];
      } else {
        Vq = varargin_3[((ix + 1) * 3 + low_ip1) + 1] * rx + varargin_3[(3 * ix
          + low_ip1) + 1] * (1.0 - rx);
      }
    }

    if ((varargin_5 == varargin_2[low_ip1]) || (qx1 == Vq)) {
      Vq = qx1;
    } else if (!(varargin_2[low_ip1 + 1] == varargin_5)) {
      rx = (varargin_5 - varargin_2[low_ip1]) / (varargin_2[low_ip1 + 1] -
        varargin_2[low_ip1]);
      Vq = (1.0 - rx) * qx1 + rx * Vq;
    }
  } else {
    Vq = 0.0;
  }

  return Vq;
}
