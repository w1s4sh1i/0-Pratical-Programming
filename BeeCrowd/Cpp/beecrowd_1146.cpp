#include <stdio.h>

int main() {

  int x = 1;
  while (x != 0) {
    scanf("%d", &x);
    for (int i = 1; i <= x; ++i) {
      printf("%d%s", i, i < x ? " " : "\n");
    }
  }
  return 0;
}
