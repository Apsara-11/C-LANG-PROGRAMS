#include<stdio.h>

enum Gender {MALE,FEMALE};

struct Person
{
    char name[30];
    enum Gender gender;
};

int main()
{
    struct Person p = {"Sanjay",MALE};

    printf("Name = %s\n",p.name);
    printf("Gender = %d\n",p.gender);
    printf("Gender = %s\n",(p.gender==0L) ? "MALE" : "FEMALE");

    return 0;
}