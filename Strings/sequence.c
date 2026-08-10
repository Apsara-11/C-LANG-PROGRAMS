#include<stdio.h>

int main()
{
    int alp,num,spl,i;
    char str[100];
    alp=num=spl=i=0;

    printf("Enter a String : ");
    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            num++;
        }
        else
        {
            spl++;
        }
        i++;
    }

    printf("Total Number of Alphabets : %d\n",alp);
    printf("Total Number of Numbers : %d\n",num);
    printf("Total Number of Special Characters : %d\n",spl-1);
    
}