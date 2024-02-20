#include <iostream>

int main(){
    int size, x[30], i, num, pos = -1;

    std::cout<<"\n\n Enter size: ";
    std::cin>>size;

    std::cout<<"\n\n Enter nums: \n";
    for(i=0; i<size; i++){
        std::cin>>x[i];
    }

    for(i=0; i<size; i++){
        if(num == x[i]){
            pos = i;
            break;
        }
    }

    if(pos == -1){
        std::cout<<"\n\n Num not found ";
    }else {
        x[pos] = 0;

        for(i=pos; i<size-1; i++){
            x[i] = x[i+1];
        }
        std::cout<<"\n\n List after deletion: \n";
        for(i=0; i<size-1; i++){
            std::cout<<" "<<x[i];
        }
    }
}