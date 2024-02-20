#include <iostream>

int main(){
    int A[4][4], i, j, temp;

    std::cout<<"\n\n Enter 16 nums: \n";
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            std::cin>>A[i][j];
        }
    }

    for(i=0; i<4; i++){
        temp = A[0][i];
        A[0][i] = A[3][i];
        A[3][i] = temp;
    }

    std::cout<<"\n\n After Row Swap: \n";
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            std::cout<<" "<<A[i][j];
        }

        std::cout<<"\n\n";
    }
}