//Problem NO.8
#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k;
    for (int n=100;n<1000;n++)
    {
        i=n/100;
        j=n/10-i*10;
        k=n-i*100-j*10;
        if ((i*i*i+j*j*j+k*k*k)==n) printf("%d\n",n);
    }
    return 0;
}