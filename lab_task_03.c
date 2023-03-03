#include "stdio.h"
void print_array(int arr[],int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
};
void sort(int arr[],int size)
{
    int i, j, temp, swapping;

    for (i = 1; i < size; i++)
    {
        swapping = 0;
        for (j = 0; j < size-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapping = 1;
            }
        }
        if (swapping == 0)
        {
            break;
        }
    }
};
void find_intersection(int arr1[], int arr2[],int inter[], int m, int n)
{
 int i,j,k=0;
 for (i=0;i<m;i++)
 {
     for(j=0;j<n;j++)
     {
         if(arr1[i]==arr2[j])
         {
             inter[k]=arr2[j];
             k++;
         }
     }
 }
 sort(inter,k);
 print_array(inter,k);
};
void find_union(int array1[], int array2[], int union_array[],int n1,int n2)
{
    int i,c,j,k,n3;
    for(i=0; i<n1; i++)
    {
        union_array[i]=array1[i];
    }
    n3=n1;
    for(i=0; i<n2; i++)
    {
        c=0;
        for(j=0; j<n1 && !c; j++)
        {
            if(array2[i]== array1[j])
                c=1;
        }
        if(!c)
            union_array[n3++]=array2[i];
    }
    sort(union_array,n3);
    print_array(union_array,n3);
};
int main()
{
    int n1,n2,i,j=0,num_of_inter,num_of_uni;
    printf("Input:\nInput size of the array 1:"),scanf("%d",&n1);
    int arr1[n1];
    printf("\nInput elements in array:");
    for(i=0; i<n1; i++)
        scanf("%d",&arr1[i]);
    printf("\nInput size of array 2:"),scanf("%d",&n2);
    int arr2[n2],INTERSECTION[n1+n2],UNION[n1+n2];
    printf("\nInput elements in array:");
    for(i=0; i<n2; i++)
        scanf("%d",&arr2[i]);
    printf("\nOutput:\nUnion:");
    find_union(arr1,arr2,UNION,n1,n2);
    printf("\nIntersection:");
    find_intersection(arr1,arr2,INTERSECTION,n1,n2);
    getch();
}
