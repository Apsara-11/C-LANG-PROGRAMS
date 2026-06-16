#include<stdio.h>

struct Product
{
    int productid;
    char productname[50];
    float price;
    int quantity;
};

void calculateinvvalue(struct Product products[],int n);

int main()
{
    int n;
    printf("Enter the number of Products : ");
    scanf("%d",&n);

    struct Product products[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the Product ID : ");
        scanf("%d",&products[i].productid);
        printf("Enter the Product Name : ");
        scanf("%s",products[i].productname);
        printf("Enter the Product Price : ");
        scanf("%f",&products[i].price);
        printf("Enter the Product Quantity : ");
        scanf("%d",&products[i].quantity);
    }
    calculateinvvalue(products,n);

    return 0;
}

void calculateinvvalue(struct Product products[],int n)
{
    float inventoryvalue;

    printf("\n");
    printf("------MOBILE INVENTORY\n");

    for(int i=0;i<n;i++)
    {
        inventoryvalue= products[i].quantity * products[i].price;
        printf("Product ID : %d\n",products[i].productid);
        printf("Product Name: %s\n",products[i].productname);
        printf("Product Price : %.2f\n",products[i].price);
        printf("Product Quantity : %d\n",products[i].quantity);
        printf("Inventory Value : %.2f\n",inventoryvalue);

        printf("\n");
    }
}