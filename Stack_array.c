#include <stdio.h>
#include <stdlib.h>
typedef struct Stack
{
    int size;
    int top;
    int *arr;
} stk;

void tranverse(stk *ptr,int t)
{
    printf("\nElements are : ");
    for (int i = t; i >=0; i--)
    {
        printf("\n%d",ptr->arr[i]);
    }
}

int isEmpty(stk *ptr)
{
    if (ptr->top == -1)
    {
        return (1);
    }
    return 0;
}
int isFull(stk *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(stk *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow....");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(stk *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow....");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return (val);
    }
}

int main()
{
    stk *s = (stk *)malloc(sizeof(stk));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Stack created successfully...\n");
    push(s, 10);
    push(s, 11);
    push(s, 12);
    push(s, 13);
    push(s, 14);
    push(s, 15);
    push(s, 16);
    push(s, 17);
    push(s, 18);
    push(s, 19);
    tranverse(s,s->top);
    int x = pop(s);
    printf("\nItem deleted is : %d", x);
    int y = pop(s);
    printf("\nItem deleted is : %d", y);
    int z = pop(s);
    printf("\nItem deleted is : %d", z);
    tranverse(s,s->top);
    return 0;
}