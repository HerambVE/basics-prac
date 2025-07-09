#include<stdio.h>
#include<stdlib.h>

void main()
{
    long number , sum = 0 , digits ;
    scanf( "%ld" , &number );
    while( number !=0 )
    {
        digits = number % 10 ;
        sum = sum + digits ;
        number = number / 10 ;
    }
    printf( "%ld" , sum );
}
//bhai gpt chutiya hoo gaya hai uspe loda bharosa na karna