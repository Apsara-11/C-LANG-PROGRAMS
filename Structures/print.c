#include<stdio.h>

struct Person{
    char name[50];
    int age;
    double salary;
};

int main(){
    struct Person p1={"Bala Bavadharani",21,10000.2345};
    struct Person p2={"Akshaya",22,20000.6789};
    
    printf("Person 1 Details:\n");
    printf("Name   : %s\n",p1.name);
    printf("Age    : %d\n",p1.age);
    printf("Salary : %.2lf\n",p1.salary);
    
    printf("\n");
    
    printf("Person 2 Details:\n");
    printf("Name   : %s\n",p2.name);
    printf("Age    : %d\n",p2.age);
    printf("Salary : %.2lf\n",p2.salary);
    
    return 0;
}

