/* spxchuzr.h */

/* (reserved for copyright notice) */

#ifndef SPXCHUZR_H
#define SPXCHUZR_H

#include "spxlp.h"

#define spx_chuzr_std _glp_spx_chuzr_std
int spx_chuzr_std(SPXLP *lp, int phase, const double beta[/*1+m*/],
      int q, double s, const double tcol[/*1+m*/], int *p_flag,
      double tol_piv, double tol, double tol1);
/* choose basic variable (textbook ratio test) */

#define spx_chuzr_harris _glp_spx_chuzr_harris
int spx_chuzr_harris(SPXLP *lp, int phase, const double beta[/*1+m*/],
      int q, double s, const double tcol[/*1+m*/], int *p_flag,
      double tol_piv, double tol, double tol1);
/* choose basic variable (Harris' ratio test) */

#endif

/* eof */
