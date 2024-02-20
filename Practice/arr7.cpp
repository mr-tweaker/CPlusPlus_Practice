#include <iostream>

int main(){
    int x[30], size, i, j=0, k=0, even[30], odd[30];

    std::cout<<"\n\n Enter size: ";
    std::cin>>size;

    std::cout<<"\n\n Enter nums: ";
    for(i=0; i<size; i++){
        std::cin>>x[i];
    }

    j = k = 0;

    for(i=0; i<size; i++){
        if(x[i] % 2 == 0){
            even[j] = x[i];
            j++;
        } else {
            odd[k] = x[i];
            k++;
        }
    }

    std::cout<<"\n\n Even Array: \n";
    for(i=0; i<j; i++){
        std::cout<<" "<<even[i];
    }

    std::cout<<"\n\n Odd Array: \n";
    for(i=0; i<j; i++){
        std::cout<<" "<<odd[i];
    }
}