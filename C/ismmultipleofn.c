#include<stdio.h>
#include<math.h>

int ismultiple(int m, int n);

void main()
{
    int m, n, x;
    printf("Enter the values of m and n\n");
    printf("M:");
    scanf("%d", &m);
    printf("N:");
    scanf("%d", &n);
    if(x = ismultiple(m,n)==1)
        printf("M is a multiple of N");
    else
        printf("M is not a multiple of N");
        
}

int ismultiple(int m, int n)
{
    int whether;
    whether= (m%n)==0?1:0;
    return whether;
}