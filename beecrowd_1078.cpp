#include <stdio.h>
 
int main() {
 
    int X;
    scanf("%d",&X);
    for(int i=1; i<11; ++i){
        printf("%d x %d = %d\n", i, X, i*X);
    }
    
    return 0;
}
