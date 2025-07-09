#include <stdio.h>
#include <math.h>
typedef int var;

void main()
{
    var a, b, c;
    printf("enter the values of a b & c \t:\n");
    scanf(" %d", &a);
    scanf(" %d", &b);
    scanf(" %d", &c);

    int x = a/(b*c);

    printf("the value of x for the given values of a b & c is : %d ", x);
}