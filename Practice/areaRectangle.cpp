#include <iostream>
#include <math.h>

int main() {
    float l,b,area;

    std::cout <<"\n\n Enter the length: ";
    std::cin >> l;

    std::cout <<"\n\n Enter the breadth: ";
    std::cin >> b;

    area = l * b;

    std::cout<<"\n\n Area of rectangle is : " <<area;
}