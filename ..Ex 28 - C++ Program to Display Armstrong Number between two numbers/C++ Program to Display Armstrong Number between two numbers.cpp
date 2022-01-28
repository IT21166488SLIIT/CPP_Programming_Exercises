//C++ Program to Display Armstrong Number Between Two Intervals

#include <iostream>
#include <cmath>
using namespace std;

int main(void){

    int low;
    int high;
    int remainder;
    int digit_count = 0;
    int copy_number1;
    int copy_number2;
    int copy_number3;
    int armstrong = 0;

    std::cout<<"Enter starting number: ";
    std::cin>>low;

    std::cout<<"Enter ending number: ";
    std:cin>>high;

    std::cout<<std::endl<<"Armstrong numbers between "<<low<<" and "<<high<<" are:"<<std::endl;
    while(low<=high){

        copy_number1 = copy_number2 = copy_number3 = low;

        while(copy_number3 != 0){
            copy_number3 /= 10;
            digit_count++;
        }

        while(copy_number1!=0){
            remainder = low%10;
            armstrong = armstrong + pow(remainder,digit_count);
            copy_number1 /= 10;
        }

        if(copy_number2 == armstrong){
            std::cout<<armstrong<<std::endl;
        }

        low++;
        digit_count = 0;
        armstrong = 0;

    }

    return 0;
}
