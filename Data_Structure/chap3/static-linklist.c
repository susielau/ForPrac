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

int ListLength(StaticLinkList L)
{
    int j=0;
    int i=L[MAXSIZE-1].cur;
    while (i)
    {
        i=L[i].cur;
        j++;
    }
    return j;
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
    int i=L[MAXSIZE-1].cur;
    while (i){
        printf("%d ",L[i].data);
        i=L[i].cur;
    }
    printf("\n");
    return OK;
}

void Free_SSL(StaticLinkList L,int k)
{
    L[k].cur=L[0].cur;
    L[0].cur=k;
}

Status ListDelete(StaticLinkList L,int i)
{
    int j,k;
    if(i<1 || i>ListLength(L)){
        return ERROR;
    }
    k=MAXSIZE-1;
    for (j=1;j<=i-1;j++)
    {
        k=L[k].cur;
    }
    j=L[k].cur;
    L[k].cur=L[j].cur;
    Free_SSL(L,j);
    return OK;
}

int main()
{
    StaticLinkList L;
    Status i;
    int j,k;
    InitList(L);
    for (j=5;j>=0;j--)
    {
        ListInsert(L,1,j);
    }
    printf("List Length = %d\n", ListLength(L));
    printf("After inserting data = ");
    ListTraverse(L);
    k=L[6].data;
    printf("%d",k);
    i=ListDelete(L,1);
    printf("After deleting element %d: ", k);
    ListTraverse(L);
}