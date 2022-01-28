#include <iostream>

int main(void){

    float num1,num2;
    char opp;

    std::cout<<"Enter a number: ";
    std::cin>>num1;

    std::cout<<"Enter a number: ";
    std::cin>>num2;

    std::cout<<"Enter the operator: ";
    std::cin>>opp;

    switch(opp){
        case '+':
            std::cout<<num1<<" + "<<num2<<" = "<<num1+num2;
            break;
        case '-':
            std::cout<<num1<<" - "<<num2<<" = "<<num1-num2;
            break;
        case '*':
            std::cout<<num1<<" * "<<num2<<" = "<<num1*num2;
            break;
        case '/':
            std::cout<<num1<<" - "<<num2<<" = "<<num1/num2;
            break;
        default:
            std::cout<<"Invalid Operation type.";
    }

    return 0;
}
