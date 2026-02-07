#include <stdio.h>
#include <string.h>
int main() {
    char user[20];
    int pass;

    scanf("%s %d",user,&pass);

    if(strcmp(user,"admin")==0 && pass==1234)
        printf("Login Success");
    else
        printf("Invalid Login");

    return 0;
}
