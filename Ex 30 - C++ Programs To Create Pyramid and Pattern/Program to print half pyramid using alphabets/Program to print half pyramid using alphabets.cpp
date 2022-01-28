#include <iostream>

int main(void){

    int i,j;
    char letter = 'A';

    for(i=0; i<5; i++){
        for(j=0; j<=i; j++){
            std::cout<<letter<<" ";
        }
        std::cout<<std::endl;
        letter++;
    }

    return 0;
}
