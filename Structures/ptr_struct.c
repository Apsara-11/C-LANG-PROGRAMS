#include<stdio.h>

struct ElectricityBill
{
    int consume_no;
    float units;
};

void calculateebill(struct ElectricityBill *e);

int main()
{
    struct ElectricityBill e;

    printf("Enter the details : \n");
    printf("Enter Consumer Number : ");
    scanf("%d",&e.consume_no);
    printf("Enter Units : ");
    scanf("%f",&e.units);

    calculateebill(&e);
    
    return 0;
}

void calculateebill(struct ElectricityBill *e)
{
    float amt = e->units * 8.5;

    printf("-------E-Bill Details-------\n");
    printf("Consumer Number : %d\n",e->consume_no);
    printf("Units : %.2f\n",e->units);
    printf("Total Amount : %.2f\n",amt);

}