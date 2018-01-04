#include <stdio.h>
int Fib(int n)
{
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    return Fib(n-1)+Fib(n-2);
}

int main()
{
    int i;
    for (i=0;i<40;i++)
        printf("%d ",Fib(i));
    printf("\n");
    return 0;
}