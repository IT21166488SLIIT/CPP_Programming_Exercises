#include <iostream>
#include <cmath>

int main(void){

    int a;
    int b;
    int c;
    int determinent;
    float root1,root2;

    std::cout<<"===== Equation is like: ax^2 + bx + c ====="<<std::endl<<std::endl;

    std::cout<<"Enter coefficients a: ";
    std::cin>>a;

    std::cout<<"Enter coefficients b: ";
    std::cin>>b;

    std::cout<<"Enter coefficients c: ";
    std::cin>>c;

    determinent = b*b - 4*a*c;

    std::cout<<std::endl;
    if(determinent > 0){
        root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
        root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
        std::cout<<"Root 01: "<<root1<<std::endl;
        std::cout<<"Root 02: "<<root2;
    }
    else if(determinent == 0){
        root1 = root2 = -b/(2*a);
        std::cout<<"Root 01 = Root 02: "<<root1;
    }
    else if(determinent < 0){
        root1 = (-b/(2*a)) + sqrt(-determinent)/2*a;
        root2 = (-b/(2*a)) - sqrt(-determinent)/2*a;
        std::cout<<"Root 01: "<<root1<<std::endl;
        std::cout<<"Root 02: "<<root2;
    }

    return 0;
}
