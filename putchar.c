#include <stdio.h>

int main (){
    char variable;
    char strgmaker[100];
    int i;
    for(i=0;i<100;i++){
    variable = getchar();
    strgmaker[i]=variable;
    }
    
    for(i=0;i<100;i++){
    putchar(strgmaker[i]);
    }
    return 0;
}