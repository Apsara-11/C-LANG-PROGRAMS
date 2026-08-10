#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE (100*1024*1024)

int main()
{
    printf("Memory before malloc\n");
    system("free -h");

    char *ptr=malloc(SIZE);

    if(ptr==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    memset(ptr,'X',SIZE);
    strcpy(ptr,"Hello");

    printf("String from Heap : %s\n",ptr);

    printf("Memory after malloc\n");
    system("free -h");

    free(ptr);
    ptr=NULL;

    printf("Memory after free\n");
    system("free -h");

    return 0;
}