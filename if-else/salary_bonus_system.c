#include <stdio.h>
int main() {
    float salary, bonus;
    scanf("%f",&salary);

    if(salary > 50000)
        bonus = salary * 0.10;
    else if(salary >= 30000)
        bonus = salary * 0.05;
    else
        bonus = 0;

    printf("Bonus = %.2f",bonus);
    return 0;
}
