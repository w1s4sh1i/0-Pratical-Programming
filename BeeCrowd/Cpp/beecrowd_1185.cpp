#include <stdio.h>
int main() {
  double count = 0.0, add = 0.0, n;
  char c;
  int x, y, lim = 12;
  scanf("%s", &c);
  for (x = 0; x < lim; ++x) {
    for (y = 0; y < lim; ++y) {
      scanf("%lf", &n);
      if (y < lim - 1 - x) {
        add += n;
        count += 1;
      }
    }
  }

  printf("%.1lf\n", (c == 'S') ? add : add / count);

  return 0;
}
