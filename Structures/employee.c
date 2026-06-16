#include<stdio.h>

enum Department
{
    HR,
    SALES,
    DEVEOPMENT,
    TESTING
};

struct Employee
{
    int Employee_ID;
    char Employee_Name[50];
    float Salary;
    enum Department department;
};

int main()
{
    struct Employee emp;
    int input;

    printf("\nEnter Employee ID: ");
    scanf("%d",&emp.Employee_ID);
    printf("Enter Employee Name: ");
    scanf("%s",emp.Employee_Name);
    printf("Enter Salary: ");
    scanf("%f",&emp.Salary);
    printf("Enter Department (0-HR, 1-SALES, 2-DEVELOPMENT, 3-TESTING): ");
    scanf("%d",&input);

    emp.department=(enum Department)input;

    printf("\nEmployee ID : %d\n",emp.Employee_ID);
    printf("Employee Name : %s\n",emp.Employee_Name);
    printf("Employee Salary : %.2f\n",emp.Salary);

    switch (emp.department)
    {
        case 0:
            printf("Handles recruitment and employee welfare.\n");
            break;
        case 1:
            printf("Responsible for business growth.\n");
            break;
        case 2:
            printf("Develops software products.\n");
            break;  
        case 3:
            printf("Ensures software quality.\n");
            break; 
        default :
            printf("Invalid department");
    }
    return 0;

}