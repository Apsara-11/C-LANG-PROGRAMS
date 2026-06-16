#include<stdio.h>

struct Order
{
    int id;
    float amt;
};

void calculate_gst(struct Order ord);

int main()
{
    struct Order ord;

    printf("Enter the Order details :\n");
    printf("\nEnter the Order ID : ");
    scanf("%d",&ord.id);

    printf("Enter the  Amount : ");
    scanf("%f",&ord.amt);

    calculate_gst(ord);

    return 0;
}

void calculate_gst(struct Order ord)
{
    float gst = ord.amt * 0.18;
    float salary = ord.amt + gst;

    printf("\nOrder details : ");
    printf("\nOrder ID : %d\n",ord.id);
    printf("Order amount : %.2f\n",ord.amt);
    printf("GST amount : %.2f\n",gst);
    printf("Total Amount : %.2f",salary);

}