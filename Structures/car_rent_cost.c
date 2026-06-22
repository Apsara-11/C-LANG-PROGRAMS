#include<stdio.h>

typedef struct
{
    int carID;
    char model[50];
    float ratePerDay;
}Rent;

float totalRent(Rent car,int d)
{
    return car.ratePerDay * d;
}

int main()
{
    Rent car1,car2,car3;
    int days;
    
    printf("Enter Car1 Details :\n");
    printf("Car ID : ");
    scanf("%d",&car1.carID);
    printf("Car Model : ");
    scanf("%s",car1.model);
    printf("Car Rate Per Day : ");
    scanf("%f",&car1.ratePerDay);
    
    printf("\nEnter Car2 Details :\n");
    printf("Car ID : ");
    scanf("%d",&car2.carID);
    printf("Car Model : ");
    scanf("%s",car2.model);
    printf("Car Rate Per Day : ");
    scanf("%f",&car2.ratePerDay);
    
    printf("\nEnter Car3 Details :\n");
    printf("Car ID : ");
    scanf("%d",&car3.carID);
    printf("Car Model : ");
    scanf("%s",car3.model);
    printf("Car Rate Per Day : ");
    scanf("%f",&car3.ratePerDay);
    
    printf("\nEnter the number of days to be rented : ");
    scanf("%d",&days);
    
    printf("\nTotal rent for Car 1 : %.2f\n",totalRent(car1,days));
    printf("Total rent for Car 2 : %.2f\n",totalRent(car2,days));
    printf("Total rent for Car 3 : %.2f\n",totalRent(car3,days));
    
    return 0;
}

