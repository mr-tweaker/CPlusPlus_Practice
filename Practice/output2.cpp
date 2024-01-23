#include <iostream>

int main(){
    int a=2, b=2;

    while(--a && b--){
        std::cout<<"\n\n a = "<<a;
        std::cout<<"\n\n b = "<<b;
    }
    
    std::cout<<"\n\n a = "<<a;
    std::cout<<"\n\n b = "<<b;
}