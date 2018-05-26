#include <stdio.h>
#include <math.h>
int main()
{
    for (int i=1;i<=100;i++){
        if (i%3!=0 && i%7!=0){
            printf("%d ",i);
        }
    }
}