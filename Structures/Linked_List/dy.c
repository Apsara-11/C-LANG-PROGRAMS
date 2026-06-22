#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int n;
    struct Node *head=NULL,*temp=NULL,*newnode=NULL;

    printf("Enter the number of nodes : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        newnode=(struct Node*)malloc(sizeof(struct Node));
        if(newnode==NULL)
        {
            printf("Memory allocation failed ");
            return 1;
        }

        printf("Enter the data for node %d : ",i+1);
        scanf("%d", &newnode->data);
        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }

    //reset
    temp=head;
    while(temp!=NULL)
    {
        printf("Data : %d | Node Address : %p | Next Node Address : %p\n",temp->data,temp,temp->next);

        printf("\n");
        temp=temp->next;
    }

    temp=head;
    while(temp!=NULL)
    {
        struct Node *nextnode=temp->next;
        free(temp);
        temp=nextnode;
    }

    return 0;
}