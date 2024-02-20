#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cctype>

int main(){
    char str[30];

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str;

    std::tolower(str);

    std::cout<<"\n\n Str = "<<str;
}