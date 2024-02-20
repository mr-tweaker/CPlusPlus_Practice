#include <iostream>

int main(){
    int x[5], i, sum=0;

    std::cout<<"\n\n Enter 5 numbers : \n";
    for(i=0; i<5; i++){
        std::cin>>x[i];

        sum = sum + x[i];
    }std::cout<<"\n\n sum = "<<sum;

}