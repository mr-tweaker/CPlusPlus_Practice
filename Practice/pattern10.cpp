#include <iostream>

int main(){
    int i, j, sp;

    for(i=1; i<=5; i++){
        for(sp=5; sp>=i; sp--){
            std::cout<<" ";
        }
        for(j=1; j<=i; j++){
            std::cout<<" * ";
        }
        std::cout<<"\n\n";
    }
}