#include <stdio.h>
int main()
{
    int n,times;
    scanf("%d %d",&n,&times);
    for(int i=1;i<=times;i++)
    {
        printf("%d ",n);
        n*=2;
    }
    return 0;
}