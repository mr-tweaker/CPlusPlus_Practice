#include <iostream>

int main() {
    int A[3][3], B[3][3], C[3][3], i, j, k;

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

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            C[i][j] = 0;

            for(k=0; k<3; k++){
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
            }
        }
    }

    std::cout<<"\n\n Matrix after multiplication: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            std::cout<<" "<<C[i][j];
        }
        std::cout<<"\n\n";
    }
}