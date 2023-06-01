#include<stdio.h>
#define N 10
int main()
{
    int arr[N],i,j,temp,ele;
    for ( i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 1; i <= N-1; i++)
    {
        ele = arr[i];
        j = i-1;
        while (j>=0 && arr[j] > ele)
        {
            arr[j+1] = arr[j];
            j--;            
        }
        arr[j+1] = ele;
    }
    for ( i = 0; i < N; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}