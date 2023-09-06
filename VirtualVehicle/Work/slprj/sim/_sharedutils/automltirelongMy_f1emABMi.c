#include "rtwtypes.h"
#include "automltirelongMy_f1emABMi.h"
#include "mwmathutil.h"

real_T automltirelongMy_f1emABMi(real_T Fx, real_T Fz, real_T Omega, real_T Vx,
  real_T press, real_T FNOMIN, real_T NOMPRES, real_T QSY1, real_T QSY2, real_T
  QSY3, real_T QSY4, real_T QSY5, real_T QSY6, real_T QSY7, real_T QSY8, real_T
  b_gamma, real_T lam_My, real_T UNLOADED_RADIUS, real_T b_FZMAX, real_T PRESMIN,
  real_T PRESMAX)
{
  real_T b_idx_0;
  real_T d_idx_0;
  b_idx_0 = press;
  if (press < PRESMIN) {
    b_idx_0 = PRESMIN;
  }

  if (b_idx_0 > PRESMAX) {
    b_idx_0 = PRESMAX;
  }

  d_idx_0 = Fz;
  if (Fz < 0.0) {
    d_idx_0 = 0.0;
  }

  if (d_idx_0 > b_FZMAX) {
    d_idx_0 = b_FZMAX;
  }

  return ((((QSY2 * Fx / FNOMIN + QSY1) + muDoubleScalarAbs(Vx / 16.7) * QSY3) +
           muDoubleScalarPower(Vx / 16.7, 4.0) * QSY4) + (QSY6 * d_idx_0 /
           FNOMIN + QSY5) * (b_gamma * b_gamma)) * (muDoubleScalarTanh(Omega) *
    d_idx_0 * UNLOADED_RADIUS) * (muDoubleScalarPower(d_idx_0 / FNOMIN, QSY7) *
    muDoubleScalarPower(b_idx_0 / NOMPRES, QSY8)) * lam_My;
}
