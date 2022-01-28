#include <iostream>

int main(void){

    int dividend,divisor;
    int quotient,remainder;

    std::cout<<"Enter dividend: ";
    std::cin>>dividend;

    std::cout<<"Enter divisor: ";
    std::cin>>divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    std::cout<<"Dividend is "<<quotient<<std::endl;
    std::cout<<"Remainder is "<<remainder;

    return 0;
}
