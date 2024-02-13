#include <stdio.h>

int main() {
  int c, p, f;
  scanf("%d %d %d", &c, &p, &f);
  printf("%c\n", (c * f > p) ? 'N' : 'S');
  return 0;
}
