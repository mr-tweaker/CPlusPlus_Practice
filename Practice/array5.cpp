#include <iostream>

int main(){
    int x[30], size, i, num, pos=0;
    int beg, mid, end;

    std::cout<<"\n\n Enter size : ";
    std::cin>>size;

    std::cout<<"\n\n Enter nums (in asc order) : \n";
    for(i=0; i<size; i++){
        std::cin>>x[i];
    }

    std::cout<<"\n\n Enter num to be searched : ";
    std::cin>>num;

    beg=0, end = size-1;

    while(beg <= end){
        mid = (beg + end)/2;

        if(num == x[mid]){
            pos = mid + 1;
            break;
        }else if(num < x[mid]) {
            end = mid - 1; 
        } else {
            beg = mid + 1;
        }
    }

    if(pos == 0){
        std::cout<<"\n\n Num Not Found ";
    } else {
        std::cout<<"\n\n pos = "<<pos;
    }
}