#include<stdio.h>
#include<conio.h>
#define N 10
int main()
{
    int arr[N],i;
    // clrscr();
    printf("Enter the elements of a array : ");
    for ( i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements of a array are : ");
    for ( i = 0; i < N-1; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}