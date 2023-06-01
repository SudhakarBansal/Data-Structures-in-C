#include<stdio.h>
#include<stdlib.h>
#define N 5
int arr[N],item;
int front,rear;
void insertion(int item)
{
    if (rear == N-1)
    {
        printf("\nOverflow");
        exit(1);
        return; 
    }
    if (front == -1 && rear == -1)
    {
        rear = 0;
        front = 0;
    }
    else
    {
        rear++;
    }   
    arr[rear] = item;
}
void deletion()
{
    if (front == -1 )
    {
        printf("\nUnderflow..");
    }
    item = arr[front];
    if (front == rear )
    {
        front = -1;
        rear = -1;
    }
    else
    {
       front++;
    }
    printf("item deleted : %d",item);        
}
void display()
{
    printf("\nElements are : \n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
int main()
{
    front = rear = -1;
    insertion(10);
    insertion(11);
    display();
    deletion();
    display();
    return 0;
}