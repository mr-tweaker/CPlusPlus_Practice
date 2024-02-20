#include <iostream>
#include <math.h>

int main(){
    int i, j, fact, n, sum=0;

    std::cout<<"\n\n Enter n : ";
    std::cin>>n;

    for(i=1; i<=n; i++){
        fact = 1;

        for(j=i; j>=1; j--){
            fact = fact * j;
        }
        sum = sum + fact;
    }
    std::cout<<"\n\n sum = "<<sum;
}