#include <iostream>

int main(){
    int a,b,choice;

    std::cout<<"\n\n Enter 2 numbers : ";
    std::cin>>a>>b;

    std::cout<<"\n\n 1] ADD ";
    std::cout<<"\n\n 2] SUB ";
    std::cout<<"\n\n 3] MUL ";
    std::cout<<"\n\n 4] DIV ";

    std::cout<<"\n\n Enter your choice : ";
    std::cin>>choice;

    switch(choice){
        case 1:
            std::cout<<"\n\n ADD = "<<a+b;
            break;

        case 2:
            std::cout<<"\n\n SUB = "<<a-b;
            break;

        case 3:
            std::cout<<"\n\n MUL = "<<a*b;
            break;

        case 4:
            std::cout<<"\n\n DIV = "<<a/b;
            break;

        default:
            std::cout<<"\n\n INVALID INPUT ";
    }
}