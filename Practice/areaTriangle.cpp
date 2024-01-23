#include <iostream>
#include <math.h>

int main() {
    float b,h,area;

    std::cout <<"\n\n Enter the base: ";
    std::cin >> b;

    std::cout <<"\n\n Enter the height: ";
    std::cin >> h;

    area = 0.5 * b * h;

    std::cout<<"\n\n Area of triangle is: " << area;
}