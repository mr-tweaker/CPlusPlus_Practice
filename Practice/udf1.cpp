#include <iostream>

void add();

int main(){
    add();
}

void add(){
    int a,b;

    std::cout<<"\n\n Enter 2 nums: ";
    std::cin>>a>>b;

    std::cout<<"\n\n Addition = "<<a+b;
}