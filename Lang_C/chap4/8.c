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