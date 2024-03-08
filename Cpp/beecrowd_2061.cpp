#include <stdio.h>

int main() {
  int n, m;
  char temp[10];
  scanf("%d %d", &n, &m);
  while (m--) {
    scanf("%s", temp);
    n += (temp[0] == 'f') ? 1 : -1;
  }
  printf("%d\n", n);
  return 0;
}
