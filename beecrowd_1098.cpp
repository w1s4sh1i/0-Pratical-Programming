#include <iostream>

int main(){
    float i = 0, j = 1;
    while(i < 2.2){
        for (int k = 0; k < 3; ++k){
            std::cout << "I=" << i << " J=" << j+k+i  << std::endl;
        }
        i+= 0.2;
    }
    return 0;
}
