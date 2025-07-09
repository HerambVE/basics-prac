#include<stdio.h>
#include<stdlib.h>

void main()
{
    int sum=0 , number;
    for( number=0 ; number<=100 ; number++ )
    {
        if (number%6==0 && number%4!=0)
            {
                sum=sum+number;
            }
    }
    printf("%d", sum);
}