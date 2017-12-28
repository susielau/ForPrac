//Problem NO.6
#include <stdio.h>
#include <math.h>
int main()
{
    int a[10][10];
    for (int i=0;i<10;i++){
        a[i][i]=i;
        a[i][0]=1;
    }
    for (int i=2;i<10;i++){
        for (int j=1;j<10;j++){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            printf("%6d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}