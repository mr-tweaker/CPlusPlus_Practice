#include <iostream>

int main(){
    int num, i, ans;

    std::cout<<"\n\n Enter a num : ";
    std::cin>>num;

    for(i=1; i<=num; i++){
        if(num == i*i){
            ans = i;
            break;
        }
    }

    std::cout<<"\n\n Answer = "<<ans;
}