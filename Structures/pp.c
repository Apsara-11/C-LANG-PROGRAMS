#include<stdio.h>

enum prep
{
    order,
    prepare,
    packed,
    delivery
};

int main()
{
    int input;

    enum prep p;
    printf("Enter the State(0=Order, 1=Prepare, 2=Packed, 3=Delivered) : ");
    scanf("%d",&input);

    p = (enum prep)input;

    switch(p)
    {
        case order:
            printf("Order Placed");
            break;
        case prepare:
            printf("Food is being Prepared");
            break;
        case packed:
            printf("Food i sout for delivery");
            break;
        case delivery:
            printf("Food Delivered");
            break;
        default :
            printf("Invalid Status");
    }
    return 0;

}