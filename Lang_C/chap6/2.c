//Problem NO.2
#include <stdio.h>
#include <math.h>
int main()
{
    int a[10],temp;
    printf("Please enter data:\n");
    for (int i=0;i<10;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<10;i++){
        for (int j=i+1;j<10;j++){
            if (a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nThe sorted numbers:\n");
    for (int i=0;i<10;i++){
        printf("%5d",a[i]);
    }
    printf("\n");
    return 0;
}