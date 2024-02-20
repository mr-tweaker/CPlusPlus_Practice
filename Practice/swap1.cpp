#include <iostream>

int main(){
    int a=10, b=20, temp;

    std::cout<<"\n\n Values before swap: ";
        std::cout<<"\n\n a = "<<a;
        std::cout<<"\n\n b = "<<b;

        temp = a;
        a = b;
        b = temp;

    std::cout<<"\n\n Values after swap : ";
        std::cout<<"\n\n a = "<<a;
        std::cout<<"\n\n b = "<<b;
}