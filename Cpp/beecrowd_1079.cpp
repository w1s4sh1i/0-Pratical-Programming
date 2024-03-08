#include <stdio.h>
 
int main() {
 
    int i, score = 0, scorep[] = {2,3,5}, flag = 1; 
    float aver, x; 
    scanf("%d",&i);
    for(;i > 0;--i){
        aver = 0;
        for(int j = 0; j < 3; ++j) {
            scanf("%f",&x);
            aver+= x*scorep[j];
            if (flag) score += scorep[j]; 
        }
        flag = 0;
        printf("%.1f\n", aver / score);
    }
 
    return 0;
}
