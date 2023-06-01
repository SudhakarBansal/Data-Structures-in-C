#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
} node;
node *create(int n)
{
    node *head, *p;
    int i;
    head = (node *)malloc(sizeof(node));
    head->next = NULL;
    printf("\nEnter information : ");
    scanf("%d", &(head->info));
    p = head;
    for (i = 0; i < n - 1; i++)
    {
        p->next = (node *)malloc(sizeof(node));
        p = p->next;
        scanf("%d", &(p->info));
        p->next = NULL;
    }
    return head;
}
node *display(node *head)
{
    while (head != NULL)
    {
        printf("%d->", head->info);
        head = head->next;
    }
}
node *inst_beg(node *head)
{
    node *p;
    p  = (node * )malloc(sizeof(node));
    p->next = head;  
    printf("\nEnter the element you want to insert in begining :  ");
    scanf("%d",&(p->info));
    return p;
}
node *inst_end(node *head)
{
    node *new = (node *)malloc(sizeof(node));
    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new;
    new->next = NULL;
    printf("Enter the element you want to insert in end : ");
    scanf("%d",&(new->info));
    return head;
}
int main()
{
    node *start;
    int n;
    start = NULL;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    start = create(n);
    // start = inst_beg(start);
    // n++;
    start = inst_end(start);
    n++;
    printf("Elements are : \n");
    display(start);
    return 0;
}