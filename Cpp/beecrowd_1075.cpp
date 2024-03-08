#include <stdio.h>
 
int main() {
 
    int X, i = 1;
    scanf("%d", &X);
    while (i < 10000){
        if (i%X == 2) printf("%d\n",i);
        ++i;
    }
    return 0;
}
