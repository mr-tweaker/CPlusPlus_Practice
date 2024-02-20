#include <iostream>

int main(){
    int x[30], size, i, j, temp;

    std::cout<<"\n\n Enter size : ";
    std::cin>>size;

    std::cout<<"\n\n Enter nums: \n";
    for(i=0; i <size; i++){
        std::cin>>x[i];
    }

    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(x[i] < x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    std::cout<<"\n\n List after sort: \n";
    for(i=0; i<size; i++){
        std::cout<<" "<<x[i];
    }
}