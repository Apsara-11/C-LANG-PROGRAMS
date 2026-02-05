#include <stdio.h>
int main()
{
    int n,leap=0,nonleap=0;
    scanf("%d",&n);
    if(n%4==0 & n%100!=0 || n%400==0)
        printf("%d is a leap year\n",n);
    else
        printf("%d is a non-leap year\n",n);
    for(int i= n+ 1;i<=n + 10;i++)
    {
        if(i%4==0 & i%100!=0 || i%400==0)
            leap++;
        else
            nonleap++;
    }
    printf("\nNext Decade of leap and non-leap years:-\n");
    printf("Leap year: %d\n",leap);
    printf("Non - Leap year: %d\n",nonleap);
    return 0;
}