//Problem NO.6
#include <stdio.h>
#include <math.h>
int main()
{
    int n=1,sum=0,this=1;
    while(n<=20){
        this=this*n;
        sum+=this;
        n++;
    }
    printf("The sum is:%d\n",sum);
    return 0;
}