#include <stdio.h>
 
int main() {
 
    int j[] = {7,7}, i = 1;
    while (!(i == 11 && j[1] == 7)) {
        printf("I=%d J=%d\n",i,j[1]);
        if (j[1] == 5) {
            j[1] = j[0];
            i += 2;
        }
        else --j[1];
    }
    return 0;
}
