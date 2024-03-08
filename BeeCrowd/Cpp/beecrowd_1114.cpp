#include <stdio.h>
 
int main() {
 
    int password = 2002, pass;
    while(1){
        scanf("%d",&pass);
        if (pass == password) {
            printf("Acesso Permitido\n");
            break;
        }else{
            printf("Senha Invalida\n");
        }
    }    
    return 0;
}
