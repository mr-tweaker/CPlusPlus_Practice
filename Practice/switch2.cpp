#include <iostream>
#include <stdio.h>

int main(){
    char ch;

    std::cout<<"\n\n Enter a char : ";
    ch = getchar();

    switch(ch){
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
            std::cout<<"\n\n VOWEL ";
            break;
        default:
            std::cout<<"\n\n NOT VOWEL ";
    }
}