#include <stdio.h>

int main() {

  int menor, indicemenor, num;

  scanf("%d", &num);

  for (int x, i = 0; i < num; i++) {
    scanf("%d", &x);
    if (i == 0)
      menor = x;
    else if (x < menor) {
      menor = x;
      indicemenor = i;
    }
  }

  printf("Menor valor: %d\nPosicao: %d\n", menor, indicemenor);

  return 0;
}
