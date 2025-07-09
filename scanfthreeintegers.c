#include<stdio.h>

void main()
{
    int numbers[3],choice;
    for(int i=0 ; i<3 ; i++)
        scanf("%d",&numbers[i]);
    printf("enter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("%d \t",numbers[0]);
        printf("%d \t",numbers[1]);
        printf("%d \t",numbers[2]);

    case 2:
        for(int i = 0 ; i<3 ; i++)
            {printf("%d \t",numbers[i]);}
        
    case 3:
        for(int i = 0 ; i<3 ; i++)
            {printf("%d \t",numbers[i]);}
    }
}