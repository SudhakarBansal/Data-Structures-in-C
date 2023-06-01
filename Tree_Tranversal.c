#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} node;

node *createNode(int d)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = d;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

void inOrder(node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
void preOrder(node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}
int main()
{
    node *p1 = createNode(4);
    node *p2 = createNode(1);
    node *p3 = createNode(6);
    node *p4 = createNode(5);
    node *p5 = createNode(2);

    // tree structure according to program
    //       4
    //      / \
    //     1   6
    //    / \  
    //   5   2

    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p2->right = p5;

    preOrder(p1);
    printf("\n");
    postOrder(p1);
    printf("\n");
    inOrder(p1);
    return 0;
}