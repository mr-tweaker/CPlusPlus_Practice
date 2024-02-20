#include <iostream>

int main(){
    int i, j, sp;

    for(i=1; i<=5; i++){
        for(sp=5; sp>=i; sp--){
            std::cout<<" ";
        }
        for(j=1; j<=i; j++){
            std::cout<<" "<<j;
        }
        for(j=i-1; j>=1; j--){
            std::cout<<" "<<j;
        }
        std::cout<<"\n\n";
    }
}