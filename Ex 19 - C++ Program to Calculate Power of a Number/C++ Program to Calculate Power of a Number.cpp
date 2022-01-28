#include <iostream>

int main(void){

    int base;
    int exponent;
    int i;
    int power = 1;

    std::cout<<"Enter base value: ";
    std::cin>>base;

    std::cout<<"Enter exponent value: ";
    std::cin>>exponent;

    for(i=1; i<=exponent; i++){
        power = power * base;
    }

    std::cout<<"Power of "<<base<<" is "<<power;


    return 0;
}
