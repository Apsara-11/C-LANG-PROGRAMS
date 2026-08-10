#include <stdio.h>

//#define MARKS 75

int main()
{    
    //    0
    #if MARKS >= 90
        printf("Grade A\n");
    //      0
    #elif MARKS >= 60
        printf("Grade B\n");
    #else
        printf("Grade C\n");
    #endif

    printf("Program Terminated\n");

    return 0;
}