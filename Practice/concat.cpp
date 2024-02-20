#include <iostream>
#include <stdio.h>

int main(){
    char str1[30], str2[30];
    int i, len=0;

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str1;

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str2;

    for(i=0; str2[i]!='\0'; i++){
        str1[len+i] = str2[i];
    }

    str1[len+i] = '\0';

    std::cout<<"\n\n String after concat = "<<str1;
}