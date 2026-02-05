#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    if(n<=1)
        printf("%d is not a prime number\n",n);
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
                count = 1;
        }
        if(count==0)
            printf("%d is a prime number.\n",n);
        else
            printf("%d is not a prime number.\n",n);
    }
    return 0;
}