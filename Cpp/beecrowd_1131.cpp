#include <stdio.h>
 
int main() {
    int i[] = {0,0,0,0,0,0}, aux = 1;
    while (aux != 2){
        ++i[5];
        scanf("%d %d",&i[0],&i[1]);
        i[2] += i[0] > i[1]; 
        i[3] += i[0] < i[1];
        if (i[0] == i[1]) { printf("Nao houve vencedor\n"); ++i[4]; } 
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &aux);
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", i[5], i[2], i[3], i[4]);
    printf("%s venceu mais\n", i[2]>i[3] ? "Inter":"Gremio");
    return 0;
}
