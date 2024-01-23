#include <iostream>

int main(){
    int a,b,c,max;

    std::cout<<"\n\n Enter 3 numbers : ";
    std::cin>>a>>b>>c;

    max = (a>b && a>c) ? a : (b>c) ? b : c;

    std::cout<<"\n\n max = "<<max;
}