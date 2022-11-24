#include "s21_math.h"

int main() {
  double i;
  scanf("%lf", &i);
  s_sqrt(i);
}

int s_abc(int x) {
  if (x < 0)
    x *= -1;
  return x;
}
long double acos(double x) {}
long double asin(double x) {}
long double atan(double x) {}
long double ceil(double x) {}
long double cos(double x) {}

long double exp(double x) { double e; }

long double fabs(double x) {
  if (x < 0)
    x *= -1;
  return x;
}
long double floor(double x) {}
long double fmod(double x, double y) {}
long double log(double x) {}

long double pow(double base, double exp) {
  long double rez;
  if (exp == 0) {
    rez = 1;
    return rez;
  } else if (exp < 0) {

  } else if (exp > 0) {
  }
}

long double sin(double x) {}

long double s_sqrt(double x) {
  double esp = 10e-8;
  long double s = x;

  while ((s - x / s) > esp) {
    s = (s + x / s) / 2;
  }

  return s;
}

long double tan(double x) {}
