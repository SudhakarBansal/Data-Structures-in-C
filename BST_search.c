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

// node *search_BST(node *root, int key)                    // With recurssion
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }
//     else if (root->data == key)
//     {
//         return root;
//     }
//     else if (root->data > key)
//     {
//         return search_BST(root->left, key);
//     }
//     else
//     {
//         return search_BST(root->right, key);
//     }
// }

// Without recursion
node *search_BST(node *root, int key)
{
    while (root != NULL)
    {
        if (root->data == key)
        {
            return root;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

int main()
{
    node *p1 = createNode(5);
    node *p2 = createNode(3);
    node *p3 = createNode(6);
    node *p4 = createNode(2);
    node *p5 = createNode(4);
    node *p6 = createNode(8);

    // tree structure according to program
    //       5
    //      / \
    //     3   6
    //    / \   \ 
    //   2   4   8

    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p2->right = p5;
    p3->right = p6;

    node *n = search_BST(p1, 4);

    inOrder(p1);
    if (n != NULL)
    {
        printf("\nElement found : %d", n->data);
    }
    else
    {
        printf("\nElement not found...");
    }

    return 0;
}