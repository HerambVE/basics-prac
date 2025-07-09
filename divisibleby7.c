#include<stdio.h>
#include<math.h>

void main()
{
    int trace=0, sum=0;
    for (int limit=101 ; limit<200 ; limit++)
    {
        if (limit %7 ==0)
        {
            trace++;
            sum = sum + limit;
        }
    }
    printf("%d %d ", trace, sum);
}