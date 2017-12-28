//Problem NO.9
#include <stdio.h>
#include <math.h>
int main(){
    int x,x1,x2,x3,x4,x5;
    scanf("%d",&x);
    if (x>=10000){
        printf("There are 5 digits.\n");
        x1=x/10000;
        x2=(x-x1*10000)/1000;
        x3=(x-x1*10000-x2*1000)/100;
        x4=(x-x1*10000-x2*1000-x3*100)/10;
        x5=(x-x1*10000-x2*1000-x3*100-x4*10);
        printf("%d %d %d %d %d\n",x1,x2,x3,x4,x5);
    } else if (x>=1000){
        printf("There are 4 digits.\n");
        x2=(x)/1000;
        x3=(x-x2*1000)/100;
        x4=(x-x2*1000-x3*100)/10;
        x5=(x-x2*1000-x3*100-x4*10);
        printf("%d %d %d %d\n",x2,x3,x4,x5);
    } else if (x>=100){
        printf("There are 3 digits.\n");
        x3=(x)/100;
        x4=(x-x3*100)/10;
        x5=(x-x3*100-x4*10);
        printf("%d %d %d\n",x3,x4,x5);
    } else if (x>=10){
        printf("There are 2 digits.\n");
        x4=(x)/10;
        x5=(x-x4*10);
        printf("%d %d\n",x4,x5);
    } else {
        printf("There is 1 digit.\n");
        printf("%d",x);
    }
    return 0;
}