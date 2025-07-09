#include<stdio.h>
#include<string.h>

int firstchange (char word[]);
int secondchange (char word[]);
int thirdchange (char word[]);


void main()
{
    char word[15];
    for(int i =0; i<=14; i++)
    {
        word[i]=getchar();
    }
    firstchange(word);
    secondchange(word);
    thirdchange(word);
}

int firstchange(char word[])
{
    for(int i = 0 ; i<= 3 ; i++ )
    {
        printf("%c",word[i]);
    }
    printf(" ");
    for(int i = 4 ; i<= 13 ; i++ )
    {
        printf("%c",word[i]);
    }
    printf("\n");
}

int secondchange (char word[]){
    for(int i = 0 ; i<= 3 ; i++ )
    {
        printf("%c",word[i]);
    }
    printf(" \n");
    for(int i = 4 ; i<= 13 ; i++ )
    {
        printf("%c",word[i]);
    }
    printf("\n");
}

int thirdchange (char word[]){
    printf("%c.%c.", word[0], word[4]);
}

