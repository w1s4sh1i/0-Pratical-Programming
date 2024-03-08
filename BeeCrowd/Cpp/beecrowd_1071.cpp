#include <stdio.h>
 
int main() {
 
    int A, B, add; 
    scanf("%d %d",&A, &B);
    if (A > B) {
        add = B;
        B = A;
        A = add;
    }
    add = 0;
    for (int i = A+1; i < B; ++i){
        if  (i % 2) add += i;
    }
    printf("%d\n", add);
    return 0;
}
