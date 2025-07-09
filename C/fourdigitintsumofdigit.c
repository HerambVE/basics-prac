#include<stdio.h>
#include<math.h>

int sum(int arr[]); 

void main()
{
    int num, arr[4];
    printf("Enter the Number you want Sum of digits for : ");
    scanf("%d", &num);
    for(int i=0 ;  ; i++)
    {
        arr[i]= num%10;
        num=num/10;
        if(num==0)
            break;
    }
    printf("%d is the sum of digits of the number that was given", sum(arr));
}

int sum(int arr[])
{
    int result;
    result = arr[0]+ arr[1] + arr[2] + arr[3];
    return result;
}