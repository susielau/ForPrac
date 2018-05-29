void PreOrderTraverse(BiTree T) {
    if (T == NULL) {
        return;
    }
    printf("%c", T->data);
    PreOrderTraverse(T->lchild);
    PreOrderTraverse(T->rchild);
}

void InOrderTravese(BiTree T) {
    if (T == NULL) {
        return;
    }
    InOrderTravese(T->lchild);
    printf("%c",T->data);
    InOrderTravese(T->rchild);
}

void PostOrderTraverse(BiTree T) {
    if (T == NULL) {
        return;
    }
    PostOrderTraverse(T->lchild);
    PostOrderTraverse(T->rchild);
    printf("%c",T->data);
}