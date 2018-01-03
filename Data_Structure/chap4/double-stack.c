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
    int top1;
    int top2; 
}SqDoubleStack;

Status InitDoubleStack(SqDoubleStack *S)
{
    S->top1=-1;
    S->top2=MAXSIZE;
    return OK;
}

Status Push(SqDoubleStack *S,SElemType e,int stackNumber)
{
    if (S->top1+1==S->top2){
        return ERROR;
    }
    if (stackNumber==1){
        S->data[S->top1++]=e;
    } else {
        S->data[S->top2--]=e;
    }
    return OK;
}

Status Pop(SqDoubleStack *S,SElemType *e,int stackNumber)
{
    if (stackNumber==1)
    {
        if (S->top1==-1)
        {
            return ERROR;
        }
        *e=S->data[S->top1];
        S->top1--;
    } else if (stackNumber==2)
    {
        if (S->top2==MAXSIZE)
        {
            return ERROR;
        }
        *e=S->data[S->top2];
        S->top2++;
    }
    return OK;
}

int main()
{
    SqDoubleStack S;
    int i,j,k,length1,length2;
    SElemType e;
    InitDoubleStack(&S);
    printf("Double Stack initiated.\n");
    for (i=0;i<10;i++)
    {
        j=Push(&S,i,1);
    }
    for (i=0;i<10;i++)
    {
        j=Push(&S,i,2);
    }
    length1=S.top1;
    length2=S.top2;
    printf("Stack Size:%d, %d\n",length1,length2);
    for (k=0;k<length2;k++)
    {
        Pop(&S,&e,1);
        printf("Element %d popped out.\n",e);
        Pop(&S,&e,2);
        printf("Element %d popped out.\n",e);
    }
    return OK;
}