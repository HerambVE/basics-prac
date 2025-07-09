#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>

int scanning(int array[]);
void sorting(int array[],int i);
void printing(int array[], int n);

int main()
{
    int array[50];
    int i;
    i=scanning(array);
    sorting(array,i);
    printing(array,i);
    return 0;
}

int scanning(int array[])
{
    int i;
    for(i=0; i<50 ; i++ )
    {
        if(scanf("%d",&array[i])!=1)
        {
            i-1;
            break;
        }
    }
    return i;
}

void sorting(int array[],int n)
{
    for(int i=0; i<n ; i++ )
    {
        int j;
        int temp=array[i];
        for(j=i+1 ; j<n ;)
        {
            if(array[j]<temp)
            {
                temp=array[j];
                j++;
            }
            else
            {
                j++;
            }
        }
        array[j-1]=array[i];
        array[i]=temp;
    }
}

void printing(int array[], int n)
{
    for(int i=0; i<=n; i++)
    {
        printf("%5d",array[i]);
    }
}