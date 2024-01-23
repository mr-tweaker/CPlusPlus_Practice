#include <iostream>

int main(){
    int x, y, i, ans=1;

    std::cout<<"\n\n Enter x : ";
    std::cin>>x;

    std::cout<<"\n\n Enter y : ";
    std::cin>>y;

    for(i=1; i<=y; i++){
        ans = ans * x;
    }

    std::cout<<"\n\n X raised to the power Y is : "<<ans;
}