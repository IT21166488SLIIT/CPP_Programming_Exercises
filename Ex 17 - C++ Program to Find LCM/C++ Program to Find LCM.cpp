#include <iostream>

int main(void){

    int number1,number2;
    int gcd;
    int i;
    int temp;
    int lcm;

    std::cout<<"Enter a number: ";
    std::cin>>number1;

    std::cout<<"Enter a number: ";
    std::cin>>number2;

    if(number2 > number1){
        temp = number1;
        number1 = number2;
        number1 = temp;
    }

    for(i=1; i<=number1; i++){
        if(number1%i==0 && number2%i==0){
            gcd = i;
        }
    }

    lcm = (number1 * number2)/gcd;
    std::cout<<"Lcm of "<<number1<<" and "<<number2<<" is "<<lcm;


    return 0;
}
