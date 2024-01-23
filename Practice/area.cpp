#include <iostream>
#include <math.h>

int main (){
    float r, area;
    const float pi = 3.14;

    std::cout <<"\n\n Enter radius :";
    std::cin >> r;

    area = pi * pow(r, 2);

    std::cout<<"\n\n Area of circle = " <<area;
}