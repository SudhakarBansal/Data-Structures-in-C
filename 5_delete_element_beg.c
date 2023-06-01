#include <stdio.h>
#include <conio.h>
#define N 10
int main()
{
    int arr[N], i;
    // clrscr();
    printf("Enter the array elements : ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements of array are : \n");
    for (i = 0; i < N-1 ; i++)
    {
        arr[i] = arr[i + 1];
        printf("%d ", arr[i]);
    }
    return 0;
}