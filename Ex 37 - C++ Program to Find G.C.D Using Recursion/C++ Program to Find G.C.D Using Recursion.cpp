#include <iostream>

int gcdm(int n1, int n2, int n3);
int main(void){

    int number1, number2;
    int maxn;
    int gcd;

    std::cout<<"Enter your 1st number: ";
    std::cin>>number1;

    std::cout<<"Enter your 2nd number: ";
    std::cin>>number2;

    if(number1 > number2){
        maxn = number1;
    }
    else{
        maxn = number2;
    }

    int answer = gcdm(number1,number2, maxn);

    std::cout<<"GCD of "<<number1<<" and "<<number2<<" is "<<answer;

    return 0;
}

int gcdm(int n1, int n2, int n3){
    if(n3 >= 1){
        if(n1%n3==0 && n2%n3==0){
            return gcdm(n1, n2, (n3-1));
        }
    }
}
