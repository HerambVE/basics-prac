#include<stdio.h>
#include<stdlib.h>

void main()
{
    float discount, bill=0;
    int type;
    printf("type in the price and the type of cloth bought :\n1=>mill\n2=>hand\n");
    scanf("%f",&bill);
    scanf("%d",&type);
    if(bill<101)
    {
        switch (type)
        {
        case 1:
            discount= 0;
            printf("the total remaining bill is : %f",bill-bill*(discount/100));
            break;
        case 2:
            discount= 5;
            printf("the total remaining bill is : %f",bill-bill*(discount/100));
            break;
       }
    }
    else if(101<=bill<201)
    {
        switch (type)
        {
        case 1:
            discount= 5;
            printf("the total remaining bill is : %f",bill-bill*(discount/100));
            break;
        case 2:
            discount= 7.5;
            printf("the total remaining bill is : %f",bill-bill*(discount/100));
            break;
       }
    }
    else if(201<=bill<301)
    {
        switch (type)
        {
        case 1:
            discount= 7.5;
            printf("the total remaining bill is : %f",bill-bill*(discount/100));
            break;
        case 2:
            discount= 10;
            printf("the total remaining bill is : %f",bill-bill*(discount/100));
            break;
       }
    }
    else
    {
        switch (type)
        {
        case 1:
            discount= 10;
            printf("the total remaining bill is : %f",bill-bill*(discount/100));
            break;
        case 2:
            discount= 15;
            printf("the total remaining bill is : %f",bill-bill*(discount/100));            
            break;
       }
    }
}