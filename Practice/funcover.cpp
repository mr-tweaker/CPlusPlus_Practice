#include <iostream>

void add(int a, int b){
    std::cout<<"\n\n Addition = "<<a+b;
}

void add(float a, float b){
    std::cout<<"\n\n Addition = "<<a+b;
}

void add(int a, int b, int c){
    std::cout<<"\n\n Addition = "<<a+b+c;
}

int main(){
    add(10,20);
    add(10.11f, 20.22f);
}