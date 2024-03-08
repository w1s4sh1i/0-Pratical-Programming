#include <stdio.h>
 
int main() {
 
    int A, in = 0, out = 0, ref[] = {10,20};
    scanf("%d",&A);
    for (int x, i = A; i > 0; --i){
        scanf("%d",&x);
        x = (x >= ref[0] && x <= ref[1]);
        in += x;
        out += !x;
    }
    
    printf("%d in\n%d out\n",in,out);
    return 0;
}
