#include <iostream>

int main(){
    int per;

    std::cout<<"\n\n Enter your percentage : ";
    std::cin>>per;

    if(per < 40){
        std::cout<<"\n\n FAIL";
    }else if(per >= 41 && per <= 49){
        std::cout<<"\n\n D GRADE ";
    }else if(per >= 50 && per <= 59){
        std::cout<<"\n\n C GRADE ";
    }else if(per >= 60 && per <= 69){
        std::cout<<"\n\n B GRADE ";
    }else if(per >= 70 && per <= 79){
        std::cout<<"\n\n B+ GRADE ";
    }else if(per >= 80 && per <= 89){
        std::cout<<"\n\n A GRADE ";
    }else if(per >= 90 && per <= 100){
        std::cout<<"\n\n A+ GRADE";
    }else {
        std::cout<<"\n\n INVALID INPUT";
    }
}