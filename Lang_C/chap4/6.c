//Problem NO.6
#include <stdio.h>
#include <math.h>
int main(){
    int x,y;
    scanf("%d",&x);
    if (x<1){
        y=x;
        printf("y=%d\n",y);
    } else if (x>=1 && x<10){
        y=2*x-1;
        printf("y=%d\n",y);
    } else {
        y=3*x-11;
        printf("y=%d\n",y);
    }
    return 0;
}