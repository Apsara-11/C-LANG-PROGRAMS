#include<stdio.h>

struct Book
{
    int tic_num;
    char name[50];
    char s[50];
    char d[50];
    float fare;
};

void ticket(struct Book tick);

int main()
{
    struct Book t;

    printf("Enter Booking Details : \n");
    printf("Enter ticket number : ");
    scanf("%d",&t.tic_num);
    printf("Enter Passenger Name : ");
    scanf("%s",t.name);
    printf("Enter source : ");
    scanf("%s",t.s);
    printf("Enter destination : ");
    scanf("%s",t.d);
    printf("Enter fare : ");
    scanf("%f",&t.fare);

    ticket(t);

    return 0;
}

void ticket(struct Book tick)
{
    printf("--Railway Ticket-------------- \n");
    printf("Ticket number : %d\n",tick.tic_num);
    
    printf("Passenger Name : %s\n",tick.name);
   
    printf("Source : %s\n",tick.s);
    
    printf("Destination : %s\n",tick.d);
    
    printf("Fare : %.2f\n",tick.fare);
    
}