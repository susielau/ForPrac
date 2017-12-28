//Problem NO.5
#include <stdio.h>
#include <math.h>
int main()
{
    int a[10]={1,2,3,5,6,8,20,28,48,100},temp;
    for (int i=0;i<5;i++){
        temp=a[i];
        a[i]=a[10-i-1];
        a[10-i-1]=temp;
    }
    for (int j=0;j<10;j++){
        printf("The reversed is:%d\n",a[j]);
    }
    return 0;
}