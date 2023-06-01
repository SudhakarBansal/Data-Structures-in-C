#include<stdio.h>
#include<conio.h>
#define N 10
int main()
{
    int arr[N], i, ind;
    // clrscr();
    printf("Enter the elements of array : ");
    for (i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the location of element you want to delete : ");
    scanf("%d",&ind);
    for ( i = ind; i < N; i++)
    {
        arr[i] = arr[i+1];
    }
    printf("Elements of array are : \n");
    for (i = 0; i < N-1; i++)
    {
        printf("%d ",arr[i]);
    }

            
    return 0;
}