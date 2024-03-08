#include <stdio.h>
#include <string>

int main() {
    
    std::string ans[] = {"primeiro","segundo","terceiro","quarto"};
    int x, y, i;
    while(1){
        scanf("%d %d", &x, &y);
        if (abs(x) > 0 && abs(y) > 0) {
            i = (x > 0) ? (y > 0 ? 0 : 3) : (y < 0 ? 2 : 1);
            printf("%s\n",ans[i].c_str());
        }else {
            break;
        }    
    }
    return 0;
}
