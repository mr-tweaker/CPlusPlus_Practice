#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    int i, j, count;

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str;

    for(i=0; i<strlen(str); i++){
        count = 1;

        for(j=i+1; j<strlen(str); j++){
            if(str[i] == str[j]){
                count++;
                str[j] = '*';
            }
        }

        if(str[i] != '*'){
            std::cout<<"\n\n "<<str[i]<<" => "<<count;
        }
    }
}