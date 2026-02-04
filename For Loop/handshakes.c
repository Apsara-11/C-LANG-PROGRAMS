#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,handshake;
    scanf("%d",&n);
    if(n<=0)
        printf("Invalid input");
    for(int i=1;i<=1;i++)
    {
        handshake =(n*(n-1))/2;
    }
    printf("Total handshakes = %d",handshake);
    return 0;
}