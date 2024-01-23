#include <iostream>

int main (){
    int a,b,c;

    std::cout<<"\n\n Enter 3 numbers : ";
    std::cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            std::cout<<"\n\n max = "<<a;
        }
        else {
            std::cout<<"\n\n max = "<<c;
        }
    }
    else if(b>c){
        std::cout<<"\n\n max = "<<b;
    }
    else{
        std::cout<<"\n\n max = "<<c;
    }
}