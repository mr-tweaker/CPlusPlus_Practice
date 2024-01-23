#include <iostream>

int main(){
    int a,b,c,d, max;

    std::cout<<"\n\n Enter 4 numbers : ";
    std::cin>>a>>b>>c>>d;

    max = a;

    if(max < b){
        max = b;
    }
    if(max < c){
        max = c;
    }
    if(max < d){
        max = d;
    }

    std::cout<<"\n\n max = "<<max;
}