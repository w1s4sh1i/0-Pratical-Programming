#include <stdio.h>

int sequence(int a, int b, int sum) {
    printf("%d ",a);
    return (a < b) ? sequence(a+1, b,sum+a) : sum+a;
} 
int main() {
 
    int x, y, aux;
    while(1) {
        scanf("%d %d",&x,&y);
        if (x > 0 && y > 0){
            if (x > y) {
                aux = x;
                x = y;
                y = aux;
            }
            printf("Sum=%d\n", sequence(x,y,0));
        }
        else { break;}
    } 
    return 0;
}
