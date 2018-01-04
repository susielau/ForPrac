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

typedef struct StackNode
{
    SElemType data;
    struct StackNode *next;
}StackNode,*LinkStackPtr;

typedef struct LinkStackPtr
{
    LinkStackPtr top;
    int count;
}LinkStack;

Status StackEmpty(LinkStack S)
{
    if (S.count==0)
    {
        return TRUE;
    }
    return FALSE;
}

Status InitStackNode(LinkStack *S)
{
    LinkStackPtr p=(LinkStackPtr)malloc(sizeof(StackNode));
    S->top=p;
    S->count++;
    return OK;
}

Status Push(LinkStack *S,SElemType e)
{
    LinkStackPtr s=(LinkStackPtr)malloc(sizeof(StackNode));
    s->data=e;
    s->next=S->top;
    S->top=s;
    S->count++;
    return OK;
}

Status Pop(LinkStack *S,SElemType *e)
{
    LinkStackPtr p;
    if (StackEmpty(*S))
    {
        return ERROR;
    }
    *e=S->top->data;
    p=S->top;
    S->top=S->top->next;
    free(p);
    S->count--;
    return OK;
}

int main()
{
    LinkStack S;
    int i;
    Status j;
    SElemType e;
    InitStackNode(&S);
    printf("Stack node initiated.\n");
    for (i=0;i<=5;i++)
    {
        j=Push(&S,i);
    }
    for (i=0;i<=5;i++)
    {
        j=Pop(&S,&e);
        printf("%d ",e);
    }
    printf("\n");
    return OK;
}