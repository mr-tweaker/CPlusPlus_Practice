#include <iostream>

int main(){
    int i, j;
    char ch;

    for(i=1; i<=5; i++){
        ch = 'A';
        for(j=1; j<=i; j++){
            std::cout<<" "<<ch;
            ch++;
        }
        std::cout<<"\n\n";
    }
}