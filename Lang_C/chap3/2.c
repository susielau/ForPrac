//Problem NO.2
#include <stdio.h>
#include <math.h>
int main(){
    float p1,p2,p3,p4,p5;
    p1=1000*(1+5*0.0585);
    p2=1000*(1+2*0.0468)+1000*(1+2*0.0468)*(1+3*0.054);
    p3=1000*(1+3*0.054)+1000*(1+3*0.054)*(1+2*0.0468);
    p4=1000*(1+0.0414)+pow(1000*(1+0.0414)*(1+0.0414),5);
    p5=pow(1000*(1+0.072/4),4*5);
    printf("p1=%f\n",p1);
    printf("p2=%f\n",p2);
    printf("p3=%f\n",p3);
    printf("p4=%f\n",p4);
    printf("p5=%f\n",p5);
}