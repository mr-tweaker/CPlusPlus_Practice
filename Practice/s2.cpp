#include <iostream>
#include <math.h>

int main(){
    int i, n, sum=0;

    std::cout<<"\n\n Enter n : ";
    std::cin>>n;

    for(i=1; i<=n; i++){
        sum += pow(i, 2);
    }
    std::cout<<"\n\n sum = "<<sum;
}