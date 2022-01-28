#include <iostream>

int main(void){

    int i,j,k;
    int l=1;

    for(i=0; i<5; i++){
        for(j=0; j<5-i-1; j++){
            std::cout<<"  ";
        }
        for(k=0; k<l; k++){
            std::cout<<"* ";
        }
        l += 2;
        std::cout<<std::endl;
    }

    return 0;
}
