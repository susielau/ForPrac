//Problem NO.4
#include <stdio.h>
#include <math.h>
int main()
{
    int a[11]={1,2,3,5,6,8,20,28,48,100};
    int n,temp1,temp2,end;
    printf("Array:\n");
    for (int i=0;i<10;i++){
        printf("%5d",a[i]);
    }
    printf("\n");
    printf("Insert data:");
    scanf("%d",&n);
    end=a[9];
    if (n>end){
        a[10]=n;
    } else {
        for (int i=0;i<10;i++){
            if (a[i]>n){
                temp1=a[i];
                a[i]=n;
                for (int j=i+1;j<11;j++){
                    temp2=a[j];
                    a[j]=temp1;
                    temp1=temp2;
                }
                break;
            }
        }
    }
    printf("New Array:\n");
    for (int i=0;i<11;i++){
        printf("%5d",a[i]);
    }
    printf("\n");
    return 0;
}