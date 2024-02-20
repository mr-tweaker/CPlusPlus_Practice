#include <iostream>

int main(){
    int i, j;

    for(i=1; i<=5; i++){

        if(i % 2 == 1){

            for(j=1; j<=i; j++){

                std::cout<<" "<<j;
            }
        } else {

            for(j=i; j>=1; j--){

                std::cout<<" "<<j;
            }
        }
        std::cout<<"\n\n";
    }
}