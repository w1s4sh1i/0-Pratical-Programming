#include <stdio.h>

int main() {

  int x, i, add;
  while (scanf("%d", &x) && x != 0) {
    add = 0;
    for (i = 0; i < 5; ++x) {
      if (x % 2 == 0) {
        add += x;
        ++i;
      }
    }
    printf("%d\n", add);
  }

  return 0;
}
