#include <stdio.h>

int main() {
  int lin, col;
  char op;
  double n, add = 0, count = 0;

  scanf("%c", &op);

  for (lin = 0; lin < 12; ++lin) {
    for (col = 0; col < 12; ++col) {
      scanf("%lf", &n);
      if (lin < col && col > lin && col < 11 - lin) {
        add += n;
        count += 1;
      }
    }
  }

  printf("%.1lf\n", (op == 'S') ? add : add / count);

  return 0;
}
