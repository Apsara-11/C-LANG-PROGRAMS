#include <stdio.h>
int main() {
    int password;

    do {
        printf("Enter Password: ");
        scanf("%d",&password);
    } while(password != 1234);

    printf("Access Granted");
    return 0;
}
