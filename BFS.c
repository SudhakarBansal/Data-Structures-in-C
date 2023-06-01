#include <stdio.h>
#include <stdlib.h>
typedef struct Queue
{
    int size;
    int front;
    int rear;
    int *arr;
} queue;

void tranverse(queue *ptr, int t)
{
    printf("\nElements are : ");
    for (int i = t; i >= 0; i--)
    {
        printf("\n%d", ptr->arr[i]);
    }
}

int isEmpty(queue *ptr)
{
    if (ptr->front == ptr->rear)
    {
        return (1);
    }
    return 0;
}
int isFull(queue *ptr)
{
    if (ptr->rear == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void enQueue(queue *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Queue overflow....");
    }
    else
    {
        ptr->rear++;
        ptr->arr[ptr->rear] = val;
    }
}
int deQueue(queue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Queue Underflow....");
        return -1;
    }
    else
    {
        ptr->front++;
        int val = ptr->arr[ptr->front];
        return (val);
    }
}

int main()
{
    queue q;
    q.size = 400;
    q.front = q.rear = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    return 0;
}