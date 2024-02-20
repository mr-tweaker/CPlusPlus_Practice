#include <iostream>

int main(){
    int x[30], size, i, j, temp;

    std::cout<<"\n\n Enter size: ";
    std::cin>>size;

    std::cout<<"\n\n Enter nums: ";
    for(i=0; i<size; i++){
        std::cin>>x[i];
    }

    temp = x[size-1];

    for(i=size-1; i>0; i--){
        x[i] = x[i-1];
    }

    x[0] = temp;

    std::cout<<"\n\n List: \n";
    for(i=0; i<size; i++){
        std::cout<<" "<<x[i];
    }
}