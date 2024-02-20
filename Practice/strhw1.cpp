#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
    char str[30], word[30], longest[30]="";
    int i, j, max=0;

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str;

    for(i=0; i<strlen(str); i++){
        j=0;

        while(str[i]!=' ' && str[i]!='\0'){
            word[j] = str[i];
            j++, i++;
        }

        word[j] = '\0';

        if(max < strlen(word)){
            max = strlen(word);

            if(strcmp(longest, "") == 0){
                strcpy(longest, word);
            }
        }
        else if(max == strlen(word)){
            strcat(longest, ", ");
            strcat(longest, word);
        }
    }

    std::cout<<"\n\n Longest Word(s) = "<<longest;
    std::cout<<"\n\n Max Length = "<<max;
}