#include <stdio.h>

int main() {

  int n;
  while (scanf("%d", &n) != EOF)
    printf("vai ter %s!\n", n == 0 ? "copa" : "duas");

  return 0;
}
