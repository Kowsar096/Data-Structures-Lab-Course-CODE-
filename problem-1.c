#include<stdio.h>
void value(int [], int, int);
int main()
{
    int a[200];
    int size,i,sum;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter Array element: ");
    for(i=0; i<size; i++)
        scanf("%d",&a[i]);

    printf("Sum : ");
    scanf("%d",&sum);
    value(a,5,sum);
}

void value(int a[], int n, int sum)
{
    int i,j,k=0;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if((a[i]+a[j])==sum)
            {
                printf("%d + %d = %d\n",a[i],a[j],sum);
                k=1;
            }
        }
    }
    if(k==0)
    printf("Not found ");
}
