#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=31;i++)
    {
        int p=1;
        for(int j=1;j<=i;j++)
            p*=2;
        int m=p - 1;
        int perfect = (p/2)*m;
        if(perfect==n)
        {
            printf("YES %d",m);
            return 0;
        }
        if(perfect>n)
            break;
    }
    printf("NO");
    return 0;
}