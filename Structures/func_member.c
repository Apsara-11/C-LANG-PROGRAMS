#include<stdio.h>

struct Student
{
    int rollno;
    float marks;
};

void display(int r, float m);

int main()
{
    struct Student s;

    printf("Enter the student details : \n");
    printf("Enter the rollno: ");
    scanf("%d",&s.rollno);
    printf("Enter the marks: ");
    scanf("%f",&s.marks);

    display(s.rollno,s.marks);

    return 0;
}

void display(int r, float m)
{
    printf("Student details :\n");
    printf("Rollno : %d\n",r);
    printf("Marks : %.2f",m);
}