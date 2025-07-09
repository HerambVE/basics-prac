#include<stdio.h>
#include<math.h>

int biggest (int arr[]);

void main()
{
    int arr[3];
    printf("Enter the three numbers : ");
    for(int i=0; i<3; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d",biggest(arr));
}

int biggest (int arr[])
{
    int z=0 , y=0;
    z = arr[0] < arr[1]? arr[1]: arr[0];
    y = arr[2] < z? z: arr[2];
    return y;
}