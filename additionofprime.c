#include<stdio.h>
#include<stdlib.h>

void main()
{
    int number, total=0, count;
    for(number=101 ; number<200 ; number++)
    {
        count=0;
        for(int j=1 ; j <= number ; j++)
        {
            if(number%j==0)
                count++;
        }
        if(count==2)
            total++; 
    }
    printf("%d", total);
}