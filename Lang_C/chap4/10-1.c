//Problem NO.10-1
#include <stdio.h>
#include <math.h>
int main(){
    float i,r;
    scanf("%f",&i);
    if (i<=100000){
        r=i*0.10;
    } else if (i<=200000){
        r=100000*0.10+(i-100000)*0.075;
    } else if (i<=400000){
        r=100000*0.10+100000*0.075+(i-200000)*0.05;
    } else if (i<=600000){
        r=100000*0.10+100000*0.075+200000*0.05+(i-400000)*0.03;
    } else if (i<1000000){
        r=100000*0.10+100000*0.075+200000*0.05+400000*0.03+(i-600000)*0.015;
    } else {
        r=100000*0.10+100000*0.075+200000*0.05+400000*0.03+600000*0.015+(i-1000000)*0.01;
    }
    printf("Rewards: %f\n",r);
}