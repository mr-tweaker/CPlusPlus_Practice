#include <iostream>

int main(){
    int i, n, sum=0;

    std::cout<<"\n\n Enter n : ";
    std::cin>>n;

    for(i=1; i<=n; i++){
        sum += i;
    }
    std::cout<<"\n\n sum = "<<sum;
}