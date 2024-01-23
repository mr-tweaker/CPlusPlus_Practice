#include <iostream>

int main(){
    int num, rem, sum=0;

    std::cout<<"\n\n Enter a num : ";
    std::cin>>num;

    while(num > 0){
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    while(sum > 9){
        sum = (sum/10) + (sum%10);
    }

    std::cout<<"\n\n Sum of digits = "<<sum;
}