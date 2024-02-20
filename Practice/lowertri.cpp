#include <iostream>

int main(){
    int A[3][3], i, j, sum=0;

    std::cout<<"\n\n Enter 9 numbers: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            std::cin>>A[i][j];
        }
    }
    std::cout<<"\n\n Lower Triangle: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i >= j){
                std::cout<<" "<<A[i][j];
            }
        }
        std::cout<<"\n\n";
    }
}