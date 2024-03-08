#include <stdio.h>

int main() {
  int j;
  scanf("%d", &j);
  for (int i = 1; i < j + 1; ++i) {
    printf("%d %d %d\n%d %d %d\n", i, i * i, i * i * i, i, i * i + 1,
           i * i * i + 1);
  }
  return 0;
}
