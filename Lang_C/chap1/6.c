// Problem NO.6
#include <stdio.h>
int main(){
    int max(int a,int b);
    int a,b,c,d,e;
    scanf("%d,%d,%d",&a,&b,&c);
    d=max(a,b);
    e=max(d,c);
    printf("max=%d\n",e);
    return 0;
}
int max(int a,int b){
    int z;
    if(a>b) z=a;
    else z=b;
    return (z);
}
