#include<stdio.h>

void main()
{
    char name1[5], name2[6], name3[6];
    int choice;
    scanf("%s",name1);
    scanf("%s",name2);
    scanf("%s",name3);
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("%s %c. %s",name1,name2[0],name3);
        break;
    case 2:
        printf("%c. %c. %s",name1[0],name2[0],name3);
        break;
    case 3:
        printf("%s %c. %c.",name3,name1[0],name2[0]);
        break;
    }
}