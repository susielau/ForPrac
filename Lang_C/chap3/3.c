// Problem NO.1
#include <stdio.h>
#include <math.h>
int main(){
    float p,r=0.09;
    int n=10;
    p=pow(1+r,n);
    printf("Increase in percentage is:%f\n",p);
    return 0;
}

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

//Problem NO.3
#include <stdio.h>
#include <math.h>
int main(){
    float r=0.01,d=300000,p=6000,m;
    m=log10(p/(p-d*r))/log(1+r);
    printf("It takes %6.2f months.\n",m);
}

//Problem NO.6
#include <stdio.h>
#include <math.h>
int main(){
    char c1,c2,c3,c4,c5;
    c1=67,c2=104,c3=105,c4=110,c5=97;
    c1=c1+4;
    c2=c2+4;
    c3=c3+4;
    c4=c4+4;
    c5=c5+4;
    putchar(c1);
    putchar(c2);
    putchar(c3);
    putchar(c4);
    putchar(c5);
    printf("\nAfter encoding:%c%c%c%c%c\n",c1,c2,c3,c4,c5);
    return 0;
}

//Problem NO.7
#include <stdio.h>
#include <math.h>
int main(){
    float r,h,c,s,as,v,av,pi=3.141526;
    printf("Please enter the radius:");
    scanf("%f",&r);
    printf("Please enter the height:");
    scanf("%f",&h);
    c=2*pi*r;
    s=pi*r*r;
    as=4*pi*r*r;
    v=3.0/4.0*pi*r*r*r;
    av=pi*r*r*h;
    printf("circumference=%6.2f\n",c);
    printf("surface area=%6.2f\n",s);
    printf("overall surface area=%6.2f\n",as);
    printf("volume=%6.2f\n",v);
    printf("overall volume=%6.2f\n",av);
}

