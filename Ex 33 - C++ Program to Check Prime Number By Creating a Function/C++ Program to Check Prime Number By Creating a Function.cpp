#include <iostream>
int prime(int number);
int main(void){

    int number;
    int flag;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    flag = prime(number);

    if(flag == 0){
        std::cout<<number<<" is a prime number";
    }
    else{
        std::cout<<number<<" is not a prime number";
    }

    return 0;
}

int prime(int number){
    int i;
    int flag = 0;

    if(number == 1 || number == 0){
        flag = 1;
    }
    else{
        for(i=2; i<=number/2; i++){
            if(number%i==0){
                flag = 1;
                break;
            }
        }
    }

    return flag;
}
