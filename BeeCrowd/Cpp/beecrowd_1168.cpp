#include <stdio.h>
#include <string.h>

int main() {

  int number, i, j, add;
  char leds[102];

  short score[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

  scanf("%d", &number);

  for (j = number; j > 0; --j) {

    add = 0;

    scanf("%s", leds);

    for (i = 0; i < strlen(leds); ++i)
      add += score[(int)leds[i] - 48]; // ASCII value

    printf("%d leds\n", add);
  }
}
