#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
    char str[30], temp;
    int i,j,len;

    std::cout<<"\n\n Enter a string: ";
    std::cin>>str;

    len = strlen(str);

    for(i=0,j=len-1; i<j; ){
        if(str[i] == ' '){
            i++;
        }
        else if(str[j] == ' ')
        {
            j--;
        }
        else {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++, j--;
        }
    }

    std::cout<<"\n\n str = "<<str;
}