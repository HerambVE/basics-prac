#include<stdio.h>

void main(){
    char asterciks = '*';
    int limit;
    scanf("%d", &limit);
    for(int i =1; i<=limit ; i++)
    {
        for(int j =1; j<=i ; j++)
        {
            printf("%c", asterciks);
        }
        printf("\n");
    }
}