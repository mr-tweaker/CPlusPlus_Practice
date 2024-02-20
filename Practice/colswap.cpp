#include <iostream>

int main(){
    int A[4][4], i, j, temp;

    std::cout<<"\n\n Enter 16 numbers: \n";
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            std::cin>>A[i][j];
        }
    }

    for(i=0; i<4; i++){
        temp = A[i][0];
        A[i][0] = A[i][3];
        A[i][3] = temp;
    }

    std::cout<<"\n\n After Column Swap: \n";
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            std::cout<<" "<<A[i][j];
        }

        std::cout<<"\n\n";
    }
}