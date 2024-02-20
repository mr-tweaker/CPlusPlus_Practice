#include <iostream>

int main(){
    int i, j;

    for(i=1; i<=5; i++){
        for(j=i; j<=5; j++){
            std::cout<<" "<<j;
        }
        std::cout<<"\n\n";
    }
}