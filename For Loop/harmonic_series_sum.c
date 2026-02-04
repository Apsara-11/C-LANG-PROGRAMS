#include <stdio.h>

int main()
{
    int n;
    float sum=0;
    scanf("%d",&n);
    if(n<=0)
        printf("Invalid input");
    else
    {

    for(int i=1;i<=n;i++)
    {
       sum += 1.00/i;
    }
    printf("%.2f",sum);
    }
    return 0;
}