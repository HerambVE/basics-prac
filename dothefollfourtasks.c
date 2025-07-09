#include<stdio.h>
#include<math.h>

void sumofvalues(int arr[]);
void meh(int arr[]);
void largest(int arr[]);
void smallest(int arr[]);

void main()
{
    int arr[3];
    printf("Enter the three valuable values you sun of bish\n");
    for(int i=0 ; i<3 ; i++)
    {
        scanf("%d", &arr[i]);
    }
    sumofvalues(arr);
    meh(arr);
    largest(arr);
    smallest(arr);
}

void sumofvalues(int arr[])
{
    int sum;
    sum=arr[0]+arr[1]+arr[2];
    printf("Sum of Values of 3 Numbers : %d\n", sum);
}
void meh(int arr[])
{
    int average;
    average=(arr[0]+arr[1]+arr[2])/3;
    printf("The average of 3 : %d\n", average);
}
void largest(int arr[])
{
    int phaseone, phasetwo;
    phaseone=arr[0]<arr[1]?arr[1]:arr[0];
    phasetwo=phaseone<arr[2]?arr[2]:phaseone;
    printf("largest of the 3 numbers : %d\n", phasetwo);
}
void smallest(int arr[])
{
    int phaseone, phasetwo;
    phaseone=arr[0]<arr[1]?arr[0]:arr[1];
    phasetwo=phaseone<arr[2]?phaseone:arr[2];
    printf("smallest of the 3 numbers : %d\n", phasetwo);
}