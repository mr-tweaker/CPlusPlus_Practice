#include <iostream>
#include <math.h>

int main(){
    int i, j, fact, n, sum=0, sign=1;

    std::cout<<"Enter n : ";
    std::cin>>n;

    for(i=1; i<=n; i++){
        fact = 1;

        for(j=i; j>=1; j--){
            fact = fact * j;
        }
        sum = sum + (fact * sign);

        sign = sign * -1;
    }
    std::cout<<"\n\n sum = "<<sum;
}