//Problem NO.5
#include <stdio.h>
#include <math.h>
int main()
{
    int a,n,sn=0,tn=0,i=0;
    printf("Please enter a,n:\n");
    scanf("%d,%d",&a,&n);
    while(i<=n){
        tn=tn+a;
        sn=tn+sn;
        a*=10;
        i++;
    }
    printf("Sum is %d\n",sn);
    return 0;
}