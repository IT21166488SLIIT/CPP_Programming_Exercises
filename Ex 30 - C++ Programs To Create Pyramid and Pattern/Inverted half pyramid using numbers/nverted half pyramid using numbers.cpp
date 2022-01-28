#include <iostream>

int main(void){

    int i,j;
    int number = 1;

    for(i=0; i<5; i++){
        for(j=0; j<5-i; j++){
            std::cout<<number<<" ";
            number++;
        }
        std::cout<<std::endl;
        number = 1;
    }

    return 0;
}
