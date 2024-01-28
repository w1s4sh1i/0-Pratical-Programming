#include <stdio.h>
 
int main() {
 
    int x,y, add;
    scanf("%d %d", &x,&y);
    if (x > y) {
        add = x;
        x = y;
        y = add;
    }
    add = 0;
    for(int i = x; i <= y; ++i) {
        if (!(i%13==0)) add += i;
    }    
    printf("%d\n", add);
    
    return 0;
}
