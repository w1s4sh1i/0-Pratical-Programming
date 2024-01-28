#include <stdio.h>
#include <string>

int main() {
  std::string ref[] = {"Alcool", "Gasolina", "Diesel"};
  int i, score[] = {0, 0, 0};
  while (scanf("%d", &i) == 1) {
    if (i != 4) {
      if (i < 4)
        ++score[i - 1];
    } else
      break;
  }
  printf("MUITO OBRIGADO\n");
  for (i = 0; i < 3; ++i) {
    printf("%s: %d\n", ref[i].c_str(), score[i]);
  }

  return 0;
}
