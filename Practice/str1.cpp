#include <iostream>

int main(){
    char str[20]="Computer";
    int i;

    for(i=0; str[i]!='\0'; i++){
        std::cout<<"\n\n str = "<<str[i];
    }
}