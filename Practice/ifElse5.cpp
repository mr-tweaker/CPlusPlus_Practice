#include <iostream>
#include <stdio.h>

int main(){
    char ch;

    std::cout<<"\n\n Enter a char : ";
    ch = getchar();

    if(ch >= 'A' && ch <= 'Z'){
        std::cout<<"\n\n UPPER CASE ";
    }else if(ch >= 'a' && ch <= 'z'){
        std::cout<<"\n\n LOWER CASE ";
    }else if(ch >= '0' && ch <= '9'){
        std::cout<<"\n\n DIGIT ";
    }else {
        std::cout<<"\n\n SPECIAL CHAR ";
    }
}