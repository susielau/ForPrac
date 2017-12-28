//Problem NO.9
#include <stdio.h>
#include <math.h>
int main()
{
    int sum;
    for (int i=1;i<1000;i++){
        sum=0;
        for (int j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if (sum==i) printf("%d\n",i);
    }
    return 0;
}