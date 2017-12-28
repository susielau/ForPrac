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