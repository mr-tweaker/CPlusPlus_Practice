#include <iostream>

int main(){
    int decimal, binary = 0, remainder, product = 1;
    std::cout<<"\n\n Enter a num : ";
    std::cin>>decimal;

    while(decimal != 0){
        remainder = decimal % 2;
        binary = binary + (remainder * product);
        decimal = decimal / 2;
        product = product * 10;
    }

    std::cout<<"\n\n The number in binary is : "<<binary;
}