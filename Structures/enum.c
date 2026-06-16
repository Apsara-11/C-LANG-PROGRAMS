#include<stdio.h>

enum Day
{
    Sunday=11,
    Monday,
    Tuesday=45,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{
    printf("%d ",Sunday);
    printf("%d ",Monday);
    printf("%d ",Tuesday);
    printf("%d ",Wednesday);
    printf("%d ",Thursday);
    printf("%d ",Friday);
    printf("%d ",Saturday);
    
    return 0;
}