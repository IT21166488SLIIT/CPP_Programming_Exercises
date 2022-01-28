#include <iostream>

int main(void){

    int number;
    int i;
    int fact = 1;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    for(i=1; i<=number; i++){
        fact = fact * i;
    }

    std::cout<<"Factorial of "<<number<<" is "<<fact;


    return 0;
}
