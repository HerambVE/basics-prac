#include<stdio.h>
#include<stdlib.h>

void main()
{
    int math, physics, chemistry, total, mnp;
    mnp=math+physics;
    printf("enter the marks for maths physics and chemistry in the same order:");
    scanf("%d %d %d",&math, &physics, &chemistry);
    if((math>=60 && physics>=50 && chemistry>=40 && total>=200) || mnp>=150 )
    {
        printf("admitted");
    }
    else
        printf("not admitted");
}