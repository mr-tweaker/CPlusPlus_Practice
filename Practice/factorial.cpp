#include <iostream>

int main(){
    int num, i, fact=1;

    std::cout<<"\n\n Enter a num : ";
    std::cin>>num;

    for(i = num; i >= 1; i--){
        fact = fact * i;
    }

    std::cout<<"\n\n Factorial = "<<fact;
}