#include <iostream>

int main (){
    int a,b;
    std::cout<<"\n\n Enter 2 numbers : ";
    std::cin>>a>>b;

    if(a>b){
        std::cout<<"\n\n max = "<<a;
    }
    else {
        std::cout<<"\n\n max = "<<b;
    }
}