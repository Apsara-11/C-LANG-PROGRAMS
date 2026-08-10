#include <stdio.h>
#include <stdlib.h> //malloc() and free()

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int n, choice, a;

    printf("Enter the number of nodes: ");
    scanf("%d",&n);//5

    struct Node *head=NULL, *temp=NULL,*newnode=NULL,*newnode1=NULL,*newnode2=NULL,*newnode3=NULL;

    for(int i=0;i<n;i++)
    {
        newnode=(struct Node*)malloc(sizeof(struct Node));

        if(newnode==NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter the data to be inserted for the node %d: ",i+1);
        scanf("%d",&newnode->data);//10

        newnode->next=NULL;

        if(head==NULL)
        {  
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }

    while(1)
    {
        printf("\n======= MENU =========\n");
        printf("1.Insert a new node at the beginning\n");
        printf("2.Insert a new node anywhere\n");
        printf("3.Insert a new node at the end\n");
        printf("4.Traverse the Linked List\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1://new node beginning
            {
                newnode1=(struct Node*)malloc(sizeof(struct Node));

                if(newnode1==NULL)
                {
                    printf("Memory allocation failed\n");
                    return 1;
                }

                printf("Enter the data to be inserted in new node: ");
                scanf("%d",&newnode1->data);//111

                newnode1->next=NULL;

                newnode1->next=head;
                head=newnode1;

                printf("New node inserted successfully\n");

                break;
            }

            case 2://new node anywhere
            {
                newnode2=(struct Node*)malloc(sizeof(struct Node));

                if(newnode2==NULL)
                {
                    printf("Memory allocation failed\n");
                    return 1;
                }

                printf("Enter the position to be inserted : ");
                scanf("%d",&a);

                printf("Enter the data to be inserted in new node: ");
                scanf("%d",&newnode2->data);

                newnode2->next=NULL;

                if(a==1)
                {
                    newnode2->next=head;
                    head=newnode2;
                }
                else
                {
                    temp = head;

                    for(int i = 1; i < a-1 && temp != NULL; i++)
                    {
                        temp = temp->next;
                    }
                    
                    newnode2->next = temp->next;
                    temp->next = newnode2;

                    printf("Node inserted successfully\n");
                    
                }
                break;
            }

            case 3://new node at end
            {
                newnode3=(struct Node*)malloc(sizeof(struct Node));

                if(newnode3==NULL)
                {
                    printf("Memory allocation failed\n");
                    return 1;
                }

                printf("Enter the data to be inserted in new node at end : ");
                scanf("%d",&newnode3->data);

                newnode3->next=NULL;
                newnode->next=newnode3;
                newnode=newnode3;
                printf("Node inserted successfully\n");
                break;
            }

            case 4://traversing
            {
                temp=head;
                if(head==NULL)
                {
                    printf("List is empty");
                }
                else
                {
                    while(temp!=NULL)
                    {
                        printf("Data : %d | Node Address : %p | New Node Address : %p\n",temp->data,temp,temp->next);
                        printf("\n");
                        temp=temp->next;
                    }
                }
                break;
            }
            case 5://exit
            {
                temp=head;

                while(temp!=NULL)
                {
                    struct Node *nextnode = temp->next;
                    free(temp);
                    temp=nextnode;
                }

                printf("Exiting...\n");
                exit(0);
            }

            default:printf("Invalid choice\n");
        }
    }

    return 0;
}
