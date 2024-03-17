#include <stdio.h>

int main() {

  int i, j, count = 0;
  float x, add = 0;
  char tag;

  scanf("%c", &tag);

  for (i = 0; i < 12; ++i) {
    for (j = 0; j < 12; ++j) {
      scanf("%f", &x);
      if (i > j && j < 11 - i) {
        add += x;
        count += 1;
      }
    }
  }
  printf("%.1f\n", tag == 'S' ? add : add / count);

  return 0;
}
