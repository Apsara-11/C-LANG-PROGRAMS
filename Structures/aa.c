#include<stdio.h>

struct Date
{
    int day : 5 ;
    int  month : 4 ;
    int year : 14 ;
};

int main()
{
    struct Date d={15,6,2026};

    printf("Printing today's Date: ");
    printf("\nDay : %02d\n",d.day);
    printf("Month : %02d\n",d.month);
    printf("Year : %02d\n",d.year);

    printf("Size : %zu bytes\n",sizeof(struct Date));

    return 0;
}