#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef int ElemType;

typedef struct DulNode
{
    ElemType data;
    struct DuLNode *prior;
    struct DuLNode *next;
}DulNode, *DuLinkList;

