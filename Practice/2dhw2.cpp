#include <iostream>

int main(){
    int A[3][3], i, j, flag = 1;

    std::cout<<"\n\n Enter 9 numbers: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            std::cin>>A[i][j];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(A[i][j] != A[j][i]){
                flag = 2;
                break;
            }
        }
    }

    if(flag == 1){
        std::cout<<"\n\n Symmetric Matrix ";
    }
    else {
        std::cout<<"\n\n Not a Symmetric Matrix ";
    }
}