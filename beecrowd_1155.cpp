#include <stdio.h>

int main() {

  double add = 0;
  for (int i = 100; i > 0; --i)
    add += 1 / float(i);
  printf("%.2f\n", add);
  return 0;
}
