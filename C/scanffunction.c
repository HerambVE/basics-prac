/*#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a,b,c,d,e;
    scanf("%d %5d %d %*d %d", &a ,&b ,&c ,&d , &e);
    printf("%d %d %d %d %d", a, b, c, d, e);
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char name[10];//gotta initialize this bitch
    scanf("%s", &name);//keep both of the data type indicator for a string as s
    printf("%s", name);
}*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char name[10];
    scanf("%s", &name);
    printf("%c", name[5]);//keep this printf data type character as c as it will be printing a single character i.e. name[5]
}

// both scanf and printf are taking s as data type character
// string variable starts from 0 soo add a number more than what you would want to be printed
//as soon as it comes across an error it will terminate working so don't even try to