#include <stdio.h>

int main() {

  int equip = 0, i = 0, y = 4;
  int x[y];
  for (; i < y; ++i) {
    scanf("%d", &x[i]);
    equip += x[i];
  }
  printf("%d\n", equip - y + 1);

  return 0;
}
