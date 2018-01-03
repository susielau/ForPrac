#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef int SElemType;
typedef struct
{
    SElemType data[MAXSIZE];
    int top;
}SqStack;

Status InitStack(SqStack *S)
{
    S->top=-1;
    return OK;
}

Status Push(SqStack *S,SElemType e)
{
    if (S->top==MAXSIZE-1)
    {
        return ERROR;
    }
    S->top++;
    S->data[S->top]=e;
    return OK;
}

Status Pop(SqStack *S,SElemType *e)
{
    if (S->top==-1)
    {
        return ERROR;
    }
    *e=S->data[S->top];
    S->top--;
    return OK;
}

int StackLength(SqStack S)
{
    if (S.top==-1)
    {
        return 0;
    }
    return S.top+1;
}

int main()
{
    SqStack S;
    SElemType e;
    int i,j,k,length;
    InitStack(&S);
    printf("Stack initiated.\n");
    for (i=0;i<=5;i++)
    {
        j=Push(&S,i);
    }
    length=StackLength(S);
    printf("Stack Length = %d\n",length);
    for (k=0;k<length;k++)
    {
        j=Pop(&S,&e);
        printf("Element %d popped out.\n",e);
    }
    return 0;
}