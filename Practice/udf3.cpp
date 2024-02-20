#include <iostream>

int add(int, int);

int main(){
    int a,b;

    std::cout<<"\n\n Enter 2 numbers: ";
    std::cin>>a>>b;

    int c = add(a,b);

    std::cout<<"\n\n Addition = "<<c;
}

int add(int x, int y){
    int z;
    z = x+y;
    return z;
}