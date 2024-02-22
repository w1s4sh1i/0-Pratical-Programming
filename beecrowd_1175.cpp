#include <stdio.h>

int main() {

  int k = 20;
  int x[k], i = k;

  for (i = k; i > 0; --i)
    scanf("%d", &x[i - 1]);
  for (i = 0; i < k; ++i)
    printf("N[%d] = %d\n", i, x[i]);

  return 0;
}
