#include "stdio.h"
int main()
{
    int n,i,j=0,k=0;
    printf("Input:\nInput size of the array:"),scanf("%d",&n);
    printf("Input elements in array:");
    int arr[n],even[n],odd[n];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("\nOutput:\nOutput even elements in array:");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }
        else
        {
            odd[k]=arr[i];
            k++;
        }
    }
    for(i=0;i<j;i++) printf("%d ",even[i]);
    printf("\nOutput odd elements in array:");
    for(i=0;i<k;i++) printf("%d ",odd[i]);
    getch();
}
