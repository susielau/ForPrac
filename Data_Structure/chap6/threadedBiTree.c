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

typedef enum {Link, Thread} PointerTag;
//Link == 0 表示指向左右孩子的指针
//Thread == 0 表示指向前驱或者后继的线索

typedef struct BiThrNode {
    TElemType data;
    struct BiThrNode *lchild, *rchild;
    PointerTag LTag;
    PointerTag RTag;
} BiThrNode, *BiThrTree;

BiThrTree pre;

void InThreading(BiThrTree p) {
    if (p) {
        InThreading(p->lchild);
        if (!p->lchild) {
            p->LTag = Thread;
            p->lchild = pre;
        }

        if (!pre->rchild) {
            pre->RTag = Thread;
            pre->rchild = p;
        }

        pre = p;
        InThreading(p->rchild);
    }
}

void InOrderTraverse_Thr(BiThrTree T) {
    BiThrTree p;
    p = T->lchild;

    while (p != T) {
        while (p->LTag == Link) {
            p = p->lchild;
        }

        printf("%c",p->data);
        while (p->RTag == Thread && p->rchild != T) {
            p = p->rchild;
            printf("%c",p->data);
        }

        p = p->rchild;
    }
}