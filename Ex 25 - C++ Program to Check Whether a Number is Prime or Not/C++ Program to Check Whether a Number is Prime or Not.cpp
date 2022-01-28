#include <iostream>

int main(void){

    int number;
    int flag = 0;
    int i;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    for(i=2; i<=number/2; i++){
        if(number%i==0){
            flag = 1;
            break;
        }
    }

    if(number == 0){
        std::cout<<number<<" is neither prime nor composite.";
    }
    else if(flag == 0 || number == 1){
        std::cout<<number<<" is a prime number.";
    }
    else if(flag == 1){
        std::cout<<number<<" is a not prime number.";
    }



    return 0;
}
