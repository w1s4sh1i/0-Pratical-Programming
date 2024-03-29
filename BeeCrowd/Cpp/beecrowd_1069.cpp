#include <stdio.h>
#include <string.h>

int main() {
  char sequence[1001];
  int repeat, tam, answer, sign;

  scanf("%d\n", &repeat);

  for (int k = 0; k < repeat; ++k) {
    scanf("%s\n", &sequence);

    answer = 0;
    sign = 0;
    tam = strlen(sequence);
    for (int i = 0; i < tam; ++i) {
      sign += sequence[i] == '<';
      answer += sequence[i] == '>' && sign > 0;
      sign -= sequence[i] == '>' && sign > 0;
    }

    printf("%d\n", answer);
  }

  return 0;
}
