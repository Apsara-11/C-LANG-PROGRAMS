#include<stdio.h>

struct Employee
{
    int empid;
    float salary;
};

void calculatebonus(int empid, float salary, float bonuspercent);

int main()
{
    struct Employee e;

    float bonuspercent;

    printf("Enter employee details: \n");
    printf("Enter Emp. ID : ");
    scanf("%d",&e.empid);

    printf("Enter salary : ");
    scanf("%f",&e.salary);

    printf("Enter bonus percentage : ");
    scanf("%f",&bonuspercent);

    calculatebonus(e.empid,e.salary,bonuspercent);

    return 0;
}

void calculatebonus(int empid, float salary, float bonuspercent)
{
    float bonus = salary * bonuspercent / 100;
    float total_salary = salary + bonus;

    printf("\nEmployee Details : \n");
    printf("Employee ID : %d\n",empid);
    printf("Employee Salary : %.2f\n",salary);
    printf("Bonus Percentage : %.2f%%\n",bonuspercent);
    printf("Bonus Amount : %.2f\n",bonus);
    printf("Total Salary : %.2f",total_salary);

}