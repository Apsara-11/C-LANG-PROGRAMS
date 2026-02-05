#include <stdio.h>
int main()
{
    int m,n,sum,flag=0;
    scanf("%d %d",&m,&n);
    for(int i = m;i<=n;i++)
    {
        if(i<=1)
           continue;
        sum=0;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
               sum+=j;
        }
            if(sum==i)
            {
                if(!flag)
                {
                    printf("Perfect number : ");
                    flag=1;
                }
                printf("%d ",i);
            }
    }
    if(!flag)
    {
        printf("Perfect number : None");
    }
    return 0;
}