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
typedef struct
{
    QElemType data[MAXSIZE];
    int front;
    int rear;
}SqQueue;

Status InitQueue(SqQueue *Q)
{
    Q->front=0;
    Q->rear=0;
    return OK;
}

int QueueLength(SqQueue Q)
{
    return (MAXSIZE+Q.rear-Q.front)%MAXSIZE;
}

Status EnQueue(SqQueue *Q,QElemType e)
{
    if ((Q->rear+1)%MAXSIZE==Q->front) /*队列满的判断*/
    {
        return ERROR;
    }
    Q->data[Q->rear]=e;
    Q->rear=(Q->rear+1)%MAXSIZE;
    return OK;
}

Status DeQueue(SqQueue *Q,QElemType *e)
{
    if (Q->front==Q->rear) /*队列空的判断*/
    {
        return ERROR;
    }
    *e=Q->data[Q->front];
    Q->front=(Q->front+1)%MAXSIZE;
    return OK;
}

int main()
{
    SqQueue Q;
    int i,length;
    Status j;
    QElemType e;
    InitQueue(&Q);
    printf("Queue initiated.\n");
    for (i=0;i<5;i++){
        j=EnQueue(&Q,i);
    }
    printf("Length of Queue is %d.\n",QueueLength(Q));
    length=QueueLength(Q);
    for (i=0;i<length;i++){
        j=DeQueue(&Q,&e);
        printf("Element %d dequeued.\n",e);
    }
    return OK;
}