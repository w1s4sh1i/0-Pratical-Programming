#include <stdio.h>

int main(){
    float value[] = {0,0,0}, aux = 0;
    scanf("%f %f %f", &value[0], &value[1], &value[2]);
    
    for (int i = 1; i<3; ++i){
        if(value[0] < value[i]) {
            aux = value[0];
            value[0] = value[i];
            value[i] = aux;
        } 
    }
    
    float a = value[0], b = value[1], c = value[2];
    
    if (a >= (b+c)) printf("NAO FORMA TRIANGULO\n");
    else { 
        printf("TRIANGULO "); 
        if(a*a == (b*b + c*c)) printf("RETANGULO\n");
        else if(a*a > (b*b + c*c)) printf("OBTUSANGULO\n");
        else if(a*a < (b*b + c*c)) printf("ACUTANGULO\n");
        
        if(a == b || a == c || b == c){
            printf("TRIANGULO ");
            if(a == b && a == c) printf("EQUILATERO\n");
            else if(a != c || a != b || b != a) printf("ISOSCELES\n");
        }        
    }
 return 0;
}

