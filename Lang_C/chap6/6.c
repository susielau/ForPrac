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


//Problem NO.3
#include <stdio.h>
#include <math.h>
int main()
{
    int a[3][3],sum=0;
    printf("Please enter data:\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            scanf("%d\n",&a[i][j]);
        }
    }
    for (int i=0;i<3;i++){
        sum+=a[i][i];
    }
    printf("Sum is %d\n",sum);
    return 0;
}


//Problem NO.4???????????????????????????????????????
#include <stdio.h>
#include <math.h>
int main()
{
    int a[11]={1,2,3,5,6,8,20,28,48,100};
    int n,temp,temp2;
    printf("Please enter a num:");
    scanf("%d",&n);
    if (a[9]<n){
        a[10]=n;
    }
    for (int i=9;i>=0;i--){
        if (a[i]<n){
            temp=a[i];
            a[i]=n;
            n=temp;
        }
    }
    printf("New Array a\n");
    for (int i=0;i<10;i++){
        printf("%5d\n",a[i]);
    }
    return 0;
}

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

//Problem NO.7
