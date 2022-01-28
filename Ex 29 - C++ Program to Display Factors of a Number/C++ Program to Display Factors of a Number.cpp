#include <iostream>

int main(void){

    int number;
    int i;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    std::cout<<"Factors of "<<number<<" are: ";
    for(i=1; i<=number; i++){
        if(number%i==0){
            std::cout<<i<<" ";
        }
    }

    return 0;
}
