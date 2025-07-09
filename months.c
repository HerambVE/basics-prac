#include<stdio.h>
#include<math.h>

void main()
{
    int Days, Months;
    scanf("%d", &Days);
    int temp=Days;
    Months= Days/30;
    Days=Days%30;
    printf("%d will turn into %d months and %d days", temp , Months , Days);

}