#include <stdio.h>

int main() {
  int x, y, a;
  scanf("%d %d", &x, &y);
  a = y;
  for (int b, i = 0; i < x; i++) {
    scanf("%d", &b);
    y += b;
    if (y < a)
      a = y;
  }
  printf("%d\n", a);
  return 0;
}
