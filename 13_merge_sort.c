#include <stdio.h>
#define N 10
void merge(int a[], int m, int l, int h)
{
}
int main()
{
    int arr[N], i, j;
    printf("Enter the elements of array : \n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The elements of array  are : \n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}