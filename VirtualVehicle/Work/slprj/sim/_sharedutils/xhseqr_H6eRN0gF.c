#include "rtwtypes.h"
#include "xhseqr_H6eRN0gF.h"
#include "mwmathutil.h"

int32_T xhseqr_H6eRN0gF(real_T h[4], real_T z[4])
{
  real_T aa;
  real_T ab;
  real_T b_bb;
  real_T ba;
  real_T htmp1;
  real_T htmp2;
  real_T p;
  real_T sab;
  real_T sac;
  real_T tau;
  int32_T count;
  int32_T i;
  int32_T info;
  int32_T k;
  int32_T tmp;
  boolean_T exitg1;
  info = 0;
  i = 1;
  while (i + 1 >= 1) {
    k = i + 1;
    exitg1 = false;
    while ((!exitg1) && ((k > 1) && (!(muDoubleScalarAbs(h[1]) <=
              2.0041683600089728E-292)))) {
      if (muDoubleScalarAbs(h[1]) <= (muDoubleScalarAbs(h[0]) +
           muDoubleScalarAbs(h[3])) * 2.2204460492503131E-16) {
        htmp1 = muDoubleScalarAbs(h[1]);
        htmp2 = muDoubleScalarAbs(h[2]);
        if (htmp1 > htmp2) {
          ab = htmp1;
          ba = htmp2;
        } else {
          ab = htmp2;
          ba = htmp1;
        }

        htmp1 = muDoubleScalarAbs(h[3]);
        htmp2 = muDoubleScalarAbs(h[0] - h[3]);
        if (htmp1 > htmp2) {
          aa = htmp1;
          htmp1 = htmp2;
        } else {
          aa = htmp2;
        }

        htmp2 = aa + ab;
        if (ab / htmp2 * ba <= muDoubleScalarMax(2.0041683600089728E-292, aa /
             htmp2 * htmp1 * 2.2204460492503131E-16)) {
          exitg1 = true;
        } else {
          k = 1;
        }
      } else {
        k = 1;
      }
    }

    if (k > 1) {
      h[1] = 0.0;
    }

    if ((i + 1 != k) && (k == i)) {
      b_bb = h[0];
      aa = h[i << 1];
      htmp2 = h[i];
      p = h[(i << 1) + i];
      if (h[i] == 0.0) {
        htmp1 = 1.0;
        ab = 0.0;
      } else if (h[i << 1] == 0.0) {
        htmp1 = 0.0;
        ab = 1.0;
        p = h[0];
        b_bb = h[(i << 1) + i];
        aa = -h[i];
        htmp2 = 0.0;
      } else if ((h[0] - h[(i << 1) + i] == 0.0) && ((h[i << 1] < 0.0) != (h[i] <
        0.0))) {
        htmp1 = 1.0;
        ab = 0.0;
      } else {
        ba = h[0] - h[(i << 1) + i];
        p = 0.5 * ba;
        ab = muDoubleScalarMax(muDoubleScalarAbs(h[i << 1]), muDoubleScalarAbs
          (h[i]));
        if (!(h[i << 1] < 0.0)) {
          count = 1;
        } else {
          count = -1;
        }

        if (!(h[i] < 0.0)) {
          tmp = 1;
        } else {
          tmp = -1;
        }

        aa = muDoubleScalarMin(muDoubleScalarAbs(h[i << 1]), muDoubleScalarAbs
          (h[i])) * (real_T)count * (real_T)tmp;
        htmp2 = muDoubleScalarMax(muDoubleScalarAbs(p), ab);
        htmp1 = p / htmp2 * p + ab / htmp2 * aa;
        if (htmp1 >= 8.8817841970012523E-16) {
          htmp1 = muDoubleScalarSqrt(htmp2) * muDoubleScalarSqrt(htmp1);
          if (p < 0.0) {
            htmp1 = -htmp1;
          }

          htmp1 += p;
          b_bb = h[(i << 1) + i] + htmp1;
          p = h[(i << 1) + i] - ab / htmp1 * aa;
          tau = muDoubleScalarHypot(h[i], htmp1);
          htmp1 /= tau;
          ab = h[i] / tau;
          aa = h[i << 1] - h[i];
          htmp2 = 0.0;
        } else {
          ab = h[i << 1] + h[i];
          htmp2 = muDoubleScalarMax(muDoubleScalarAbs(ba), muDoubleScalarAbs(ab));
          count = 0;
          while ((htmp2 >= 7.4428285367870146E+137) && (count <= 20)) {
            ab *= 1.3435752215134178E-138;
            ba *= 1.3435752215134178E-138;
            htmp2 = muDoubleScalarMax(muDoubleScalarAbs(ba), muDoubleScalarAbs
              (ab));
            count++;
          }

          while ((htmp2 <= 1.3435752215134178E-138) && (count <= 20)) {
            ab *= 7.4428285367870146E+137;
            ba *= 7.4428285367870146E+137;
            htmp2 = muDoubleScalarMax(muDoubleScalarAbs(ba), muDoubleScalarAbs
              (ab));
            count++;
          }

          tau = muDoubleScalarHypot(ab, ba);
          htmp1 = muDoubleScalarSqrt((muDoubleScalarAbs(ab) / tau + 1.0) * 0.5);
          if (!(ab < 0.0)) {
            count = 1;
          } else {
            count = -1;
          }

          ab = -(0.5 * ba / (tau * htmp1)) * (real_T)count;
          ba = h[i << 1] * ab + h[0] * htmp1;
          b_bb = h[i << 1] * htmp1 + -h[0] * ab;
          p = h[(i << 1) + i] * ab + h[i] * htmp1;
          tau = h[(i << 1) + i] * htmp1 + -h[i] * ab;
          aa = b_bb * htmp1 + tau * ab;
          htmp2 = -ba * ab + p * htmp1;
          ba = ((ba * htmp1 + p * ab) + (-b_bb * ab + tau * htmp1)) * 0.5;
          b_bb = ba;
          p = ba;
          if (htmp2 != 0.0) {
            if (aa != 0.0) {
              if ((aa < 0.0) == (htmp2 < 0.0)) {
                sab = muDoubleScalarSqrt(muDoubleScalarAbs(aa));
                sac = muDoubleScalarSqrt(muDoubleScalarAbs(htmp2));
                if (!(htmp2 < 0.0)) {
                  p = sab * sac;
                } else {
                  p = -(sab * sac);
                }

                tau = 1.0 / muDoubleScalarSqrt(muDoubleScalarAbs(aa + htmp2));
                b_bb = ba + p;
                p = ba - p;
                aa -= htmp2;
                htmp2 = 0.0;
                sab *= tau;
                tau *= sac;
                ba = htmp1 * sab - ab * tau;
                ab = htmp1 * tau + ab * sab;
                htmp1 = ba;
              }
            } else {
              aa = -htmp2;
              htmp2 = 0.0;
              ba = htmp1;
              htmp1 = -ab;
              ab = ba;
            }
          }
        }
      }

      h[0] = b_bb;
      h[i << 1] = aa;
      h[i] = htmp2;
      h[i + (i << 1)] = p;
      if (i + 1 < 2) {
        ba = htmp1 * h[2] + ab * h[2];
        h[2] = htmp1 * h[2] - ab * h[2];
        h[2] = ba;
      }

      i = (i - 1) << 1;
      ba = htmp1 * z[i] + ab * z[2];
      z[2] = htmp1 * z[2] - ab * z[i];
      z[i] = ba;
      ba = z[i + 1] * htmp1 + ab * z[3];
      z[3] = htmp1 * z[3] - z[i + 1] * ab;
      z[i + 1] = ba;
    }

    i = k - 2;
  }

  return info;
}
