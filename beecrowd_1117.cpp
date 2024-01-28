#include <stdio.h>
 
int main() {
 
    float nota, media = 0.0;
    int count = 0;
    
    while(count < 2) {
        scanf("%f", &nota);
        if (nota < 0 || nota > 10) printf("nota invalida\n");
        else {
            media += nota;
            ++count;
        }
    }
    printf("media = %.2f\n", media/2.0);
 
    return 0;
}
