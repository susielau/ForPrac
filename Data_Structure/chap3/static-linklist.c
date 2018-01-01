#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>

#define MAXSIZE 1000
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int ElemType;
typedef int Status;

typedef struct
{
    ElemType data;
    int cur;
} Component, StaticLinkList[MAXSIZE];

/*space[0].cur为头指针,"0"表示空指针*/
Status InitList(StaticLinkList space)
{
    int i;
    for (i=0;i<MAXSIZE-1;i++)
    {
        space[i].cur=i+1;
    }
    space[MAXSIZE-1].cur=0; /*目前静态链表为空，最后一个元素的cur为0*/
    return OK;
}

void ScheFunc()
{
    for (int i=0;i<=100;i+=5)
    {
        printf("%4d%%",i);
        printf("\b\b\b\b\b");
        sleep(1);
    }
    printf("\n");
}

int ListLength(StaticLinkList L)
{
    int length,i;
    for (length=0,i=1;L[i].cur!=0;i++)
    {
        length++;
    }
    return length;
}


int Malloc_SLL(StaticLinkList space)
{
    int i=space[0].cur;
    if(space[0].cur){
        space[0].cur=space[i].cur;
    }
    return i;
}

Status ListInsert(StaticLinkList L,int i,ElemType e)
{
    int j,k,l;
    k=MAXSIZE-1;
    if (i<1 || i>ListLength(L)+1){
        return ERROR;
    }
    j=Malloc_SLL(L);
    if (j)
    {
        L[j].data=e;
        for (l=1;l<=i-1;l++)
        {
            k=L[k].cur;
        }
        L[j].cur=L[k].cur;
        L[k].cur=j;
        return OK;
    }
    return ERROR;
}

Status ListTraverse(StaticLinkList L)
{
    int i=1;
    for (i=0;L[i].cur!=0;i++){
        printf("%d ",L[i].data);
    }
    printf("\n");
    return OK;
}

int main()
{
    StaticLinkList L;
    Status i;
    int j;
    InitList(L);
    for (j=0;j<=5;j++)
    {
        ListInsert(L,1,j);
    }
    printf("List Length = %d\n", ListLength(L));
    printf("After inserting data = ");
    ListTraverse(L);
    printf("\n");
}