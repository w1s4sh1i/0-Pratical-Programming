#include <stdio.h>

int main() {
  double n, add = 0, count = 0;
  int lin, col;
  char tag;

  scanf("%c", &tag);

  for (lin = 0; lin < 12; ++lin) {
    for (col = 0; col < 12; ++col) {
      scanf("%lf", &n);
      if (col > 11 - lin) {
        add += n;
        count += 1;
      }
    }
  }

  printf("%.1lf\n", (tag == 'S') ? add : add / count);

  return 0;
}
