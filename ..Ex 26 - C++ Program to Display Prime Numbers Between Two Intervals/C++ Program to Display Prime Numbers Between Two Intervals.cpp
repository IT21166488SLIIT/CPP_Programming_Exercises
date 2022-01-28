#include <iostream>

int main(void){

    int low;
    int high;
    int flag = 1;
    int i;

    std::cout<<"Enter starting number: ";
    std::cin>>low;

    std::cout<<"Enter ending number: ";
    std::cin>>high;

    std::cout<<std::endl<<"Prime numbers between "<<low<<" and "<<high<<" are "<<std::endl;

    while(low < high){
        flag == 1;
        if(low == 0 || low == 1){
            flag = 0;
        }
        else{
            for(i=2; i<=low/2; i++){
                if(low%i==0){
                    flag = 0;
                    break;
                }
            }
        }

        if(flag == 1){
            std::cout<<low<<"\t";
        }
        low++;
    }

    return 0;
}
