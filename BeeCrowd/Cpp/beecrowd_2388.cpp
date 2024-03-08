#include <stdio.h>
int main() {
  int n, x, y, ans = 0;
  scanf("%d", &n);
  while (n--) {
    scanf("%d %d", &x, &y);
    ans += x * y;
  }
  printf("%d\n", ans);
  return 0;
}
