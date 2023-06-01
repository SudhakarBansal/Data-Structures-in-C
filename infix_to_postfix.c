#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Stack
{
    int size;
    int top;
    char *arr;
} Stk;

int isEmpty(Stk *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(Stk *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}
void push(Stk *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("\nStack overflow....");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(Stk *ptr)
{
    if (isEmpty(ptr))
    {
        printf("\nStack Underflow....");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int stacktop(Stk *ptr)
{
    return (ptr->arr[ptr->top]);
}

int precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    return 0;
}

int isoperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    return 0;
}

//
char *InfixToPostfix(char *infix)
{
    Stk *sp = (Stk *)malloc(sizeof(Stk));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0; // Track infix traversal
    int j = 0; // Track postfix addition
    while (infix[i] != '\0')
    {
        if (!isoperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stacktop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infix = "a-b+t/6";
    printf("\nPostfix expression is : %s", InfixToPostfix(infix));
    return 0;
}