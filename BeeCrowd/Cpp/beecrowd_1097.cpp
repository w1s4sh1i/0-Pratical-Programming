#include <stdio.h>
 
int main() {
 
    int j[] = {7,7}, i = 1, count = 0;
    while (!(i == 11  && j[1] == 17)) {
        printf("I=%d J=%d\n",i,j[1]);
        if (count == 2) {
            j[0] += 2;
            j[1] = j[0];
            i += 2;
            count = 0;
        }
        else { --j[1]; ++count; }
    }
    
    return 0;
}
