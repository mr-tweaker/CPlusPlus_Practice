#include <iostream>

int main(){
    int x[30], size, i, asc=0, desc=0;

    std::cout<<"\n\n Enter size: ";
    std::cin>>size;

    std::cout<<"\n\n Enter nums: ";
    for(i=0; i<size; i++){
        std::cin>>x[i];
    }

    for(i=0; i<size-1; i++){
        if(x[i] < x[i+1]){
            asc++;
        }
        if(x[i] > x[i+1]){
            desc++;
        }
    }

    if(asc == size-1){
        std::cout<<"\n\n Asc Order ";
    }
    else if(desc == size-1){
        std::cout<<"\n\n Desc Order ";
    }
    else {
        std::cout<<"\n\n Not in order ";
    }
}