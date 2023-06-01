#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

node *top = NULL;

void tranverse(node *ptr)
{
    printf("\nElements are : ");
    while (ptr != NULL)
    {
        printf("\n%d", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(node *top)
{
    node *ptr = (node *)malloc(sizeof(node));
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

node *push(node *top, int x)
{
    if (isFull(top))
    {
        printf("\nStack overflow...");
    }
    else
    {
        node *ptr = (node *)malloc(sizeof(node));
        ptr->data = x;
        ptr->next = top;
        top = ptr;
        return (top);
    }
}
int pop(node *tp)
{
    if (isEmpty(tp))
    {
        printf("\nStack Underflow...");
    }
    else
    {
        node *n = tp;
        top = tp->next;
        int x = n->data;
        free(n);
        return (x);
    }
}

int main()
{
    top = push(top, 12);
    top = push(top, 22);
    top = push(top, 14);
    top = push(top, 45);
    top = push(top, 34);
    tranverse(top);
    int x = pop(top);
    printf("\nItem deleted is : %d", x);
    int y = pop(top);
    printf("\nItem deleted is : %d", y);
    int z = pop(top);
    printf("\nItem deleted is : %d", z);
    tranverse(top);
    return 0;
}