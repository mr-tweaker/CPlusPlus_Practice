#include <iostream>
#include <stdio.h>

int main(){
    char str[30];
    int i, len=0;

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str;

    for(i=0; str[i]!='\0'; i++){
        len++;
    }

    std::cout<<"\n\n Length = "<<len;
}