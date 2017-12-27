// Problem NO.5
#include <stdio.h>
#include <math.h>
int main(){
    float n = 0.0,sqr;
    printf("Please enter a positive number smaller than 1000:");
    scanf("%f",&n);
    while (n>=1000 || n<0) {
        printf("Error! Please enter a positive number smaller than 1000:");
        scanf("%f",&n);
    }
    sqr=sqrtf(n);
    printf("square root=%0.0f\n",sqr);
}

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

//Problem NO.8
#include <stdio.h>
#include <math.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>=90){
        printf("A");
    } else if (x>=80 && x<=89){
        printf("B");
    } else if (x>=70 && x<=79){
        printf("C");
    } else if (x>=60 && x<=69){
        printf("D");
    } else {
        printf("E");
    }
    return 0;
}

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


//Problem 12
#include <stdio.h>
#include <math.h>
int main(){
    float x1=2,y1=2,x2=-2,y2=2,x3=-2,y3=-2,x4=2,y4=-2,d1,d2,d3,d4,x,y;
    printf("Please enter the x,y of the point:");
    scanf("%f,%f",&x,&y);
    d1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
    d2=(x-x2)*(x-x2)+(y-y2)*(y-y2);
    d3=(x-x3)*(x-x3)+(y-y3)*(y-y3);
    d4=(x-x4)*(x-x4)+(y-y4)*(y-y4);
    if (d1>1||d2>1||d3>1||d4>1){
        printf("Current height: 0m\n");
        return 0;
    }
    printf("Current height: 10m\n");
    return 0;
}









































































