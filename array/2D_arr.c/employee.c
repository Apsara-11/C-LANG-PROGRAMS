#include <stdio.h>

int main()
{
    int n;//to store total employees

    const int DAYS = 7;

    printf("Enter the number of employees: ");

    if(scanf("%d",&n) != 1 || n <=0)
    {
        printf("Invalid number of employees. Exiting the program\n");
        return 1;
    }

    //2D Array Declaration and Initialization
    int attendance[n][DAYS];

    //Track the highest attendace total found(initialze -1 )
    int highest_attendance=-1;
    int best_emp=0;


    printf("\n---- Enter Attendance for 7 days (1 for Present, 0 for Absent) ---\n");

    for(int i=0;i<n;i++)
    {
        printf("\nEmployee %d:\n",i+1);
        for(int j=0;j<DAYS;j++)
        {
            while(1)
            {
                printf(" Day %d: ",j+1);

                if(scanf("%d",&attendance[i][j]) == 1)
                {
                    if(attendance[i][j] == 0 || attendance[i][j] ==1)
                    {
                        break; //SUCCESS. Break the while(1) to move to the next day
                    }
                    else
                    {
                        printf(" [Invalid Number!] Please enter 0 or 1 only\n");
                    }
                }
                //Handle character and special symbols
                else
                {
                    printf(" [Character Detected!] Please enter the numbers (0/1) only\n");
                   
                    //getchar() is a function that reads one character at a time out of input
                    //stream. getchar() is defined in stdio.h
                    while(getchar() != '\n');
                }
            }
        }
    }

    //Report Generation & Highest Attendance Calculation
    printf("\n============================================================\n");
    printf("                           ATTENDACE REPORT                   \n");
    printf("\n============================================================\n");

    //print table column headers formatted with tabes and pipes |
    printf("Emp ID\t| ");
    for(int j=0;j<DAYS;j++)
    {
        printf("Day %d ",j+1);
    }

    printf("| Total Present\n");
    printf("==============================================================\n");
    for(int i=0;i<n;i++)
    {
        int current_emp_total=0;

        printf("Emd %d\t| ",i+1);


        for(int j=0;j<DAYS;j++)
        {
            printf("   %d   ",attendance[i][j]);//print individual day record
            current_emp_total+=attendance[i][j];
        }

        printf("| %d\n",current_emp_total);

        if(current_emp_total > highest_attendance)
        {
            highest_attendance=current_emp_total;
            best_emp=i+1;
        }
    }

    printf("===============================================================\n");
   
    //Display final calculation result
    printf("\n Employee with highest attendance: Employee %d (%d/7 days present)\n",best_emp,highest_attendance);

    return 0;
}