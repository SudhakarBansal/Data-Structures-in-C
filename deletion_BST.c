#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
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
node *inOrderPredeccessor(node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

node *delete_bst(node *root, int v)
{
    node *ipre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    // seaching the node to be deleted....
    if (v < root->data)
    {
        root->left = delete_bst(root->left, v);
    }
    else if (v > root->data)
    {
        root->right = delete_bst(root->right, v);
    }
    // Deletion Strategy....
    else
    {
        ipre = inOrderPredeccessor(root);
        root->data = ipre->data;
        root->left = delete_bst(root->left,ipre->data);
    }
        return root;    
}

int main()
{
    node *p1 = createNode(5);
    node *p2 = createNode(3);
    node *p3 = createNode(6);
    node *p4 = createNode(2);
    node *p5 = createNode(4);
    // tree structure according to program
    //       5
    //      / \
    //     3   6
    //    / \    
    //   2   4  

    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p2->right = p5;
    int n;
    inOrder(p1);
    printf("\nEnter the node you want to delete = ");
    scanf("%d", &n);
    delete_bst(p1,n);
    inOrder(p1);
    return 0;
}