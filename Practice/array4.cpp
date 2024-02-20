#include <iostream>

int main(){
    int x[30], size, i, num, pos=0;

    std::cout<<"\n\n Enter a size : ";
    std::cin>>size;

    std::cout<<"\n\n Enter nums : \n";
    for(i=0; i<size; i++){
        std::cin>>x[i];
    }

    std::cout<<"\n\n Enter num to be searched : ";
    std::cin>>num;

    for(i=0; i<size; i++){
        if(num == x[i]){
            pos = i+1;
            break;
        }
    }

    if(pos==0){
        std::cout<<"\n\n NUM NOT FOUND ";
    } else {
        std::cout<<"\n\n pos = "<<pos;
    }
}