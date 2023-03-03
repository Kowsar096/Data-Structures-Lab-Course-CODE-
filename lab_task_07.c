#include <stdio.h>
int LS(char arr[], char value, int index, int n)
{
    int pos = 0;

    if(index >= n)
    {
        return 0;
    }

    else if (arr[index] == value)
    {
        pos = index + 1;
        return pos;
    }

    else
    {
        return LS(arr, value, index+1, n);
    }
    return pos;
}

int main()
{
    int n, pos, m = 0;
    printf("\nEnter the total elements in the array  ");
    scanf("%d", &n);
    char arr[n+1],value;
    printf("\nEnter the array elements\n");
    fflush(stdin);
    gets(arr);
    printf("\nEnter the element to search  ");
    scanf("%c",&value);
    pos =  LS(arr, value, 0, n);
    if (pos != 0)
    {
        printf("\nElement found at position : %d ", pos);
    }
    else
    {
        printf("\nElement not found");
    }
    getch();
}
