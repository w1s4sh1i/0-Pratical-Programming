#include <stdio.h>

int main() {

  int x, y, count = 0;
  scanf("%d", &x);
  while (scanf("%d", &y) == 1)
    count += (x == y);
  printf("%d\n", count);
  return 0;
}
