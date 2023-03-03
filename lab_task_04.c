#include "stdio.h"
int main()
{
    int n,i,j,max,min;
    printf("Input:\nInput size of the array 1:");
    scanf("%d",&n);
    int arr[n];
    printf("\nInput elements in array 1:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max = min = arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
            max = arr[i];
        else min = arr[i];
    }
    printf("\nOutput:\nDifference between Max and Min:%d",max-min);
    getch();
}
