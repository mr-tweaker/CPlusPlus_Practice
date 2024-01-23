#include <iostream>

int main(){
    int num, i;

    std::cout<<"\n\n Enter a num : ";
    std::cin>>num;

    for(i=1; i<=10; i++){
        std::cout<<"\n\n "<<num * i;
    }
}