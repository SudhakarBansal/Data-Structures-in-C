#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *prev;
    struct node *next;
} node;
node *head = NULL, *end = NULL;
void *create(int n)
{
    node *new;
    printf("Enter values : ");
    
    for (int i = 0; i < n; i++)
    {
        new = (node *)malloc(sizeof(node));
        scanf("%d", &(new->info));
        if (head == NULL)
        {
            head = end = new;
            head->prev = NULL;
            end->next = NULL;
        }
        else
        {
            end->next = new;
            new->prev = end;
            end = new;
            end->next = NULL;
        }
    }
}
void display()
{
    node *p = head;
    while (p != NULL)
    {
        printf("%d ", (p->info));
        p = p->next;
    }
}
int main()
{

    int n;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    create(n);
    printf("\nElements are : \n");
    display();
    return 0;
}