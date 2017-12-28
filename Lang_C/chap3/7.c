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