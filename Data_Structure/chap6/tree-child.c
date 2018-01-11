//孩子表示法
#include <stdio.h>
#include <stdlib.h>
#define MAX_TREE_SIZE 100
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef char TElemType;
typedef int Status;
typedef struct CTNode
{
    int child;
    int next;
} * ChildPtr;
typedef struct
{
    TElemType data;
    int parent;
    ChildPtr firstchild;
} CTbox;
typedef struct
{
    CTbox nodes[MAX_TREE_SIZE]; /*结点数组*/
    int n;                      /*根位置，结点数*/
} CTree;

Status InitTree(CTree *T)
{
    (*T).n = 0;
    return OK;
}

Status CreateTree(CTree *T)
{
    printf("Please enter the number of nodes:\n");
    scanf("%d", &T->n);
    printf("Please enter the value of each node,position of parent:\n");
    for (int i = 0; i < (*T).n; i++)
    {
        printf("node[%d]:", i);
        scanf("%s", &T->nodes[i].data);
        printf("parent:");
        scanf("%d", &T->nodes[i].parent);
        // 万一有多个child怎么办
        // 利用malloc分配空间
        T->nodes[i].firstchild = (ChildPtr)malloc(sizeof(struct CTNode));
        printf("Please enter the value of child and next:\n");
        printf("child:");
        scanf("%d", &T->nodes[i].firstchild->child);
        printf("next:");
        scanf("%d", &T->nodes[i].firstchild->next);
    }
    return OK;
}

int main()
{
    CTree T;
    InitTree(&T);
    printf("Tree initiated.\n");
    CreateTree(&T);
    printf("Tree Created.\n");
    return 0;
}
