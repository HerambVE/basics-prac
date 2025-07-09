#include<stdio.h>
#include<stdlib.h>

void even();
void odd();
void main()
{
    int number;
    printf("enter number :");
    scanf("%d", &number);
    number=number%2;
    number==1?odd():even();
}

void even()
{
    printf("the number is even");
}

void odd()
{
    printf("the number is odd");
}