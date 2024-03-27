#include <stdio.h>

int main() {

  int a, b, answer = 0;
  int x;

  scanf("%d", &x);

  while (x--) {

    scanf("%d %d", &a, &b);

    while (b != 0) {

      answer = a % b;
      a = b;
      b = answer;
    }
    printf("%d\n", a);
  }
  return 0;
}
