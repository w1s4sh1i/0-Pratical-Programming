#include <stdio.h>
// #include <stdbool.h>

int main() {

  unsigned long x, y;
  while (1) {
    scanf("%lu %lu", &x, &y);
    if (x == 0 && y == 0)
      break;
    printf("%lu\n", x * y);
  }
  return 0;
}
