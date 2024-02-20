#include <iostream>
#include <stdio.h>

int main(){
    char str1[30], str2[30];
    int i;

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str1;

    for(i=0; str1[i]!='\0'; i++){
        str2[i] = str1[i];
    }

    str2[i] = '\0';

    std::cout<<"\n\n String after copy = "<<str2;
}