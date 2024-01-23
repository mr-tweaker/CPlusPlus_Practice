#include <iostream>

int main(){
    int n;
    std::cout<<"\n\n Enter the terms for Tribonacci series : ";
    std::cin>>n;
    int a=0, b=1, c=1, nextTerm;
    int i = 0;

    while(i < n){
    if(i <= 1){
        nextTerm = i;
    }else {
        nextTerm = a+b+c;
        a=b;
        b=c;
        c=nextTerm;
    }

    std::cout<<"\n\n "<<nextTerm;
    i++;
    }
}