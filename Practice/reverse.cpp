#include <iostream>

int main(){
    int num, rem, rev=0;

    std::cout<<"\n\n Enter a num : ";
    std::cin>>num;

    while(num > 0){
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }

    std::cout<<"\n\n Reverse = "<<rev;
}