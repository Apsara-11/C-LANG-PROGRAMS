#include <stdio.h>
int main() {
    int choice,a,b;
    scanf("%d %d %d",&choice,&a,&b);

    if(choice==1)
        printf("%d",a+b);
    else if(choice==2)
        printf("%d",a-b);
    else if(choice==3)
        printf("%d",a*b);
    else if(choice==4)
        printf("%d",a/b);
    else
        printf("Invalid choice");

    return 0;
}
