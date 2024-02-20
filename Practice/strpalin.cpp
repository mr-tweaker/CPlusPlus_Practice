#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
    char str[30], temp[30];

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str;

    strcpy(temp, str);
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        std::swap(str[i], str[length - i - 1]);
    }

    if(strcmp(str, temp) == 0){
        std::cout<<"\n\n String Palindrome ";
    }
    else {
        std::cout<<"\n\n Not a String Palindrome ";
    }
}