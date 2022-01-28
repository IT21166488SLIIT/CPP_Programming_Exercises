#include <iostream>

int main(void){

    int number01;
    int number02;
    int temp;

    std::cout<<"Enter a number: ";
    std::cin>>number01;

    std::cout<<"Enter a number: ";
    std::cin>>number02;

    temp = number01;
    number01 = number02;
    number02 = temp;

    std::cout<<std::endl;
    std::cout<<"===== Before Swapping ====="<<std::endl;
    std::cout<<"Number 01: "<<number01<<std::endl;
    std::cout<<"Number 02: "<<number02<<std::endl;


    std::cout<<std::endl;
    std::cout<<"===== After Swapping ====="<<std::endl;
    std::cout<<"Number 01: "<<number01<<std::endl;
    std::cout<<"Number 02: "<<number02;

    return 0;
}
