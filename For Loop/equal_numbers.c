#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d ",i);
        sum+=i;
    }
    printf("\n%d",sum);
    if(sum==n)
        printf("\n%d is an equal number",n);
    else
        printf("\n%d is not an equal number",n);

    return 0;
}