#include<stdio.h>

void main()
{
    int times=0;
    float amount = 1;
    scanf("%d", &times);
    for(int  i=2; i<=times ; i++ ){
        amount = amount + (float)1/i;
    }
    printf("%f ", amount);
}