#include<stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node n;

    printf("Size of data : %zu\n",sizeof(n.data));
    printf("Size of ptr next : %zu\n",sizeof(n.next));
    printf("Size of Structure : %zu\n",sizeof(struct Node));

    return 0;
}