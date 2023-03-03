#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x);
int main()
{

    int i, j, min_idx,temp;
    int n;
    printf("Input size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements :  ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int ele;
    printf("Element :  ");
    scanf("%d",&ele);


    for (i = 0; i < n-1; i++)
    {

        min_idx = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }

        }
        if(min_idx != i)
        {
            temp=arr[min_idx];
            arr[min_idx]=arr[i];
            arr[i]=temp;
        }
    }
    printf("Sorted Array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    int c;
    c=countOccurrences(arr,n,ele);
    printf("\nCount : %d\n",c);
}
int binarySearch(int arr[], int l, int r, int x)
{
    if (r < l)
        return -1;

    int mid = l + (r - l) / 2;


    if (arr[mid] == x)
    {
        return mid;
    }

    if (arr[mid] > x)
    {
        return binarySearch(arr, l, mid - 1, x);
    }
    else
    {
        return binarySearch(arr, mid + 1, r, x);
    }

}

int countOccurrences(int arr[], int n, int x)
{
    int ind = binarySearch(arr, 0, n - 1, x);


    if (ind == -1)
    {
        return 0;
    }

    int count = 1;
    int left = ind - 1;
    while (left >= 0 && arr[left] == x)
    {
        count++,
              left--;
    }

    int right = ind + 1;
    while (right < n && arr[right] == x)
    {
        count++;
        right++;

    }
    return count;
}
