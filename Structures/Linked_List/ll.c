#include<stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node n1,n2,n3;

    n1.data=10;
    n1.next=&n2;
    n2.data=20;
    n2.next=&n3;
    n3.data=30;
    n3.next=NULL;

    printf("Node 1:\n");
    printf("Data : %d | Address : %p | Next address : %p\n",n1.data,&n1,n1.next);
    printf("Node 2:\n");
    printf("Data : %d | Address : %p | Next address : %p\n",n2.data,&n2,n2.next);
    printf("Node 3:\n");
    printf("Data : %d | Address : %p | Next address : %p\n",n3.data,&n3,n3.next);

    return 0;
    
}
