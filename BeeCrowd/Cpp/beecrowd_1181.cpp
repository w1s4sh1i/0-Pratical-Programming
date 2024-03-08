#include <stdio.h>

int main() {

  float add = 0, elemento;
  int linha;
  char operacao;

  scanf("%d %c", &linha, &operacao);
  float aux = operacao == 'S' ? 1 : 12;

  for (int i = 0; i < 12; ++i) {
    for (int j = 0; j < 12; ++j) {
      scanf("%f", &elemento);
      if (i == linha)
        add += elemento;
    }
  }

  printf("%.1f\n", add / aux);
  return 0;
}
