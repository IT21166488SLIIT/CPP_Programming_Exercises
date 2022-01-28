#include <iostream>

int main(void){

    int number;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    if(number%2 == 0){
        std::cout<<number<<" is a even number";
    }
    else{
        std::cout<<number<<" is a odd number";
    }

    return 0;
}
