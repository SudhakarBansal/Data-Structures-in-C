#include <stdio.h>

void printarray(int *arr, int n)
{
    printf("\nELements of array are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l + 1;
    int j = h;
    int temp;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    temp = arr[l];
    arr[l] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(arr, low, high); // index of pivot element after partioning
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int main()
{
    int A[] = {3,5,2,13,12};
    int n = 5;
    printarray(A, n);
    quickSort(A, 0, n - 1);
    printarray(A, n);
    return 0;
}