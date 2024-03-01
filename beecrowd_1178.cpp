#include <stdio.h>

int main() {

  double x;
  int i = 0;
  scanf("%lf", &x);
  while (i < 100) {
    printf("N[%d] = %.4lf\n", i++, x);
    x /= 2.0;
  }
  return 0;
}
