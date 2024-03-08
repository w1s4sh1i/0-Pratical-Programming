#include <stdio.h>

int main() {

  int x, y, n, add = 0;

  scanf("%d", &n);

  for (; n > 0; --n) {

    scanf("%d %d", &x, &y);

    for (; y > 0; ++x) {

      if (x % 2) {
        add += x;
        --y;
      }
    }
    printf("%d\n", add);
    add = 0;
  }
  return 0;
}
