#include <stdio.h>

int main() {
  int n;
  double add = 0.0, score[] = {1.5, 2.5, 3.5, 4.5, 5.5};
  scanf("%d", &n);
  for (int x, y, i = n; i > 0; --i) {
    scanf("%d %d", &x, &y);
    add += score[x - 1001] * y;
  }
  printf("%.2f\n", add);
  return 0;
}
