#include<stdio.h>

void main()
{
    int i;
    int numbers[50];
    for(i= 1 ; i<=50 ; i++)
    {
        scanf("%d", &numbers[i]);
        if(numbers[i]==0)
        {
            break;
        }
    }
    i=i-1;
    printf("Number of integers recorded : %d \n", i);
    for(int k= 1 ; k<=i ; k++)
    {
        printf("%5d", numbers[k]);
    }
}
/*   So from this i can concur that both 'Space' & 'Enter' cause an increment in scanf function
and if i have kept a number as exit in the arguments of FOR then the number will be counted as well     */