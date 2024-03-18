#include <stdio.h>
#include <string.h>

int main() {
  char word[1000], aux;
  int cases, i, j, tam;

  scanf("%u", &cases);

  while (cases) {

    scanf(" %[^\n]", word);

    tam = strlen(word);

    for (i = 0; i < tam; ++i)
      if ((word[i] >= 'A' || word[i] >= 'a') &&
          (word[i] <= 'Z' || word[i] <= 'z'))
        word[i] += 3;

    for (i = 0, j = tam - 1; i < tam / 2; ++i, --j) {
      aux = word[j];
      word[j] = word[i];
      word[i] = aux;
    }

    for (i = tam / 2; i < tam; ++i)
      if ((word[i] >= 32 && word[i] <= 176))
        word[i] -= 1;

    printf("%s\n", word);

    memset(word, 0, sizeof(word));

    cases--;
  }

  return 0;
}
