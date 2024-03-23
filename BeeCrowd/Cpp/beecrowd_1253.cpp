#include <stdio.h>

int main() {
  int i, move = 0, repeat = 0, aux = 0;
  char word[50];
  scanf("%d", &repeat);
  while (repeat--) {
    scanf("%s %d", &word, &move);
    for (i = 0; i < 50; ++i) {
      if (word[i] == '\0')
        break;
      aux = word[i] - move;
      if (aux < 65)
        aux += 26;
      printf("%c", aux);
    }
    printf("\n");
  }
  return 0;
}
