#include<stdio.h>
#include<math.h>

int main()
{
    printf("give the values for coefficients : ");
    int a,b,c,d,m,n;
    scanf("%d %d %d %d %d %d",&a ,&b ,&c ,&d, &m ,&n);
    int numerator1 = m*d - b*n;
    int numerator2 = n*a - m*c;
    int denominator = a*d-c*b;
    if (denominator==0)
    {
        printf("since the denominator is zero x1 and x2 cannot be evaluated");
        return 0;
    }
    printf("the values of each unknown are as follow \nx1 = %d\t x2 = %d", numerator1/denominator, numerator2/denominator);   
}