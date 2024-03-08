#include <stdio.h>
#include <string>

int main() {
    std::string ref[] = {"Brasilia","Salvador","Sao Paulo","Rio de Janeiro","Juiz de Fora","Campinas","Vitoria","Belo Horizonte"};
    int DDD[] = {61,71,11,21,32,19,27,31};
    std::string ans = "DDD nao cadastrado";
    int x;
    
    scanf("%d",&x);
    for (int limit = sizeof(DDD) / sizeof(int), i = 0; i < limit; ++i){
        if (x == DDD[i]) ans = ref[i]; 
    }
    printf("%s\n",ans.c_str());
    return 0;
}
