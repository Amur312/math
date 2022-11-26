#ifndef _S21_MATH_H_
#define _S21_MATH_H_
#define PI 3,1415926535
#define MAX_DOUBLE 1.7976931348623158e308

#define s21_INF 1.0 / 0.0 // бесконечность

#define s21_NAN 0.0 / 0.0
#define s21_EPS 1e-17 
#include <stdio.h>


int abc(int i);
long double s21_log(double x);
// long double sqrt(double x);
long double s21_fabs(double x);
long double s21_exp(double x);
#endif // _S21_MATH_H_
