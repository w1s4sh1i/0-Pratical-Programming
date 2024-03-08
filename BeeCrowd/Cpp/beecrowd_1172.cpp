#include <stdio.h>

int main() {

  for (int y = 0, i = 0; i < 10; ++i) {
    scanf("%d", &y);
    printf("X[%d] = %d\n", i, (y > 0) ? y : 1);
  }
  return 0;
}
