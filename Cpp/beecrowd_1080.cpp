#include <stdio.h>
 
int main() {
    int index = 0, max_values;
    scanf("%d", &max_values);
    for (int x, i = 1; i < 100; ++i){
        scanf("%d", &x);
        if (x > max_values){
            index = i;
            max_values = x;
        }
    }
    printf("%d\n%d\n", max_values, index+1);
 
    return 0;
}
