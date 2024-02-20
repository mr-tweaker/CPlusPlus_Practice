#include <iostream>

int main(){
    int x[30], size, i, j, temp;

    std::cout<<"\n\n Enter size: ";
    std::cin>>size;

    std::cout<<"\n\n Enter nums: \n";
    for(i=0; i<size; i++){
        std::cin>>x[i];
    }

    for(i=0; i<size-1; i++){
        if(x[i] % 10 == 0){
            temp = x[i];
            x[i] = x[i+1];
            x[i+1] = temp;
        }
    }

    std::cout<<"\n\n List : \n";
    for(i=0; i<size; i++){
        std::cout<<" "<<x[i];
    }
}