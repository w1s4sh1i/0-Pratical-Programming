#include <stdio.h>

bool verificaParenteses(char *str) {

  short qtsP = 1;
  if (*str != ')') {
    qtsP = 0;
    while (*str && qtsP >= 0) {
      qtsP += *str == '(';
      qtsP -= *str == ')';
      ++str;
    }
  }
  return qtsP == 0;
}

int main() {

  char function[1100];
  while (scanf(" %s", function) != EOF) {
    printf("%scorrect\n", verificaParenteses(function) ? "" : "in");
  }

  return 0;
}
