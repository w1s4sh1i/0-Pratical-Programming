#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  char indice = (N >= 86)              ? 'A'
                : (N >= 61 && N <= 85) ? 'B'
                : (N >= 36 && N <= 60) ? 'C'
                : (N >= 1 && N <= 35)  ? 'D'
                                       : 'E';

  printf("%c\n", indice);
  return 0;
}
