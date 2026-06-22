#include <stdio.h>

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

    struct Node *temp=&n1;
    printf("Traversing the linked list...\n");
    while(temp!=NULL)
    {
        printf("Data : %d | Node Address : %p | New Node Address : %p\n",temp->data,temp,temp->next);

        printf("\n");
        temp=temp->next;
    }
    return 0;
}