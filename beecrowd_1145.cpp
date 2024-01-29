#include <stdio.h>

int main() {

  int x, y, count = 1;
  scanf("%d %d", &x, &y);
  while (count < y + 1) {
    printf("%d", count);
    if (count % x != 0)
      printf(" ");
    else {
      printf("\n");
    }
    ++count;
  }

  return 0;
}
