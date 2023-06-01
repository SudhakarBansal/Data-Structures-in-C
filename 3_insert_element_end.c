#include <stdio.h>
#include <conio.h>
#define N 10
int main()
{
    int arr[N], i, ele;
    // clrscr();
    printf("Enter the elements of array : ");
    for (i = 0; i < N - 2; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to insert : ");
    scanf("%d",&ele);
    for (i = 0; i < N - 2; i++)
    {
        i = i+1;
    }
    arr[i] = ele;
    printf("\nElements of array are : ");
    for (i = 0; i < N - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}