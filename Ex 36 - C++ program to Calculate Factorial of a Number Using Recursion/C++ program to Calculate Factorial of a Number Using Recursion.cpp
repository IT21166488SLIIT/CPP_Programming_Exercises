#include <iostream>
int factorial(int n);
int main(void){

    int number;

    std::cout<<"Enter a integer number: ";
    std::cin>>number;

    int total = factorial(number);
    std::cout<<"Factorial of "<<number<<" is "<<total;

    return 0;
}

int factorial(int n){
    if(n>1){
        return n * factorial(n-1);
    }
    else{
       return 1;
    }
}
