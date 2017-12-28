//Problem 11
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d,m;
    printf("Please enter 4 numbers:");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    if (a>b){
        m=a;
        a=b;
        b=m;
    }
    if (a>c){
        m=a;
        a=c;
        c=m;
    }
    if (a>d){
        m=a;
        a=d;
        d=m;
    }
    if (b>c){
        m=b;
        b=c;
        c=m;
    }
    if (b>d){
        m=b;
        b=d;
        d=m;
    }
    if (c>d){
        m=c;
        c=d;
        d=m;
    }
    printf("order: \n");
    printf("%d %d %d %d\n",a,b,c,d);
    return 0;
}