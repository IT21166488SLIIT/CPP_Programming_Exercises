#include <iostream>

int main(void){

    char letter;

    std::cout<<"Enter a letter: ";
    std::cin>>letter;

    if(letter == 'A' || letter == 'a' || letter == 'B' || letter == 'b' || letter == 'I' || letter == 'i' || letter == 'O' || letter == 'o' || letter == 'U' || letter == 'u'){
        std::cout<<letter<<" is a vowel.";
    }
    else{
        std::cout<<letter<<" is a contant.";
    }

    return 0;
}
