#include <stdio.h>
int main() {

  double b = 1, S = 0;
  for (int a = 1; a <= 39; a += 2) {
    S += a / b;
    b *= 2;
  }
  printf("%.2lf\n", S);
  return 0;
}
