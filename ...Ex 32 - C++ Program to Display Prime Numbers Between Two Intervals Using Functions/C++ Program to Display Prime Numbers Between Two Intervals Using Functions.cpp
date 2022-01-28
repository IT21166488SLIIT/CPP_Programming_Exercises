#include <iostream>
int prime(int number);
int main(void){

    int snumber;
    int lnumber;
    int flag;
    int i;

    std::cout<<"Enter the starting number: ";
    std::cin>>snumber;

    std::cout<<"Enter the ending number: ";
    std::cin>>lnumber;

    //std::cout<<snumber<<"\t"<<lnumber;

    std::cout<<"Prime numbers between "<<snumber<<" and "<<lnumber<<" are: ";
    /*while(snumber <= lnumber){
        flag = prime(snumber);
        if(flag == 0){
            std::cout<<snumber<<"\t";
        }
        snumber++;
    }*/

    for(i=snumber; snumber<=lnumber; snumber++){
        if(prime(snumber) == 0){
            std::cout<<snumber<<"\t";
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
            flag = 1;
            break;
        }
    }
    return flag;
}
