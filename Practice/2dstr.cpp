#include <iostream>
#include <stdio.h>

int main(){
    char str[3][20];
    int i;

    std::cout<<"\n\n Enter 3 strings: \n";
    for(i=0; i<3; i++){
        std::cin>>str[i];
    }

    std::cout<<"\n\n Given strings: \n";
    for(i=0; i<3; i++){
        puts(str[i]);
    }
}