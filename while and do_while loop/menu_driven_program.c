#include <stdio.h>
int main() {
    int choice;

    do {
        printf("\n1.Add  2.Exit\n");
        scanf("%d",&choice);

        if(choice == 1)
            printf("Addition Selected");

    } while(choice != 2);

    return 0;
}
