#include <stdio.h>
#include <string>

int main() {
    int X, V[] = {0 ,0 ,0 ,0};
    std::string txt[] = {"par(es)","impar(es)","positivo(s)", "negativo(s)","valor(es)"}; 
    while(scanf("%d", &X) != EOF){
        V[0] += !(X % 2);
        V[1] += X % 2;
        V[2] += X > 0;
        V[3] += X < 0;
    }
    for (int i = 0; i < sizeof(V)/sizeof(int); ++i){
        printf("%d %s %s\n", V[i], txt[4].c_str(), txt[i].c_str());
    }
    
    return 0;
}
