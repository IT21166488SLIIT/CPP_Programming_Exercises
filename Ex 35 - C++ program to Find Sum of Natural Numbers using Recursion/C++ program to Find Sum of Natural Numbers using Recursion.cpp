#include <iostream>
int sum(int number);
int main(void){

    int number;
    int sums;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    sums = sum(number);
    std::cout<<"Sum: "<<sums;
}

int sum(int number){
    int sums;
    while(number != 0){
        sums = sums + number;
        sum(number-1);
    }

    return sums;

}
