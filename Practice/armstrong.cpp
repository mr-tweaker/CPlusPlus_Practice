#include <iostream>
#include <math.h>

int main(){
    int num, rem, sum = 0, temp;

    std::cout<<"\n\n Enter a num : ";
    std::cin>>num;

    temp = num;

    while(num > 0){
        rem = num % 10;
        sum = sum + pow(rem, 3);
        num = num / 10;
    }

    if (sum == temp){
        std::cout<<"\n\n Armstrong Number ";
    }else {
        std::cout<<"\n\n Not an Armstrong Number ";
    }
}