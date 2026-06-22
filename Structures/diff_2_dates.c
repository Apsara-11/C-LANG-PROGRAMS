#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int days(int month,int year)
{
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
        case 4: case 6: case 9: case 11: 
        return 31;
        case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                return 29;
            } else {
                return 28;
            }
        default:
            return -1;
    }
}

int datedifference(struct Date d1,struct Date d2)
{
    int days1 = d1.day + (d1.month-1)*days(d1.month,d1.year) + d1.year*365;
    int days2 = d2.day + (d2.month-1)*days(d2.month,d2.year) + d2.year*365;
    
    return days2-days1;
}

int main()
{
    struct Date date1,date2;
    
    printf("Enter the Date1 : ");
    scanf("%d %d %d",&date1.day,&date1.month,&date1.year);
    
    printf("Enter the Date2 : ");
    scanf("%d %d %d",&date2.day,&date2.month,&date2.year);
    
    int difference = datedifference(date1,date2);
    printf("Difference in days : %d",difference);
    
    return 0;
}
