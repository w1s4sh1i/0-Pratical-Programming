#include <stdio.h>
int check_number() {
  int a = 0;
  while (a <= 0) {
    scanf("%d", &a);
  }
  return a;
}

int main() {

  int x, y, add = 0;
  x = check_number();
  y = check_number();
  for (int i = 0; i < y; ++i)
    add += x + i;
  printf("%d\n", add);
  return 0;
}
