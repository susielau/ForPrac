//Problem NO.7
#include <stdio.h>
#include <math.h>
int main()
{
    int sum=0;
    for (int i=0;i<=100;i++){
        sum+=i;
    }
    for (int i=1;i<=50;i++){
        sum+=i*i;
    }
    for (int i=1;i<=10;i++){
        sum+=1/i;
    }
    printf("The sum is %d\n",sum);
    return 0;
}