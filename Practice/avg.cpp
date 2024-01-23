#include <iostream>

int main(){
    float a,b,c,avg;

    std::cout<<"\n\n Enter 3 numbers : ";
    std::cin >> a >> b >>c;

    avg = (a+b+c) / 3;

    std::cout<<"\n\n Average = " << avg;
}