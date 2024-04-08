#include <stdio.h>
 
int main() {

    unsigned short int n, maior, velocidade;

    while (scanf("%hd", &n) != EOF){
        int vetor[n];
        for (unsigned i = 0; i < n; ++i){
          scanf("%d", &vetor[i]);
          
          if (i == 0 || vetor[i] > maior)
            maior = vetor[i];
        }
        printf("%d\n", maior<10 ? 1 : maior<20 ? 2:3);
    }
    return 0;
}
