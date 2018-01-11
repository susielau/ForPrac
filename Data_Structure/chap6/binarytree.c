#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define MAXSIZE 100

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef char TElemType;
TElemType Nil=' ';
typedef int Status;

int count=1;
typedef char String[24];
String str;
Status StrAssign(String T,char *chars)
{
    int i;
    if(strlen(chars)>MAXSIZE)
    {
        return ERROR;
    } else {
        T[0]=strlen(chars);
        for (i=1;i<=T[0];i++)
        {
            T[i]=*(chars+i-1);
        }
        return OK;
    }
}
typedef struct BiTNode
{
    TElemType data;
    struct BiTNode *lchild,*rchild;
} BiTNode,*BiTree;

Status InitTree(BiTree *T)
{
    *T=NULL;
    return OK;
}

Status visit(TElemType e)
{
    printf("%c",e);
    return OK;
}

Status DestroyTree(BiTree *T)
{
    if (*T)
    {
        if ((*T)->lchild)
        {
            DestroyTree(&(*T)->lchild);
        }
        if ((*T)->rchild)
        {
            DestroyTree(&(*T)->rchild);
        }
        free(*T);
        *T=NULL;
    }
    return OK;
}

Status CreateBiTree(BiTree *T)
{
    TElemType ch;
    ch=str[count++];
    if(ch=='#')
    {
        *T=NULL;
    }
    else{
        *T=(BiTree)malloc(sizeof(BiTNode));
        if (!*T)
        {
            exit(OVERFLOW);
        }
        (*T)->data=ch;
        CreateBiTree(&(*T)->lchild);
        CreateBiTree(&(*T)->rchild);
    }
    return OK;
}

Status BiTreeEmpty(BiTree T)
{
    if(T)
        return FALSE;
    else
        return TRUE;
}

int BiTreeDepth(BiTree T)
{
    int i,j;
    if (!T)
    {
        return 0;
    }
    if (T->lchild)
    {
        i=BiTreeDepth(T->lchild);
    } else {
        i=0;
    }
    if (T->rchild)
    {
        j=BiTreeDepth(T->rchild);
    } else {
        j=0;
    }
    if (i>j)
    {
        return i+1;
    } else {
        return j+1;
    }
}

TElemType Root(BiTree T)
{
    if (BiTreeEmpty(T))
    {
        return Nil;
    } else {
        return T->data;
    }
}

TElemType Value(BiTree p)
{
    return p->data;
}

void Assign(BiTree p,TElemType value)
{
    p->data=value;
}

void PreOrderTraverse(BiTree T)
{
    if (!T)
    {
        return;
    } else {
        visit(T->data);
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
}

void InOrderTraverse(BiTree T)
{
    if (!T)
    {
        return;
    } else {
        InOrderTraverse(T->lchild);
        visit(T->data);
        InOrderTraverse(T->rchild);
    }
}

void PostOrderTraverse(BiTree T)
{
    if(!T)
    {
        return;
    }
    PostOrderTraverse(T->lchild);
    PostOrderTraverse(T->rchild);
    visit(T->data);
}

int main()
{
    int i;
    BiTree T;
    TElemType e1;
    InitTree(&T);
    StrAssign(str,"ABDH#K###E##CFI##G##J##");
    CreateBiTree(&T);
    printf("After creating tree, is it empty? %d (1 yes,0 no);\n depth of tree=%d\n",BiTreeEmpty(T),BiTreeDepth(T));
    e1=Root(T);
    printf("Root is:%c\n",e1);
    printf("\nPreorder Traverse Binary Tree:");
    PreOrderTraverse(T);
    printf("\nInorder Traverse Binary Tree:");
    InOrderTraverse(T);
    printf("\nPostorder Traverse Binary Tree:");
    PostOrderTraverse(T);
    DestroyTree(&T);
    printf("After deleting the tree, is it empty? %d(1:yes,0:no);\ndepth of tree=%d\n",BiTreeEmpty(T),BiTreeDepth(T));
    i=Root(T);
    if(!i)
    {
        printf("Tree empty with no root!\n");
    } 
    return 0;
}