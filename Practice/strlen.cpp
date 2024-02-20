#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
    char str1[30];
    int i;

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str1;

    i = strlen(str1);

    std::cout<<"\n\n Length = "<<i;
}