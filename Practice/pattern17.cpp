#include <iostream>

int main(){
    int i, j;

    for(i=1; i<=4; i++){
        for(j=i; j>=1; j--){
            std::cout<<" "<<j%2;
        }
        std::cout<<"\n\n";
    }
}