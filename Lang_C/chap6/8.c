#include <stdio.h>
#define N 4
#define M 5
int main(){
    int a[M][N],m,n,i,j,p,f=0,flag;
    printf("Please enter matrix:\n");
    for (i=0;i<N;i++){
        for (j=0;j<M;j++){
            printf("[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<N;i++){
        for (j=0;j<M;j++){
            if (a[i][j]>a[i][f]) f=j;
        }
        flag=1;
        for (p=0;p<N;p++){
            if (a[i][f]>a[p][f]){
                flag=0;
                continue;
            }
        }
        if (flag) {
            printf("a[%d][%d]=%d\n",i,f,a[i][f]);
            break;
        }
    }
    if (!flag)
        printf("It does not exist!\n");
    return 0;
}