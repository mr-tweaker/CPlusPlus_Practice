#include <iostream>

int main(){
    int num, rem, sum=0, rev=0, temp, temp2;

    std::cout<<"\n\n Enter a num : ";
    std::cin>>num;

    temp = num;

    while(num > 0){
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    temp2 = sum;

    while(sum > 0){
        rem = sum % 10;
        rev = (rev * 10) + rem;
        sum = sum / 10;
    }

    if(rev * temp2 == temp){
        std::cout<<"\n\n Magic Number ";
    }
    else {
        std::cout<<"\n\n Not a Magic Number";
    }
}