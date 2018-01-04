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
typedef int QElemType;
typedef int QElemType;
typedef struct QNode /*结点结构*/
{
    QElemType data;
    struct QNode *next;
}QNode,*QueuePtr;

typedef struct /*链表结构*/
{
    QueuePtr front,rear;
}LinkQueue;

Status InitQueue(LinkQueue *Q)
{
    Q->front=Q->rear=(QueuePtr)malloc(sizeof(QNode));
    if (NULL==Q->front)
    {
        return ERROR;
    }
    Q->front->next=NULL;
    return OK;
}


void traversal(LinkQueue Q)
{
    int i=1,count=0;
    QueuePtr q=Q.front->next;
    while (q)
    {
        printf("Element NO.%d is: %d\n",i,q->data);
        q=q->next;
        i++;
    }
}

int QueueLength(LinkQueue Q)
{
    int count=0;
    QueuePtr q=Q.front->next;
    while (q)
    {
        q=q->next;
        count++;
    }
    return count;
}

Status EnQueue(LinkQueue *Q,QElemType e)
{
    QueuePtr s=(QueuePtr)malloc(sizeof(QNode));
    if (!s)
    {
        exit(OVERFLOW);
    }
    s->data=e;
    s->next=NULL;
    Q->rear->next=s;
    Q->rear=s;
    return OK;
}

Status DeQueue(LinkQueue *Q,QElemType *e)
{
    QueuePtr p;
    if (Q->front==Q->rear)
    {
        return ERROR;
    }
    p=Q->front->next;
    *e=p->data;
    Q->front->next=p->next;
    if (Q->rear==p)
    {
        Q->rear=Q->front;
    }
    free(p);
    return OK;
}

int main()
{
    LinkQueue Q;
    int i,length;
    Status j;
    QElemType e;
    InitQueue(&Q);
    printf("Queue initiated.\n");
    for (i=0;i<5;i++)
    {
        j=EnQueue(&Q,i);
    }
    traversal(Q);
    length=QueueLength(Q);
    printf("Length of Link Queue is %d\n",length);
    for (i=0;i<length;i++)
    {
        j=DeQueue(&Q,&e);
        printf("Element NO.%d of value %d is dequeued.\n",i+1,e);
    }
    return 0;
}