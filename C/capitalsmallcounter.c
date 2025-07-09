#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void main()
{
    int upper=0, lower=0;
    char sentence[11]="AbCdEfGhIj";
    for(int i ; i < strlen(sentence) ; i++)
    {
        if(isupper(sentence[i])!=0)
            upper++;
        else if(islower(sentence[i])!=0)
            lower++;
    }
    printf("%d upper case\n", upper);
    printf("%d lower case\n", lower);
}