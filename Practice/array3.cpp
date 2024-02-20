#include <iostream>

int main(){
    int size, x[30], i, max, min;

    std::cout<<"\n\n Enter size : ";
    std::cin>>size;

    std::cout<<"\n\n Enter nums : \n";
    for(i=0; i<size; i++){
        std::cin>>x[i];
    }
    min = max = x[0];

    for(i=1; i<size; i++){
        if(min > x[i]){
            min = x[i];
        }
        if(max < x[i]){
            max = x[i];
        }
    }

    std::cout<<"\n\n min = "<<min;
    std::cout<<"\n\n max = "<<max;
}