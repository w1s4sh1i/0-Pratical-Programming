#include <stdio.h>

int main() {

  int n, ans = 225, vet[5] = {300, 1500, 600, 1000, 150};
  for (int i = 0; i < sizeof(vet) / sizeof(int); ++i) {
    scanf("%d", &n);
    ans += n * vet[i];
  }
  printf("%d\n", ans);

  return 0;
}
