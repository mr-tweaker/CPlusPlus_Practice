#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
    char str[30], temp;
    int i, j;

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str;

    for(i=0; i<strlen(str); i++){
        for(j=i+1; j<strlen(str); j++){
            if(str[i] > str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    std::cout<<"\n\n String after sort = "<<str;
}