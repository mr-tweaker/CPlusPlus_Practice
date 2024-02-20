#include<iostream>
#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    int i, count=0;

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str;

    for(i=0; i<strlen(str); i++){
        switch(str[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            count++;
        }
    }

    std::cout<<"\n\n count = "<<count;
}