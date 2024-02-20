#include <iostream>

int main(){
    int A[3][3], i, j, sum=0;

    std::cout<<"\n\n Enter 9 nums: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            std::cin>>A[i][j];
        }
    }

    for(i=0; i<3; i++){
        sum = 0;

        for(j=0; j<3; j++){
            sum = sum + A[i][j];
        }

        std::cout<<"\n\n Sum = "<<sum;
    }
}