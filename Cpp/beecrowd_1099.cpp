#include <stdio.h>
 
int main() {
    int A;
    scanf("%d",&A);
    for(int b,c,count, i = A; i > 0; --i) {
        count = 0;
        scanf("%d %d",&b,&c);
        if (b > c) { 
            count = b;
            b = c;
            c = count;
            count = 0;
        }    
        for(int j = b+1; j < c; ++j) { count += (j % 2)*j; }    
        printf("%d\n",count);
    }
    return 0;
}
