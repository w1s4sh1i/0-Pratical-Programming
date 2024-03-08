#include <stdio.h>

int main() {

  int input[] = {0, 0, 0, 0};
  for (int i = 0; i < 4; ++i) {
    scanf("%d", &input[i]);
    if (input[i] == 1)
      printf("%d\n", i + 1);
  }
  return 0;
}
