#include<stdio.h>
#include<stdlib.h>

void main()
{
    int number,check=0;
    printf("eNTER the number you want to find out : ");
    scanf("%d", &number);
    for(int i = 1 ; i <= number ; i++)
    {
        if(number%i==0)
        {   
            check=1;
            printf("The number is not prime");
            break;
        }
    }
    if(check==0)
    {
        printf("The number is prime");
    }
}