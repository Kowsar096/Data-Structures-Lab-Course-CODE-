#include "stdio.h"
int find_big_element(int n,int m)
{
    if (n>m)
        return n;
    else
        return m;
};
int find_small_element(int m,int n)
{
    if(m<n) return m;
    else return n;
}
int main()
{
    int n,i,j,dif;
    printf("Input:\nInput size of the array: "),scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter Array Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        arr2[i] = 0;
    }
    printf("\nOutput:\nOriginal Array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nReversed Array:");
    for(j=n-1,i=0;j>=0,i<n;j--,i++)
    {
        arr2[i]=arr1[j];

    }
    for(i=0;i<n;i++) printf("%d ",arr2[i]);
    printf("\nDifference:");
    for(i=0;i<n;i++)
    {
        dif = find_big_element(arr1[i],arr2[i]) - find_small_element(arr1[i],arr2[i]);
        printf("%d ",dif);
    }
    getch();
    return 0;
}
