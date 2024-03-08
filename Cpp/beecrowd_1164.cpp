#include <stdio.h>

int main() {

  int n, x, k, soma = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {

    scanf("%d", &x);

    for (k = 1; k < x / 2 + 1; ++k)
      if (x % k == 0) {
        soma += k;
      }

    printf("%d %seh perfeito\n", x, soma == x ? "" : "nao ");

    soma = 0;
  }
}
