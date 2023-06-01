#include <stdio.h>
#include<conio.h>
#define N 10
int main()
{
    int arr[N], i;
    // clrscr();
    printf("Enter %d elements for an array : \n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nElements are : \n");
    for (i = 0; i < N; i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}