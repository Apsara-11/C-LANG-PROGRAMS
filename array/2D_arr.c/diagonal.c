#include<stdio.h>

int main()
{
    int r,c,sum=0;
    scanf("%d %d",&r,&c);
    int a[r][c];

    if(r==c)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i==j)
                {
                    sum=sum+a[i][j];
                }
            }
        }
        printf("%d",sum);
    }
    else
    {
        printf("Enter the size correctly");
    }
}