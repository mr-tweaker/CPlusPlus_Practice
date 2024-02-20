#include <iostream>

int main(){
    int A[3][3], B[3][3], C[3][3], i, j;

    std::cout<<"\n\n Enter 9 numbers: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            std::cin>>A[i][j];
        }
    }

    std::cout<<"\n\n Enter 9 numbers: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            std::cin>>B[i][j];
        }
    }

    std::cout<<"\n\n Matrix after addition: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            C[i][j] = A[i][j] + B[i][j];

            std::cout<<" "<<C[i][j];
        }
        std::cout<<"\n\n";
    }
}