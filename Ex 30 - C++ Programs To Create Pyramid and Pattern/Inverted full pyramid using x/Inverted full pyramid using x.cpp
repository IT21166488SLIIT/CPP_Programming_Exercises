#include <iostream>

int main(void){

    int i,j,k;
    int l = 9;

    for(i=0; i<5; i++){
        for(j=0; j<i; j++){
            std::cout<<"  ";
        }
        for(k=0; k<l; k++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
        l -= 2;
    }

    return 0;
}
