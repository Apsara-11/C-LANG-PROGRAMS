#include<stdio.h>
#include<stdlib.h>

struct Book
{
    char title[50];
    char author[50];
    int page;
    float price;
};

int main()
{
    struct Book b[3];

    int max;

    for(int i=0;i<3;i++)
    {
        printf("\nEnter Details for Book%d\n",i+1);
        printf("Title : ");
        scanf("%s",b[i].title);
        printf("Author : ");
        scanf("%s",b[i].author);
        printf("Pages : ");
        scanf("%d",&b[i].page);
        printf("Price : ");
        scanf("%f",&b[i].price);
    }

    for(int i=1;i<3;i++)
    {
        if(b[i].price>b[max].price)
        {
            max=i;
        }
    }

    printf("\nBook with Highest Price is : \n");
    printf("Title : %s\n",b[max].title);
    printf("Author : %s\n",b[max].author);
    printf("Pages : %d\n",b[max].page);
    printf("Price : %.2f\n",b[max].price);

    return 0;
   
}