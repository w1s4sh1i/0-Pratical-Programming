#include <stdio.h>

int main() {

  int x;
  scanf("%d", &x);
  int rank[] = {0, 1, 3, 5, 10, 25, 50, 100};
  for (int i = 0; i < (sizeof(rank) / sizeof(int) - 1); ++i) {
    if (x > rank[i] && x <= rank[i + 1])
      x = rank[i + 1];
  }
  printf("Top %d\n", x);
  return 0;
}
