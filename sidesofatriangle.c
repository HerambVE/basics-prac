#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a,b,c;
    printf("enter the three values of sides\n");
    scanf("%d %d %d",&a ,&b ,&c);
    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
        {
            printf("these sides form a trikone");
        }
    else
        printf("these sides are random fucking values");
}