#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
    char str[30], word[30];
    int i, j;

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str;

    for(i=0; i<strlen(str); i++){
        j=0;

        while(str[i]!=' ' && str[i]!='\0'){
            word[j] = str[i];
            j++;
            i++;
        }

        word[j] = '\0';

        strrev(word);

        std::cout<<" "<<word;
    }
}