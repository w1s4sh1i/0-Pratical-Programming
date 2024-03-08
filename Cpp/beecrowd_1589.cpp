#include <stdio.h>

int main() {

  int x, a, b;
  scanf("%d", &x);
  while (x > 0) {
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
    --x;
  }
  return 0;
}
