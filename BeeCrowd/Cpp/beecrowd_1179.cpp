#include <stdio.h>

void output(int x[], int y, int ref) {
  for (int i = 0; i < y; ++i)
    printf("%spar[%d] = %d\n", ref ? "" : "im", i, x[i]);
}

int main() {

  int n, i, k = 0, z = 0, j, l;
  int par[5], impar[5];

  for (i = 0; i < 15; ++i) {

    scanf("%d", &n);
    if (n % 2 == 0) {
      par[k++] = n;

      if (k == 5) {
        k = 0;
        output(par, 5, 1);
      }
    } else {

      impar[z++] = n;

      if (z == 5) {
        z = 0;
        output(impar, 5, 0);
      }
    }
  }

  output(impar, z, 0);
  output(par, k, 1);
}
