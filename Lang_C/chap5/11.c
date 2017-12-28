//Problem NO.11
#include <stdio.h>
#include <math.h>
int main()
{
    double h=50,d=100;
    for (int n=10;n>1;n--){
        d+=2*h;
        h=0.5*h;
    }
    printf("sum=%f,height=%f\n",d,h);
    return 0;
}