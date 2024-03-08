#include <stdio.h>

int main() {
  int a, b, c, d, diff;

  scanf("%d %d %d %d", &a, &b, &c, &d);

  diff = c * d - a * b;

  printf("%d\n", (diff < 0) ? -1 : (diff > 0) ? 1 : 0);

  return 0;
}
