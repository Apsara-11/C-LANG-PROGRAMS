#include<stdio.h>

typedef struct{
    char title[50];
    char author[50];
    int price;
}Book;

int main()
{
    Book book1,book2,book3,expensive,cheap;
    
    printf("Details of book1\n");
    printf("Title :");
    fgets(book1.title,sizeof(book1.title),stdin);
    printf("Author :");
    fgets(book1.author,sizeof(book1.author),stdin);
    printf("Price :");
    scanf("%d",&book1.price);
    getchar();
    
    printf("\nDetails of book2\n");
    printf("Title :");
    fgets(book2.title,sizeof(book2.title),stdin);
    printf("Author :");
    fgets(book2.author,sizeof(book2.author),stdin);
    printf("Price :");
    scanf("%d",&book2.price);
    getchar();
    
    
    printf("\nDetails of book3\n");
    printf("Title :");
    fgets(book3.title,sizeof(book3.title),stdin);
    printf("Author :");
    fgets(book3.author,sizeof(book3.author),stdin);
    printf("Price :");
    scanf("%d",&book3.price);
    getchar();
    
    if(book1.price>=book2.price && book1.price>=book3.price){
        expensive=book1;
    }
    else if(book2.price>=book1.price && book2.price>=book3.price){
        expensive=book2;
    }
    else{
        expensive=book3;
    }
    
    if(book1.price<=book2.price && book1.price<=book3.price){
        cheap=book1;
    }
    else if(book2.price<=book1.price && book2.price<=book3.price){
        cheap=book2;
    }
    else{
        cheap=book3;
    }
    
    printf("\n");
    
    printf("Most Expensive book:\n");
    printf("Title : %s\n",expensive.title);
    printf("Author : %s\n",expensive.author);
    printf("Price : %d\n",expensive.price);
    printf("\n");
    
    printf("Least Expensive book:\n");
    printf("Title : %s\n",cheap.title);
    printf("Author : %s\n",cheap.author);
    printf("Price : %d\n",cheap.price);
    
    return 0;	
}
