#include <iostream>
int prime(int number);
int main(void){

    int number;
    int flag;
    int i,j;
    int sum;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    for(i=1; i<=number; i++){
        flag = prime(number);
        if(flag == 0){
            for(j=1; j<=number; j++){
                sum = j + i;
                if(sum == number){
                    std::cout<<number<<" = "<<i<<" + "<<j;
                }
            }
        }

    }

    return 0;
}

int prime(int number){
    int i;
    int flag = 0;

    if(number == 0 || number == 1){
        flag = 1;
    }
    else{
        for(i=2; i<=number/2; i++){
            if(number%i==0){
                flag = 1;
                break;
            }
        }
    }

    return flag;
}
