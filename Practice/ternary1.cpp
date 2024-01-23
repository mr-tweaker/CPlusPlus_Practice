#include <iostream>

int main(){
    int a,b,max;

    std::cout<<"\n\n Enter 2 numbers : ";
    std::cin>>a>>b;

    max = (a>b) ? a : b;

    std::cout<<"\n\n max = "<<max;
}