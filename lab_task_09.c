#include <stdio.h>
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
};
int smallest(int a[],int num)
{
    int small,i;
    small = a[0];

    for (i = 0; i < num; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
        }
    }
    return small;
};
void uniq(int arr[],int Size)
{
    int Count = 0,i,j,count = 0,FreqArr[Size];

    for (i = 0; i < Size; i++)
    {
        Count = 1;
        for(j = i + 1; j < Size; j++)
        {
            if(arr[i] == arr[j])
            {
                Count++;
                FreqArr[j] = 0;
            }
        }
        if(FreqArr[i] != 0)
        {
            FreqArr[i] = Count;
        }
    }

    printf("\nSorted Array with unique elements:");
    for (i = 0; i < Size; i++)
    {
        if(FreqArr[i] == 1)
        {
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\nThe total number of unique elements:%d",count);

};
int main()
{
    int array[100], n, c, d, swap;

    printf("Array size:");
    scanf("%d", &n);

    printf("Array elements:", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    for (c = 0 ; c < n - 1; c++)
    {
        for (d = 0 ; d < n - c - 1; d++)
        {
            if (array[d] < array[d+1])
            {
                swap       = array[d];
                array[d]   = array[d+1];
                array[d+1] = swap;
            }
        }
    }
    printf("Sorted Array in Descending order:");

    for (c = 0; c < n; c++)
        printf("%d ", array[c]);
    uniq(array,n);
    printf("\nRange of array elements:(%d,%d)",smallest(array,n),largest(array,n));
    getch();
}

