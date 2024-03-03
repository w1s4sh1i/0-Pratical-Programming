#include <stdio.h>

int main() {

  double x, add = 0;
  int l, c, count = 0;
  char oper;

  scanf("%c", &oper);

  for (l = 0; l < 12; ++l) {
    for (c = 0; c < 12; ++c) {
      scanf("%lf", &x);
      if (c > l) {
        add += x;
        count++;
      }
    }
  }
  if (oper == 'M')
    add /= count;

  printf("%.1f\n", add);

  return 0;
}
