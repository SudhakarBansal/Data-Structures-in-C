#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node* next;
}node;
node *create(int);
node *search(node *);
int main()
{
    node *start;
    int n;
    start = NULL;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    start = create(n);

    printf("Elements are : \n");
    search(start);
    return 0;
}
node *create(int n)
{
    node *head, *p;
    int i;
    head =(node*)malloc(sizeof(node));
    head->next = NULL;
    printf("Enter information : ");
    scanf("%d",&(head->info));
    p =head;
    for ( i = 0; i < n-1; i++)
    {
        p->next = (node*)malloc(sizeof(node));
        p = p->next;
        scanf("%d",&(p->info));
        p->next = NULL;
    }
    return(head);
}
node * search(node *head)
{
    int item,loc=0;
    printf("\nEnter item you want to search... : ");
    scanf("%d",&item);
    while (head != NULL)
    {
        if (head->info == item)
        {
            printf("%d",loc+1);
            break;
        }
        loc++;
        head = head->next;
    }    
}