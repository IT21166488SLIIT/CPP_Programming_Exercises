#include <iostream>

int main(void){

    int i,j;
    int number = 1;

    for(i=1; i<=4; i++){
        for(j=1; j<=i; j++){
            std::cout<<number<<" ";
            number++;
        }
        std::cout<<std::endl;
    }


    return 0;
}
