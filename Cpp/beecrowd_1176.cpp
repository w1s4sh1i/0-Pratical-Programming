#include <stdio.h>

int main() {

  long int first = 0, second = 1, next;
  int n, i, j, c;
  scanf("%d", &j);
  for (i = 1; i <= j; i++, first = 0, second = 1) {
    scanf("%d", &n);
    n = n + 1;
    for (c = 0; c < n; c++) {
      if (c <= 1)
        next = c;
      else {
        next = first + second;
        first = second;
        second = next;
      }
    }
    printf("Fib(%d) = %lld\n", n - 1, next);
  }
  return 0;
}
