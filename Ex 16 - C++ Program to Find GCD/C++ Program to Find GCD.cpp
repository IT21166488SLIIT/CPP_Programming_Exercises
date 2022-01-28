#include <iostream>

int main(void){

    int number1, number2;
    int i;
    int large_number;
    int gcd;

    std::cout<<"Enter 1st number: ";
    std::cin>>number1;

    std::cout<<"Enter 2nd number: ";
    std::cin>>number2;

    if(number1>number2){
        large_number = number1;
    }
    else{
        large_number = number2;
    }

    for(i=1; i<=large_number; i++){
        if(number1%i == 0 && number2%i == 0){
            gcd = i;
        }
    }

    std::cout<<"GCD of "<<number1<<" and "<<number2<<" is "<<gcd;

    return 0;
}
