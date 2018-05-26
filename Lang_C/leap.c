#include <stdio.h>
#include <math.h>
int main()
{
    int year,count;
    year=2018;
    count=0;
    while (count<20){
        if (year%4==0){
            if (year%100!=0){
                printf("%d\n",year);
                count++;
            } else if (year%400==0){
                printf("%d\n",year);
                count++;
            }
        }
        year++;
    }
    return 0;
}