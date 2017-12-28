//Problem NO.1
#include <stdio.h>
#include <math.h>
int main()
{
    int a[101];
    for (int i=0;i<101;i++){
        a[i]=i;
    }
    for (int j=2;j<101;j++){
        for (int k=2;k<j;k++){
            if (a[j]%k==0){
                a[j]=0;
            }
        }
    }
    for (int i=2;i<101;i++){
        if (a[i]!=0) printf("%d\n",a[i]);
    }
    return 0;
}