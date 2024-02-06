#include <stdio.h>

int main() {
  int N, count = 1;

  scanf("%d", &N);

  for (int a, b = 0, i = 0; i < N; ++i) {
    scanf("%d", &a);
    count += (a != b) * (i > 0);
    b = a;
  }
  printf("%d\n", count);
  return 0;
}
