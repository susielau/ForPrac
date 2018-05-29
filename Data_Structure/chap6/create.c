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

void CreateBiTree(BiTree T) {
    TElemType ch;
    scanf("%c", &ch);
    if (ch == "#"){
        *T = NULL;
    }else {
        *T = (BiTree)malloc(sizeof(BiTNode));
        if (!*T) {
            exit(OVERFLOW);
        }
        //PREORDER TRAVERSE
        (*T)->data = ch;
        CreateBiTree(& (*T)->lchild);
        CreateBiTree(& (*T)->rchild);
    }
}