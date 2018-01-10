//孩子兄弟表示法
#include <stdio.h>
#define MAX_TREE_SIZE 100
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef char TElemType;
typedef int Status;
typedef struct CSNode
{
    TElemType data;
    struct CSNode *firstchild,*rightsib;
} CSNode,*CSTree;