#include <iostream>

int main(){
    int A[3][3], i, j, fd=0, bd=0;

    std::cout<<"\n\n Enter 9 numbers: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            std::cin>>A[i][j];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i == j){
                fd = fd + A[i][j];
            }
            if((i + j) == 2){
                bd = bd + A[i][j];
            }
        }
    }

    std::cout<<"\n\n Sum of forward diagonal: "<<fd;
    std::cout<<"\n\n Sum of backward diagonal: "<<bd;
}