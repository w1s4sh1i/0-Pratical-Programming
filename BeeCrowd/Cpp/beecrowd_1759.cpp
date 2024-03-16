#include <stdio.h>

int main() {

  int i, x;
  scanf("%d", &x);
  for (i = 0; i < x; ++i)
    printf("Ho%s", i < x - 1 ? " " : "!\n");

  return 0;
}
