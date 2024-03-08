#include <stdio.h>
int main() {
    int n,m,sum=0,sum1=0,sum2=0,sum3=0;
    char a;
    scanf("%d",&m);
    for(int i = m;i > 0; --i){
        scanf("%d %c",&n,&a);
        sum3 += n;
        if(a=='C'){ sum+=n; }
        else if(a=='R'){ sum1+=n; }
        else { sum2+=n; }
    }
    a = '%';
    printf("Total: %d cobaias\n",sum3);
    printf("Total de coelhos: %d\n",sum);
    printf("Total de ratos: %d\n",sum1);
    printf("Total de sapos: %d\n",sum2);
    printf("Percentual de coelhos: %.2lf %c\n", sum/(sum3*1.0)*100.00,a);
    printf("Percentual de ratos: %.2lf %c\n", sum1/(sum3*1.0)*100.00,a);
    printf("Percentual de sapos: %.2lf %c\n", sum2/(sum3*1.0)*100.00,a);
}
