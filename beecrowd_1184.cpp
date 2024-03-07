#include <stdio.h>

int main() {
  double n, acc = 0;
  int linha, coluna, cont = 0;
  char oper;

  scanf("%c", &oper);

  for (linha = 0; linha < 12; ++linha) {
    for (coluna = 0; coluna < 12; ++coluna) {
      scanf("%lf", &n);

      if (linha > coluna) {
        acc += n;
        ++cont;
      }
    }
  }

  printf("%.1lf\n", oper == 'M' ? acc / cont : acc);

  return 0;
}
