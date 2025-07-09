#include<stdio.h>
#include<math.h>

void print(int i ,int arr[]);

void main()
{
    int num , i=0 ; 
    int arr[i];
    printf("Enter the number that is our target :");
    scanf("%d", &num);
    for( i= 0 ; ; i++)
    {   
        arr[i]= num % 10;
        num=num /10;
        if(num==0)
            break;
    }
    print(i, arr);
}

void print(int i ,int arr[])
{   int n = i;
    for(int k=n ; k>=0 ; k--)
    {
        for(int j = k ; 0<=j ; j--)
        {
            printf("%3d", arr[j]);
        }
        printf("\n");
    }
}