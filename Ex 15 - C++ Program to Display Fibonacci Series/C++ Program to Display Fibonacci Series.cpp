#include <iostream>

int main(void){

    int number;
    int pre = 0;
    int cur = 1;
    int temp;
    int i;

    std::cout<<"How many number series do you want: ";
    std::cin>>number;

    std::cout<<pre<<"\t"<<cur<<"\t";

    for(i=2; i<number; i++){
       temp = cur;
       cur = pre + cur;
       pre = temp;
       std::cout<<cur<<"\t";
    }

    return 0;
}
