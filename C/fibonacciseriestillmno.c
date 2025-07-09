#include<stdio.h>

void main()
{
    int upperindex, currentind=2 , printindex = 0;
    printf("Enter the number of numbers you want in fibonacci : ");
    scanf("%d",&upperindex);
    int value[upperindex];
    value[0]=1;
    value[1]=1;
    do
    {
        value[currentind]=value[currentind-1] + value[currentind-2];
        printf("%4d",value[printindex]);
        printindex++;
        if(printindex<upperindex-1)
        currentind++;
    }
    while(printindex<upperindex);
}