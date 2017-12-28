//Problem NO.2
#include <stdio.h>
#include <math.h>
int main(){
    int sign=1,count=0;
    double pi=0.0,n=1.0,term=1.0;
    while(fabs(term)>=1e-8){
        pi=pi+term;
        sign=-sign;
        n=n+2;
        term=sign/n;
        count++;
    }
    pi=4*pi;
    printf("pi=%10.8f\ncount=%d\n",pi,count);
    return 0;
}