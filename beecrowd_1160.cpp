#include <stdio.h>

int main() {

  int t, x, y, count = 0;
  double a, b;

  scanf("%d", &t);

  for (; t > 0; --t) {

    scanf("%d %d %lf %lf", &x, &y, &a, &b);

    while (x <= y && count < 101) {

      x += (int)((x * a) / 100);
      y += (int)((y * b) / 100);
      ++count;
    }

    if (count > 100)
      printf("Mais de 1 seculo.\n");
    else
      printf("%d anos.\n", count);

    count = 0;
  }

  return 0;
}
