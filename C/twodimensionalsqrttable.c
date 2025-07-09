#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float root(int i, float number);
void margin();

void main()
{
    printf("     ");
    for(int j =0; j<=9 ; j++)
    {
        float number=(float)j/10;
        printf(" %.2f     ",number);
    }
    printf("\n");
    printf("     ");
    margin();
    printf("\n");
    for(int i =0; i<=9 ; i++)
    {   
        printf("%d  ||",i);
        for(int j =0; j<=9 ; j++)
        {   
            float number=(float)j/10;
            printf(" %f ",root(i,number));
        }
        printf("\n");
    }
}

float root(int i, float number)
{
    float sqrt, creatednumber;
    creatednumber=(float)i+number;
    sqrt=sqrtf(creatednumber);
    return sqrt;
}

void margin()
{
    for(int j =0; j<=100 ; j++)
    {
        printf("=");
    }
}