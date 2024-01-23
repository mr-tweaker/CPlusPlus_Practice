#include <iostream>

int main(){
    int a=0, b=1, c=0;

    std::cout<<"\n\n Fibonacci Series : ";
    std::cout<<"\n\n "<<a<<"  "<<b;

    while(c <= 100){
        c = a+b;

        std::cout<<"  "<<c;

        a=b;
        b=c;
    }
}