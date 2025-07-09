#include<stdio.h>
#include<math.h>

void main()
{
    float number;
    scanf("%f", &number);
    int number1 = (int)number;
    printf("%d is the number that we get after truncation \n", number1);
    printf("%d is the number at the right most digit\n", number1%10);
    printf("%d is the number at the two right most digit", number1%100);
}