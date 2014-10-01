#ifndef SVM_HIDEO_H_INCLUDED
#define SVM_HIDEO_H_INCLUDED

#endif // SVM_HIDEO_H_INCLUDED

# include <math.h>
# include "svm_common.h"


double *optimize_qp(QP *, double *, long, double *, LEARN_PARM *);
void *my_malloc();

int optimize_hildreth_despo(long,long,double,double,double,long,long,long,double,double *,
			    double *,double *,double *,double *,double *,
			    double *,double *,double *,long *,double *,double *);
int solve_dual(long,long,double,double,long,double *,double *,double *,
	       double *,double *,double *,double *,double *,double *,
	       double *,double *,double *,double *,long);

void linvert_matrix(double *, long, double *, double, long *);
void lprint_matrix(double *, long);
void ladd_matrix(double *, long, double);
void lcopy_matrix(double *, long, double *);
void lswitch_rows_matrix(double *, long, long, long);
void lswitchrk_matrix(double *, long, long, long);

double calculate_qp_objective(long, double *, double *, double *);
