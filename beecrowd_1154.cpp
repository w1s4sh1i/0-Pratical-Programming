#include <stdio.h>
int factorial(int a, int b, int c) {
  return ((a - b) == 1) ? c : factorial(a, b + 1, c * (a - b));
}

int main() {
  int x;
  scanf("%d", &x);
  printf("%d\n", factorial(x, 0, 1));
  return 0;
}
