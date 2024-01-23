#include <iostream>

int main(){
    int num, i, sum=0;

    std::cout<<"\n\n Enter a num : ";
    std::cin>>num;

    for(i=1; i<num; i++){
        if(num % i == 0){
            sum = sum + i;
        }
    }

    if(sum == num){
        std::cout<<"\n\n Perfect Number ";
    }else {
        std::cout<<"\n\n Not a Perfect Number ";
    }
}