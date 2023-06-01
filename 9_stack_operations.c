#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10
int stack[MAX], top = -1;
void push(int v)
{
    if (top == MAX - 1)
    {
        printf("stack is full..");
        return;
    }
    top += 1;
    stack[top] = v;
}
int pop(void)
{
    if (top == -1)
    {
        printf("stack is empty..");
        return (0);
    }
    int ele = stack[top];
    top -= 1;
    return (ele);
}
void view(void)
{
    if (top == -1)
    {
        printf("stack is empty..");
        return;
    }
    printf("Elements of stack are : ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d\t",stack[i]);
    }
}
int main()
{
    int ch, val;
    while (1)
    {
        // clrscr();
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. View stack elements");
        printf("\n4. exit");
        printf("\nEnter your choice : ");
        fflush(stdin);
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter element you want to Enter : ");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            val = pop();
            if (val != 0)
            {
                printf("Item from the top of stack : %d", val);
            }
            break;
        case 3:
            view();
            break;
        case 4:
            printf("Exiting from the stack...");
            exit(1);
        default:
            printf("Invalid Input!...");
            break;
        }
    }

    return 0;
}