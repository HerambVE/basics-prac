#include<stdio.h>

void main()
{
    int number;
    printf("Enter the number you want :\t");
    scanf("%d", &number);
    if(number%2==0)
    printf("your number is even");
    if(number%2!=0)
    printf("your number is odd");
}