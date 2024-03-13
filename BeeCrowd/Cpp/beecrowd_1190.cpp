#include <stdio.h>

int main() {

  double n, add = 0;
  char tag;
  int i, j, count = 0;

  scanf("%c", &tag);

  for (i = 0; i < 12; ++i) {
    for (j = 0; j < 12; ++j) {
      scanf("%lf", &n);
      if (i < j && i > 11 - j) {
        add += n;
        count += 1;
      }
    }
  }
  printf("%.1lf\n", tag == 'M' ? add / count : add);
  return 0;
}
