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
typedef int SElemType;

typedef struct StackNode
{
    SElemType data;
    struct StackNode *next;
}StackNode,*LinkStackPtr;

typedef struct LinkStackPtr
{
    LinkStackPtr top;
    int count;
}LinkStack;