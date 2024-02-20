#include <iostream>

int main(){
    int i, j, sp;

    for(i=5; i>=1; i--){
        for(sp=5; sp>=i; sp--){
            std::cout<<" ";
        }
        for(j=1; j<=i; j++){
            std::cout<<" * ";
        }
        std::cout<<"\n\n";
    }
}