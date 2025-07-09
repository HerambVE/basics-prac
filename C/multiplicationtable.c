#include <stdio.h>
#include <math.h>
typedef int num;

void main()
{
    num x;
    int times,y=1;
    printf("what number to print table for: \t ");
    scanf("%d", &x);
    printf("till what times: \t");
    scanf("%d", &times);

    while(y<=times)
    {
        printf("\t %d X %d = %d \n", x, y, x*y);
        y++;
    }
}