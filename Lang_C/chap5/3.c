//Problem NO.3
#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,c,p;
    printf("Please enter two numbers m, n:");
    scanf("%d,%d",&m,&n);
    p=m*n;
    while(n!=0){
        c=m%n;
        m=n;
        n=c;
    }
    printf("The largest common divisor:%d\n",m);
    printf("The least common multiple:%d\n",p/m);
    return 0;
}