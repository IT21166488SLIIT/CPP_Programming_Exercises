#include <iostream>

int main(void){

    int number01, number02, number03;

    std::cout<<"Enter a number: ";
    std::cin>>number01;

    std::cout<<"Enter a number: ";
    std::cin>>number02;

    std::cout<<"Enter a number: ";
    std::cin>>number03;

    if(number01 > number02 && number01 > number03){
        std::cout<<number01<<" is the largest number.";
    }
    else if(number02 > number01 && number02 > number03){
        std::cout<<number02<<" is the largest number.";
    }
    else{
        std::cout<<number03<<" is the largest number.";
    }



    return 0;
}
