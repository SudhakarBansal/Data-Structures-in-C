#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
} node;

node *create(int);
node *display(node *);
int main()
{
    node *start;
    int n;
    start = NULL;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    start = create(n);
    printf("Elements are : \n");
    display(start);
    return 0;
}
node *create(int n)
{
    node *head,*p;
    int i;
    head = (node*)malloc(sizeof(node));
    head->next = NULL;
    printf("Enter information : ");
    scanf("%d",&(head->info));
    p = head;
    for ( i = 0; i < n-1; i++)
    {
        p->next = (node *)malloc(sizeof(node));
        p = p->next;
        scanf("%d",&(p->info));
        p->next = NULL;
    }
    return(head);
} 
node * display(node *head)
{
    while (head != NULL)
    {
        printf("%d->",head->info);
        head = head->next;
    }
    
}