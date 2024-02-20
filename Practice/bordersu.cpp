#include <iostream>

int main(){
    int A[4][4], i, j, sum=0;

    std::cout<<"\n\n Enter 16 numbers: \n";
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            std::cin>>A[i][j];
        }
    }

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(i==0 || j==0 || i==3 || j==3){
                sum = sum + A[i][j];
            }
        }
    }

    std::cout<<"\n\n Sum of border elements: "<<sum;
}