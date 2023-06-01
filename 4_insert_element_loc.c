#include <stdio.h>
#include <conio.h>
#define N 10
int main()
{
    int arr[N], loc, i, item;
    // clrscr();
    printf("Enter the elements of array : ");
    for (i = 0; i < N - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element : ");
    scanf("%d", &item);
    printf("Enter the location of where you want to add element : ");
    scanf("%d", &loc);
    if (loc > N)
    {
        printf("array size is smaller than location...");
        // exit(0);
    }
    for (i = N - 2; i >= loc; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[loc] = item;

    printf("\nElements are : \n");
    for (i = 0; i < N; i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}