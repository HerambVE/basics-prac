#include<stdio.h>
#include<stdlib.h>

void main()
{
    char c[6];
    for (int i=0; i<=5; i++)
    {
        c[i]=getchar();
    }
    for (int i=0; i<=5; i++){
        printf("%c",c[i]);
    }
}