#include<stdio.h>

typedef struct{
    double real;
    double img;
}Complex;

int main(){
    
    Complex c1={21.4534,30.22};
    Complex c2={13.94,112.2390};
    
    Complex sum;
    
    sum.real = c1.real + c2.real;
    sum.img = c1.img + c2.img;
    
    printf("Sum of the Complex number is : %.4lf + %.4lf\n",sum.real,sum.img);
    
    return 0;
}
