#include <stdio.h>

int main() {

  int x;
  scanf("%d", &x);
  for (int i = 0; i < 1000; ++i)
    printf("N[%d] = %d\n", i, i % x);

  return 0;
}
