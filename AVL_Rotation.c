#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    int height;
} node;

int getheight(node *ptr)
{
    if (ptr == NULL)
        return 0;
    return ptr->height;
}

node *createNode(int key)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = key;
    n->left = NULL;
    n->right = NULL;
    n->height = 1;
    return n;
}

int getBalanceFactor(node *ptr)
{
    if (ptr == NULL)
        return 0;
    return (getheight(ptr->left) - getheight(ptr->right));
}

node *rightRotate(node *y)
{
    node *x = y->left;
    node *T2 = x->right;
    x->right = y;
    y->left = T2;
    y->height = max(getheight(y->right), getheight(y->left)) + 1;
    x->height = max(getheight(x->right), getheight(x->left)) + 1;
    return x;
}

node *leftRotate(node *x)
{
    node *y = x->right;
    node *T2 = y->left;
    y->left = x;
    x->right = T2;
    y->height = max(getheight(y->right), getheight(y->left)) + 1;
    x->height = max(getheight(x->right), getheight(x->left)) + 1;
    return y;
}

void insert_BST(node *nod, int key)
{
    if (nod == NULL)
        return (createNode(key));
    if (nod->data > key)
        nod->left = insert_BST(nod->left, key);
    else if (root->data < key)
        nod->right = insert_BST(nod->right, key);
    return nod;
    
    nod->height = max(getheight(nod->right), getheight(nod->left)) + 1;
    int bf = getBalanceFactor(nod);
}

int main()
{

    return 0;
}