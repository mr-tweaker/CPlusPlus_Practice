#include <iostream>

int main(){
    int num;

    std::cout<<"\n\n Enter a num : ";
    std::cin>>num;

    if(num % 2 == 0){
        std::cout<<"\n\n EVEN ";
    } else{
        std::cout<<"\n\n ODD ";
    }
}