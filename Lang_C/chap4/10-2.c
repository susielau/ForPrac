//Problem NO.10-2
#include <stdio.h>
#include <math.h>
int main(){
    double bon,bon1,bon2,bon4,bon6,bon10;
    int branch,i;
    bon1=100000*0.10;
    bon2=bon1+100000*0.075;
    bon4=bon2+200000*0.05;
    bon6=bon4+400000*0.03;
    bon10=bon6+1000000*0.015;
    printf("Please enter the gain:");
    scanf("%d",&i);
    branch=i/100000;
    printf("Current branch: %d\n",branch);
    if (branch>10) branch=10;
    switch(branch){
        case 0:
            bon=i*0.1;
            break;
        case 1:
            bon=bon1+(i-100000)*0.075;
            break;
        case 2:
        case 3:
            bon=bon2+(i-200000)*0.05;
            break;
        case 4:
        case 5:
            bon=bon4+(i-400000)*0.03;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            bon=bon6+(i-600000)*0.015;
            break;
        case 10:
            bon=bon10+(i-1000000)*0.01;
            break;
    }
    printf("The reward is %10.2f\n",bon);
}
