#include <iostream>

int main(){
    int i, j, sp;
    char ch;

    for(i=1; i<=5; i++){
        for(sp=5; sp>=i; sp--){
            std::cout<<" ";
        }
        for(j=1; j<=i; j++){
            std::cout<<" "<<j;
        }

        ch = 'A';

        for(j=i-1; j>=1; j--){
            std::cout<<" "<<ch;
            ch++;
        }
        std::cout<<"\n\n";
    }
}