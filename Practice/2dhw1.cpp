#include <iostream>

int main(){
    int A[4][4], i, j, max;

    std::cout<<"\n\n Enter 16 nums: \n";
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            std::cin>>A[i][j];
        }
    }

    for(i=0; i<4; i++){
        max = A[i][0];

        for(j=1; j<4; j++){
            if(max < A[i][j]){
                max = A[i][j];
            }
        }

        std::cout<<"\n\n Max = "<<max;
    }
}