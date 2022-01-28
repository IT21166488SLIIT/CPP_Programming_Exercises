#include <iostream>

int main(void){

    int number1,number2;
    int product;

    std::cout<<"Enter a number: ";
    std::cin>>number1;

    std::cout<<"Enter a number: ";
    std::cin>>number2;

    product = number1 * number2;

    std::cout<<"Product of "<<number1<<" * "<<number2<<" = "<<product;


    return 0;
}
