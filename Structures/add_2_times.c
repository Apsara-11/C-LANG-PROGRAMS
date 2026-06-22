#include<stdio.h>

typedef struct{
    int hours;
    int minutes;
    int seconds;
}Time;

int main()
{
    Time time1,time2,result;
    
    printf("Enter first time: ");
    scanf("%d %d %d",&time1.hours,&time1.minutes,&time1.seconds);
    
    printf("Enter second time: ");
    scanf("%d %d %d",&time2.hours,&time2.minutes,&time2.seconds);
    
    result.seconds = time1.seconds+time2.seconds;
    result.minutes = time1.minutes+time2.minutes+result.seconds/60;
    result.hours = time1.hours+time2.hours+result.minutes/60;
    
    result.minutes=result.minutes%60;
    result.seconds=result.seconds%60;
    
    printf("Total time  is %02d:%02d:%02d\n",result.hours,result.minutes,result.seconds);
    
    return 0;
}
