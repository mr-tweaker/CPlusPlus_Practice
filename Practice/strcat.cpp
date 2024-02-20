#include<iostream>
#include<stdio.h>
#include<string.h>

int main(){
    char str1[30], str2[30];

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str1;

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str2;

    strcat(str1, str2);

    std::cout<<"\n\n str1 = "<<str1;
    std::cout<<"\n\n str2 = "<<str2;
}