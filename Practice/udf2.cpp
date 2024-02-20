#include <iostream>

void add(int, int);

int main(){
    int a, b;

    std::cout<<"\n\n Enter 2 nums: ";
    std::cin>>a>>b;
    add(a, b);  
}

void add(int x, int y){
    int z;
    z = x+y;
    std::cout<<"\n\n Addition = "<<z;
}