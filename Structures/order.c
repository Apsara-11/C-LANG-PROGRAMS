#include<stdio.h>

struct Product
{
    int foodid;
    float price;
    int quantity;
};

void calculatetotal(struct Product products[],int n);

int main()
{
    int n;
    printf("Enter the number of Products : ");
    scanf("%d",&n);

    struct Product products[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the Food ID : ");
        scanf("%d",&products[i].foodid);
        printf("Enter Price : ");
        scanf("%f",&products[i].price);
        printf("Enter Quantity : ");
        scanf("%d",&products[i].quantity);
    }
    calculatetotal(products,n);

    return 0;
}

void calculatetotal(struct Product products[],int n)
{
    float total;

    printf("\n");
    printf("Swiggy Order Details : \n");

    for(int i=0;i<n;i++)
    {
        total= products[i].quantity * products[i].price;
        printf("Food ID : %d\n",products[i].foodid);
        printf("Price : %.2f\n",products[i].price);
        printf("Quantity : %d\n",products[i].quantity);
        printf("Cost : %.2f\n",total);

        printf("\n");
    }
}