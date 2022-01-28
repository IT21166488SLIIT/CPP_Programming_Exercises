#include <iostream>

int main(void){

    int number;
    int i;
    int sum = 0;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    for(i=i; i<=number; i++){
        sum += i;
    }

    std::cout<<"Total is "<<sum;

    return 0;
}
