#include<stdio.h>
int main()
{
    int a[100],i,n,fir,sec,temp=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    fir=a[0];
    sec=a[1];

    if(sec>fir){
        temp=fir;
        fir=sec;
        sec=temp;
    }

    for(i=0;i<n;i++){
        if(a[i]>fir){
            sec=fir;
            fir=a[i];
        }
        else if(a[i]>sec && a[i]!=fir){
            sec=a[i];
        }
    }

    printf("First = %d and Second = %d",fir,sec);
}