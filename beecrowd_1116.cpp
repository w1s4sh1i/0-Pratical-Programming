#include <stdio.h>

int main() {

  int i;
  scanf("%d", &i);
  for (float a, b; i > 0; --i) {
    scanf("%f %f", &a, &b);
    if (b == 0)
      printf("divisao impossivel\n");
    else
      printf("%.1f\n", a / b);
  }
  return 0;
}
