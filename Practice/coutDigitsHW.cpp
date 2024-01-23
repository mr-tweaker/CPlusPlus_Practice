#include <iostream>

int main(){
    int num, count=0;
    std::cout<<"\n\n Enter the number : ";
    std::cin>>num;
    while(num > 0){
        count++;
        num = num / 10;
    }
    std::cout<<"\n\n Total digits: "<<count;
}