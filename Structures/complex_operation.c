#include<stdio.h>

typedef struct
{
    float real;
    float img;
}Complex;

Complex add(Complex n1,Complex n2)
{
    Complex result;
    result.real = n1.real + n2.real;
    result.img = n1.img + n1.img;
    return result;
}

Complex mul(Complex n1,Complex n2)
{
    Complex result;
    result.real = (n1.real*n2.real) + (n1.img*n2.img);
    result.img = (n1.real*n2.img) + (n1.img*n2.real);
    return result;
}

void displayComplex(Complex n)
{
    printf("%.2f + %.2fi",n.real,n.img);
}

int main()
{
    Complex num1,num2,sum,product;
    printf("ENTER THE NUMBER 1 : ");
    scanf("%f %f",&num1.real,&num1.img);
    
    printf("ENTER THE NUMBER 2 : ");
    scanf("%f %f",&num2.real,&num2.img);
    
    sum=add(num1,num2);
    product=mul(num1,num2);
    
    printf("\nSum of the Complex Number : ");
    displayComplex(sum);
    
    printf("\nProduct of the Complex Number : ");
    displayComplex(product);
    
    return 0;
}
