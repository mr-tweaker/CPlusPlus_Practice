#include <iostream>

int main(){
    int i;

    for(i=1; i<=10; i++){
        if(i == 5){
            break;
        }

        std::cout<<"\n\n "<<i;
    }
}