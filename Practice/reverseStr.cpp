#include <iostream>
#include <stdio.h>

int main(){
    char str[30], temp;
    int i, j, len = 0;

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str;

    for(i=0; str[i]!='\0'; i++){
        len++;
    }

    for(i=0, j=len-1; i<len/2; i++,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    std::cout<<"\n\n String after reverse = "<<str;
}