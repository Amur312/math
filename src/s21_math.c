#include "s21_math.h"

int main() {
  double i;
  scanf("%lf", &i);
  s21_exp(i);
}

// int abc(int x) {
//   if (x < 0)
//     x *= -1;
//   return x;
// }
// long double acos(double x) {}
// long double asin(double x) {}
// long double atan(double x) {}
// long double ceil(double x) {}
// long double cos(double x) {}
// При переполнении функция возвращает S21_INF (бесконечность)
// p - храниться значение последнего вычисленного слагаемого
long double s21_exp(double x) {
  long double exp_f = 1, n = 1, p = 1;
  while (s21_fabs(p) > s21_EPS) {
    p *= x / n;
    exp_f += p;
    n++;
    if (exp_f > MAX_DOUBLE) {
      exp_f = s21_INF;
      break;
    }
  }
  return exp_f;
}

long double s21_fabs(double x) {
  if (x < 0)
    x *= -1;
  return x;
}
// long double floor(double x) {}
// long double fmod(double x, double y) {}
// long double log(double x) {}

// long double pow(double base, double exp) {
//   long double rez;
//   if (exp == 0) {
//     rez = 1;
//     return rez;
//   } else if (exp < 0) {

//   } else if (exp > 0) {
//   }
// }

// long double sin(double x) {}

// long double sqrt(double x) {
//   double esp = 10e-8;
//   long double s = x;

//   while ((s - x / s) > esp) {
//     s = (s + x / s) / 2;
//   }

//   return s;
// }

// long double tan(double x) {}
