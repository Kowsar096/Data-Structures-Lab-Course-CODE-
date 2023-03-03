#include <stdio.h>
int binarySearch(char arr[], int l, int r, char x)
{
    if (r >= l)
    {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
    }
    return -1;
}
int main(void)
{
    char c;
    int n;
    printf("Enter the array size : ");
    scanf("%d",&n);
    char arr[n+1],x;
    printf("Enter your string with ascending order : ");
    fflush(stdin);
    gets(arr);
    printf("\nEnter the element to search : ");
    scanf("%c",&x);
    int result = binarySearch(arr, 0, n-1, x);
    (result == -1)? printf("Element is not present in array")
    : printf("Element is present at position : %d", result+1);
    getch();
}
