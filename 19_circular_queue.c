#include<stdio.h>
#include<stdlib.h>
#define N 5
int arr[N] ,front,rear,item;
void insert(int item)
{
    if (front == 0 && rear == N-1 || front == (rear+1))
    {
        printf("overflow");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (front == (N-1))
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
   arr[rear] = item;
}
void delete()
{
    if (front == -1)
    {
        printf("Queue is empty...");
        return;
    }
    item = arr[front];
    if (front ==rear)
    {
        front = rear = -1;
    }
    else if (front == N-1)
    {
        front == 0;
    }
    else
    {
        front++;
    }
    printf("\nitem deleted : %d",item);    
}
int main()
{
    front = rear = -1;
    insert(10); 
    insert(11); 
    insert(12); 
    delete();
    delete();
    delete();
    insert(13); 
    insert(14); 
    insert(15); 
    insert(16); 
    insert(17); 
    delete();
    delete();
    delete();
    delete();
    delete();
    delete();
    return 0;
}