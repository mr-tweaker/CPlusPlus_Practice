#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
    char str[3][20], temp[30];
    int i, j;

    std::cout<<"\n\n Enter 3 strings: \n";
    for(i=0; i<3; i++){
        std::cin>>str[i];
    }

    for(i=0; i<3; i++){
        for(j=i+1; j<3; j++){
            if(strcmp(str[i], str[j]) > 0){
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    std::cout<<"\n\n Sorted strings: \n";
    for(i=0; i<3; i++){
        puts(str[i]);
    }
}