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