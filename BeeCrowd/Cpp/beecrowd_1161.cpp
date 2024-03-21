#include <stdio.h>

unsigned long int calcFatorial(int n) {
  unsigned long int fatorial = n;
  int i = n - 1;
  if (n == 0 || n == 1)
    return 1;
  while (i > 0)
    fatorial *= i--;
  return fatorial;
}

int main(void) {

  int a, b;
  while (scanf("%d %d", &a, &b) != EOF)
    printf("%lu\n", calcFatorial(a) + calcFatorial(b));

  return 0;
}
