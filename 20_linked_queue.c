#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *link;
} node;
node *front, *rear;
int item;
void insert(int item)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        printf("Overflow...");
        return;
    }
    temp->info = item;
    temp->link = NULL;
    if (front == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->link = temp;
        rear = temp;
    }
}
void delete()
{
    node *temp;
    if (front == NULL)
    {
        printf("underflow..");
        return;
    }
    item = front->info;
    if (front == rear)
    {
        temp = front;
        front = rear = NULL;
    }
    else
    {
        temp = front;
        front = front->link;
    }
    free(temp);
    printf("\nItem deleted : %d\n",item);
}

int main()
{
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