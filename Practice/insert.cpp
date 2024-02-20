#include <iostream>

int main(){
    int size, x[30], i, num, pos;

    std::cout<<"\n\n Enter size: ";
    std::cin>>size;

    pos = size;

    std::cout<<"\n\n Enter nums (in ascending order) : \n";
    std::cin>>num;

    for(i=0; i<size; i++){
        if(num < x[i]){
            pos = i;
            break;
        }
    }

    for(i=size; i>pos; i--){
        x[i] = x[i-1];
    }
    x[pos] = num;

    std::cout<<"\n\n List after insertion : \n";
    for(i=0; i<=size; i++){
        std::cout<<" "<<x[i];
    }
}