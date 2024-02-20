#include <iostream>

int main(){
    int x[30], size, i, even=0, odd=0;

    std::cout<<"\n\n Enter size: ";
    std::cin>>size;

    std::cout<<"\n\n Enter nums: ";
    for(i=0; i<size; i++){
        std::cin>>x[i];
    }

    for(i=0; i<size; i++){
        if(x[i] % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }

    std::cout<<"\n\n No. of even numbers = "<<even;
    std::cout<<"\n\n No. of odd numbers = "<<odd;
}