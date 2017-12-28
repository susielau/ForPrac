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