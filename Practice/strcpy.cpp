#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
    char str1[30], str2[30];

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str1;

    strcpy(str2, str1);

    std::cout<<"\n\n String after copy = "<<str2;
}