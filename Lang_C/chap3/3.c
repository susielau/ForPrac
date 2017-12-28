//Problem NO.3
#include <stdio.h>
#include <math.h>
int main(){
    float r=0.01,d=300000,p=6000,m;
    m=log10(p/(p-d*r))/log(1+r);
    printf("It takes %6.2f months.\n",m);
}