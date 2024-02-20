#include <iostream>

void add(int a, int b=20, int c=30);

int main(){
    add(10);
    add(11, 22);
    add(1,2,3);
}

void add(int a, int b, int c){
    std::cout<<"\n\n Addition = "<<a+b+c;
}