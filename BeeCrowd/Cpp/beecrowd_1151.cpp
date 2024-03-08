#include <stdio.h>

int main () {
    int n, i, a = 0, b = 1, c = 0;
    scanf("%d", &n);
    
    if (n < 2) {
      printf("%d", a);
    }else {
        printf("%d ", a);
        for (i = 2; i < n; ++i) {
            a = b;
            b = c;
            c = a + b;
            printf("%d ", c);
        }
        
        printf("%d\n", c+b);
    }
    return 0;
}
