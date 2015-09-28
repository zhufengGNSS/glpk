/* spxnt.h */

/* (reserved for copyright notice) */

#ifndef SPXNT_H
#define SPXNT_H

#include "spxlp.h"

typedef struct SPXNT SPXNT;

struct SPXNT
{     /* mx(n-m)-matrix N composed of non-basic columns of constraint
       * matrix A, in sparse row-wise format */
      int *ptr; /* int ptr[1+m]; */
      /* ptr[0] is not used;
         ptr[i], 1 <= i <= m, is starting position of i-th row in
         arrays ind and val; note that ptr[1] is always 1;
         these starting positions are set up *once* as if they would
         correspond to rows of matrix A stored without gaps, i.e.
         ptr[i+1] - ptr[i] is the number of non-zeros in i-th (i < m)
         row of matrix A, and (nnz+1) - ptr[m] is the number of
         non-zero in m-th (last) row of matrix A, where nnz is the
         total number of non-zeros in matrix A */
      int *len; /* int len[1+m]; */
      /* len[0] is not used;
         len[i], 1 <= i <= m, is the number of non-zeros in i-th row
         of current matrix N */
      int *ind; /* int ind[1+nnz]; */
      /* column indices */
      double *val; /* double val[1+nnz]; */
      /* non-zero element values */
};

#define spx_alloc_nt _glp_spx_alloc_nt
void spx_alloc_nt(SPXLP *lp, SPXNT *nt);
/* allocate matrix N in sparse row-wise format */

#define spx_init_nt _glp_spx_init_nt
void spx_init_nt(SPXLP *lp, SPXNT *nt);
/* initialize row pointers for matrix N */

#define spx_nt_add_col _glp_spx_nt_add_col
void spx_nt_add_col(SPXLP *lp, SPXNT *nt, int j, int k);
/* add column N[j] = A[k] */

#define spx_build_nt _glp_spx_build_nt
void spx_build_nt(SPXLP *lp, SPXNT *nt);
/* build matrix N for current basis */

#define spx_nt_del_col _glp_spx_nt_del_col
void spx_nt_del_col(SPXLP *lp, SPXNT *nt, int j, int k);
/* remove column N[j] = A[k] from matrix N */

#define spx_update_nt _glp_spx_update_nt
void spx_update_nt(SPXLP *lp, SPXNT *nt, int p, int q);
/* update matrix N for adjacent basis */

#define spx_nt_prod _glp_spx_nt_prod
void spx_nt_prod(SPXLP *lp, SPXNT *nt, double y[/*1+n-m*/], int ign,
      double s, const double x[/*1+m*/]);
/* compute product y := y + s * N'* x */

#define spx_free_nt _glp_spx_free_nt
void spx_free_nt(SPXLP *lp, SPXNT *nt);
/* deallocate matrix N in sparse row-wise format */

#endif

/* eof */
