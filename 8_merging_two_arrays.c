#include <stdio.h>
#include <conio.h>
#define N 10

void merge_array(int a1[], int a2[], int a3[])
{
    int i = 0, j = 0, k = 0;
    while (i < N && j < N)
    {
        if (a1[i] < a2[j])
        {
            a3[k] = a1[i];
            i++;
        }
        else
        {
            a3[k] = a2[j];
            j++;
        }
        k++;
    }
    while (i < N)
    {
        a3[k] = a1[i];
        i++;
        k++;
    }
    while (j < N)
    {
        a3[k] = a2[j];
        j++;
        k++;
    }
}
int main()
{
    int arr[N], arr2[N], arr3[N + N], i;
    // clrscr();
    printf("Enter 10 elements for array 1 : ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter 10 elements for array 2 : ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr2[i]);
    }
    merge_array(arr, arr2, arr3);
    printf("Elements of merged array are : \n");
    for (i = 0; i < N + N; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}