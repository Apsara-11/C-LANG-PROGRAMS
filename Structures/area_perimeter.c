#include<stdio.h>

typedef struct{
    double radius;
}Circle;

double area(Circle c){
    return 3.14*c.radius*c.radius;
}

double perimeter(Circle c){
    return 2*3.14*c.radius;
}

int main()
{
    Circle circle1,circle2;
    
    printf("Enter radius of circle 1: ");
    scanf("%lf",&circle1.radius);
    
    printf("Enter radius of circle 2: ");
    scanf("%lf",&circle2.radius);
    
    printf("\nCircle 1 :\n");
    printf("Area : %.2lf\n",area(circle1));
    printf("Perimeter : %.2lf",perimeter(circle1));
    
    printf("\nCircle 2 :\n");
    printf("Area : %.2lf\n",area(circle2));
    printf("Perimeter : %.2lf",perimeter(circle2));
    
    return 0;
}

