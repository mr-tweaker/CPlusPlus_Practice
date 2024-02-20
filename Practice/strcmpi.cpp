#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
    char str1[30], str2[30];

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str1;

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str2;

    if(str1 == str2){
        std::cout<<"\n\n Same Strings ";
    }
    else {
        std::cout<<"\n\n Not same strings ";
    }
}