#include <stdio.h>

int main() {

  char tag;
  double n, sum = 0.0, count = 0.0;
  int i, j;

  scanf("%c", &tag);

  for (i = 0; i < 12; ++i) {
    for (j = 0; j < 12; ++j) {
      scanf("%lf", &n);
      if (i > 6 && j > 11 - i && i > j) {
        sum += n;
        count += 1;
      }
    }
  }

  printf("%.1lf\n", (tag == 'S') ? sum : sum / count);
  return 0;
}
