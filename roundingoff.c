#include<stdio.h>

int roundoff(float number);

void main()
{
    float number;
    printf("enter the number");
    scanf("%f",&number);
    roundoff(number);
}

int roundoff(float number){
    int temp=(int)number;
    if(0<number)
    {
        float average = temp + 0.5;
        if(number<=average)
            printf("%d",(int)number);
        else
            printf("%d",(int)number+1);
    }
    else
    {
        float average = temp - 0.5;
        if(number<=average)
            printf("%d",(int)number-1);
        else
            printf("%d",(int)number);
    }
}