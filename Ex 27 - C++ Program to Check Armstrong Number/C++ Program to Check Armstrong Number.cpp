#include <iostream>
#include <cmath>

int main(void){

    int number;
    int digit_count = 0;
    int copy_number1;
    int copy_number2;
    int remainder;
    int armstrong = 0;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    copy_number1 = copy_number2 = number;

    while(number != 0){
        number /= 10;
        digit_count++;
    }

    while(copy_number1 != 0){
        remainder = copy_number1%10;
        copy_number1 /= 10;
        armstrong = armstrong + pow(remainder,digit_count);
    }

    if(copy_number2 == armstrong){
        std::cout<<copy_number2<<" is an armstrong number";
    }
    else{
        std::cout<<copy_number2<<" is not an armstrong number";
    }


    return 0;
}
