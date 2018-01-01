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
typedef int ElemType;

typedef struct{
    ElemType data[MAXSIZE];
    int length;
}SqList;

Status InitList(SqList *L){
    L->length=0;
    return OK;
}

Status visit(ElemType c){
    printf("%d ",c);
    return OK;
}

Status InsertList(SqList *L,int i,ElemType e){
    int k;
    if (L->length==MAXSIZE){
        return ERROR;
    }
    if (i<1 || i>L->length+1){
        return ERROR;
    }
    if (i<=L->length){
        for (k=L->length-1;k>=i-1;k--){
            L->data[k+1]=L->data[k];
        }
    }
    L->data[i-1]=e;
    L->length++;
    return OK;
}

//List Traverse
Status ListTraverse(SqList L){
    int i;
    for (i = 0;i<L.length;i++)
        visit(L.data[i]);
    printf("\n");
    return OK;
}
//Get Element
Status GetElem(SqList L,int i,ElemType *e){
    if (L.length==0||i<0||i>L.length){
        return ERROR;
    }
    *e=L.data[i-1];
    return OK;
}

Status ListDelete(SqList *L, int i, ElemType *e){
    int k;
    if (i>L->length || i<1) return ERROR;
    if (L->length==0) return ERROR;
    *e=L->data[i-1];
    if (i<L->length){
        for (k=i;k<L->length;k++){
            L->data[k-1]=L->data[k];
        }
    }
    L->length--;
    return OK;
}

int main(){
    SqList L;
    ElemType e;
    Status i;
    int j,k;
    i=InitList(&L);
    printf("Length of the initialized linked list: %d\n",L.length);
    for (j=1;j<=5;j++){
        i=InsertList(&L,1,j);
    }
    printf("After inserting 1-5 to head（倒序）:L.data = ");
    ListTraverse(L);
    printf("\n");
    GetElem(L,2,&e);
    printf("The value of the 2nd element = %d\n",e);
    ListDelete(&L,4,&e);
    printf("The value of the deleted element = %d\n",e);
    ListTraverse(L);
    return 0;
}