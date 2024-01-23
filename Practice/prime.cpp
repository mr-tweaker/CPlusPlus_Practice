#include <iostream>

int main(){
    int num, i, count=0;

    std::cout<<"\n\n Enter a num : ";
    std::cin>>num;

    for(i=1; i<=num; i++){
        if(num % i == 0){
            count++;
        }
    }

    if(count == 2){
        std::cout<<"\n\n PRIME NUMBER ";
    }else {
        std::cout<<"\n\n NOT PRIME NUMBER ";
    }
}