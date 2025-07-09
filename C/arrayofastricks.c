#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int rows=1, column=1, number;
    char x = '*';
    printf("enter the number of rows you require : \t");
    scanf("%d", &number);
    
    while(rows<=number)
    {
        column=1;
        while(column<=rows)
        {
        printf("%c", x);
        column++;
        }
    printf("\n");
    rows++;
    }
}
