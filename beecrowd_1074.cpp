#include <stdio.h>
#include <string> 
#include <cmath>

int main() {
    
    std::string ans[] = {"NULL","EVEN","ODD","POSITIVE","NEGATIVE"};
    int x;
    scanf("%d",&x);
    for(int i = x; i > 0; --i) {
        scanf("%d",&x);
        if (x == 0) printf("%s\n", ans[x].c_str());
        else printf("%s %s\n",ans[1 + abs(x%2)].c_str(), ans[3 + (x < 0)].c_str());
    }

    return 0;
}
