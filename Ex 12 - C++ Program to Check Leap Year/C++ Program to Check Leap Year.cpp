#include <iostream>

int main(void){

    int year;

    std::cout<<"Enter year: ";
    std::cin>>year;

    if(year%4 == 0){
        if(year%100 == 0 && year%400 == 0){
            std::cout<<year<<" is a leap year";
        }
        else{
            std::cout<<year<<" is not a leap year";
        }
    }
    else{
        std::cout<<year<<" is not a leap year";
    }


    return 0;
}
