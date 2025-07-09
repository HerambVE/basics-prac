#include<stdio.h>

void main()
{
    int trace = 1;
    for(int i=0 ; trace<=91 ; i++)
    {
        for(int j=0 ; j<i ; j++)
        {
            printf("%3d",trace);
            trace++;
        }
        printf("\n");
    }
}