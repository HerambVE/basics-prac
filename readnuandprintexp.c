#include<stdio.h>

int exp1(int x , int y);
int exp2(int x , int y);
int exp3(int x , int y);

void main()
{
    int x, y;
    printf("enter the values of x and y");
    scanf("%d %d",&x,&y);
    exp1(x,y);
    exp2(x,y);
    exp3(x,y);
}

int exp1(int x , int y){
    if(x!=y)
    printf(" (x+y) \n------= %d \n(x-y)", x+y/x-y);
    else
    printf("answer is invalid");
    printf("\n");
    printf("\n");
}

int exp2(int x , int y){
    printf(" (x+y) \n------= %d \n  2", x+y/2);
    printf("\n");
    printf("\n");
}

int exp3(int x , int y){
    printf("(x+y)*(x-y) = %d",(x+y)*(x-y));
}