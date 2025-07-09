#include<stdio.h>
#include<math.h>

void main()
{
    int number, size=0;
    int digits[50];
    printf("enter the numbers: ");
    scanf("%d",&number);
    for( int i=0 ;  ; i++ )
    {
        size++;
        digits[i]=number%10;
        if(number/10==0)
            break;
        number=number/10;
    }
    for( int i=0 ; i<size ; i++ )
    {
        printf("%d", digits[i]);
    }
}