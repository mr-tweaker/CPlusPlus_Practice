#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
    char str[30];

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str;

    strupr(str);

    std::cout<<"\n\n str = "<<str;
}