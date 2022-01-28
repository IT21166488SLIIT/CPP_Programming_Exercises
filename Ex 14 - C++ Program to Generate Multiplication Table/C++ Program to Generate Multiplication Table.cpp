#include <iostream>

int main(void){

    int number;
    int i;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    for(i=1; i<=10; i++){
        std::cout<<number<<" * "<<i<<" = "<<i*number<<std::endl;
    }


    return 0;
}
