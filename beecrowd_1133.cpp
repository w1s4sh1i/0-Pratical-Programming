#include <stdio.h>
 
int main() {
 
    int x,y, aux;
    scanf("%d %d", &x,&y);
    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }
    for(int i = x+1; i <= y; ++i) {
        if (i%5==2 || i%5==3) printf("%d\n",i); 
    }    

    return 0;
}
