#include <iostream>

int main(){
    int num, i=1;

    std::cout<<"\n\n Enter a num : ";
    std::cin>>num;

    while(i <= 10){
        std::cout<<"\n\n "<<num * i;
        i++;
    }
}