#include<stdio.h>

int interest(int amount);
int print(int amount, int interest, int tenure, int year);


void main()
{
    int tenure = 0, amount=5000;
    printf("What is the tenure :");
    scanf("%d", &tenure);
    printf("Year \t Interest Generated \t Amount End Of Year \n");
    for(int year=1; year <= tenure; year++ )
    {
        int peryearinterest[tenure];
        peryearinterest[year]= interest(amount);
        amount = amount + peryearinterest[year];
        print(amount , tenure , year , peryearinterest[year]);

    }
}

int interest (int amount)
{
    int accum = amount * 10/100;
    return accum;
}

int print(int amount , int tenure , int year , int peryearinterest)
{
    printf("%d \t %d \t\t\t %d \n",year, peryearinterest, amount);
    return 0;
}