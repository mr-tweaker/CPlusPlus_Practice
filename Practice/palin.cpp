#include <iostream>

int main(){
    int num, rem, rev=0;

    std::cout<<"\n\n Enter a num : ";
    std::cin>>num;

    int temp = num;

    while(num > 0){
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    if(rev == temp){
        std::cout<<"\n\n Palindrome Number ";
    }else {
        std::cout<<"\n\n Not a Palindrome Number ";
    }
}