#include <stdio.h>

int main() {

  int x;
  scanf("%d", &x);
  for (int i = 0; i < x; ++i)
    if (x % (i + 1) == 0)
      printf("%d\n", i + 1);
  return 0;
}
