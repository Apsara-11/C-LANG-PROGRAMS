#include<stdio.h>

int main()
{
    int a[50][50],b[50][50],c[50][50],n;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the elements of the First Array");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("[%d][%d] : ",i,j);
            scanf("%d %d")
        }
    }
}