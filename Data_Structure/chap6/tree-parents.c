//双亲表示法
#include <stdio.h>
#define MAX_TREE_SIZE 100
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef char TElemType;
typedef int Status;
typedef struct PTNode
{
    TElemType data;
    int parent;
    int leftchild;
}PTNode;
typedef struct
{
    PTNode nodes[MAX_TREE_SIZE];
    int n; //树的结点数
}PTree;

Status InitTree(PTree *T)
{
    (*T).n=0;
    return OK;
}

Status CreateTree(PTree *T)
{
    printf("Please enter the number of nodes:\n");
    // scanf("%d",(*T).n);
    // can be
    // scanf("%d",&(*T).n);
    // or
    scanf("%d",&T->n);
    printf("Please enter the value of nodes, the position of parents, and of its first child:\n");
    for (int i=0;i<(*T).n;i++)
    {
        printf("nodes[%d]:",i);
        scanf("%s",&(*T).nodes[i].data);
        printf("\n");
        printf("parents:");
        scanf("%d",&(*T).nodes[i].parent);
        printf("\n");
        printf("first child:");
        scanf("%d",&(*T).nodes[i].leftchild);
        printf("\n");
    }
    (*T).nodes[0].parent=-1;
    return OK;
}

//由于ptree是定长，不能销毁，故没写destroytree函数

Status Parent(PTree T,PTNode cur_e,TElemType parent)
{
    int i;
    for (i=0;i<T.n;i++)
    {
        if (cur_e.parent==-1)
        {
            return FALSE;
        }
        else {
            parent=T.nodes[i].parent;
            return TRUE;
        }
    }
    return FALSE;
}

Status FindParent(PTree *T)
{
    int i;
    printf("Please enter the position of the node:\n");
    scanf("%d",&i);
    printf("Position of %c's parent:\n",(*T).nodes[i].data);
    printf("%d",(*T).nodes[i].parent);
    printf("\n");
    return OK;
}

Status FindChild(PTree *T)
{
    int i;
    printf("Please enter the position of the node:\n");
    scanf("%d",&i);
    printf("Position of %c's first child:\n",(*T).nodes[i].data);
    printf("%d",(*T).nodes[i].leftchild);
    printf("\n");
    return OK;
}

int main(){
    PTree T;
    InitTree(&T);
    printf("Tree initiated.\n");
    CreateTree(&T);
    printf("Tree Created.\n");
    FindParent(&T);
    FindChild(&T);
    return 0;
}