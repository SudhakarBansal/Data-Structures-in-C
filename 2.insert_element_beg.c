#include<stdio.h>
#include<conio.h>
#define N 10
int main()
{
    int arr[N],i,ele;
    // clrscr();
    printf("Enter the array elements : ");
    for (i = 0; i < N-2 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to insert : ");
    scanf("%d",&ele);
    i = N-2;
    while(i >= 0 )
    {
        arr[i+1] = arr[i];
        i = i-1;
    }
    arr[0] = ele;
    printf("Elements are : \n");
    for ( i = 0; i < N-1; i++)
    {
        printf("\n%d",arr[i]);
    }
    
    return 0;
}
