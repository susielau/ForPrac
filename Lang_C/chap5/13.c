//Problem No.13
#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,a;
    printf("Please enter a:\n");
    scanf("%f",&a);
    x1=a/2;
    x2=0.5*(x1+a/x1);
    while (fabs(x2-x1)>=1e-5){
        x1=x2;
        x2=0.5*(x1+a/x1);
    }
    printf("x=sqrt(a):%10.2f\n",x1);
    return 0;
}