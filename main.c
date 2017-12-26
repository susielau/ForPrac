// Hanoi Problem using recursion.
// wiki: https://en.wikipedia.org/wiki/Tower_of_Hanoi

#include <stdio.h>

int main()
{
    void hanoi(int n, char A, char B, char C);
    int m;
    printf("input the num:");
    scanf("%d",&m);
    printf("the step to move %d disks:\n",m);
    hanoi(m,'A','B','C');
}

void hanoi(int n, char A, char B, char C)
{
    if (n==1)
        printf("%c-->%c\n",A,C);
    else{
        hanoi(n-1,A,C,B);
        printf("%c-->%c\n",A,C);
        hanoi(n-1, B, A, C);
    }
}
