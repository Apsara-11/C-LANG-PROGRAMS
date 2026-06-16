#include<stdio.h>

enum TrafficSignal
{
    RED,
    ORANGE,
    GREEN
};

int main()
{
    int input;

    enum TrafficSignal signal;
    printf("Enter the Signal(0=RED, 1=ORANGE, 2=GREEN) : ");
    scanf("%d",&input);

    signal = (enum TrafficSignal)input;

    switch(signal)
    {
        case RED:
            printf("Stop");
            break;
        case ORANGE:
            printf("Get Ready");
            break;
        case GREEN:
            printf("Go");
            break;
        default :
            printf("Invalid Signal\n");
    }
    return 0;

}