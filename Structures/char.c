#include<stdio.h>

struct withint
{
    unsigned char a : 3 ;
    unsigned int b : 32 ;
};

struct withchar
{
    unsigned char a : 8 ;
    unsigned char b : 8 ;
};

int main()
{
    printf("Size of withint : %zu bytes\n",sizeof(struct withint));
    printf("Size of withchar : %zu bytes\n",sizeof(struct withchar));

    return 0;
}