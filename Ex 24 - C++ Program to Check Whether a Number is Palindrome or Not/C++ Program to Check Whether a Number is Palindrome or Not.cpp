#include <iostream>

int main(void){

    int number;
    int remainder;
    int reverse_number = 0;
    int copy_number;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    copy_number = number;

    while(number != 0){
        remainder = number%10;
        reverse_number = reverse_number*10 + remainder;
        number /= 10;
    }

    if(copy_number == reverse_number){
        std::cout<<copy_number<<" is palindrome.";
    }
    else{
        std::cout<<copy_number<<" is not palindrome.";
    }


    return 0;
}
