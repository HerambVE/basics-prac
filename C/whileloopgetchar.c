/*#include<stdio.h>

void main()
{
    int x=0;
    char rizzz[x];
    while(rizzz[x]!='\n');
    {
        rizzz[x]=getchar();
        x++;
    }
}*/

#include <stdio.h>

#define MAX_LENGTH 100 // Define a maximum length for the array

int main() {
    char rizzz[MAX_LENGTH];
    int x = 0;

    while (x < MAX_LENGTH - 1 && (rizzz[x] = getchar()) != '\n') {
        x++;
    }
    rizzz[x] = '\0'; // Null-terminate the string

    printf("You entered: %s\n", rizzz); // Print the entered string

    return 0;
}
