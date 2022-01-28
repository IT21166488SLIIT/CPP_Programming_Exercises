#include <iostream>

int main(void){

    int number;
    int remainder;
    int reverse_number = 0;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    while(number != 0){
        remainder = number%10;
        number /= 10;
        reverse_number = reverse_number*10 + remainder;
    }

    std::cout<<"Reverse number is "<<reverse_number;

    return 0;
}
