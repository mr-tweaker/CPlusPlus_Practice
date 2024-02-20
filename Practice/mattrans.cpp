#include <iostream>

int main(){
    int A[3][3], B[3][3], i, j;

    std::cout<<"\n\n Enter 9 numbers: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            std::cin>>A[i][j];
        }
    }

    std::cout<<"\n\n Matrix after transpose: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            B[i][j] = A[j][i];

            std::cout<<" "<<B[i][j];
        }

        std::cout<<"\n\n";
    }
}