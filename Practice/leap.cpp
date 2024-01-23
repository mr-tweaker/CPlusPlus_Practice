#include <iostream>

int main(){
    int year;

    std::cout<<"\n\n Enter a year : ";
    std::cin>>year;

    if(year % 400 == 0){
        std::cout<<"\n\n Leap Year ";
    }else if(year % 100 == 0){
        std::cout<<"\n\n Not a Leap Year ";
    }else {
        std::cout<<"\n\n Not a Leap Year";
    }
}