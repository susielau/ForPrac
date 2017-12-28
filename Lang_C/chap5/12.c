//Problem NO.12
#include <stdio.h>
#include <math.h>
int main()
{
    int day=10,n1,n2=1,sum=1;
    while(day>0){
        n1=(n2+1)*2;
        n2=n1;
        day--;
    }
    printf("total=%d\n",n1);
    return 0;
}