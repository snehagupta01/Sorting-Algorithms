#include <stdio.h>
#include <stdlib.h>
//optimized bubble sort
int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("enter elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,size);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void selectionsort(int arr[],int n)
{
    int i,j,minind;
    for(i=0;i<n-1;i++)
    {
        minind=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minind])
            {
                minind=j;
            }
        }
        if(minind!=i)
        {
            swap(&arr[i],&arr[minind]);
        }
    }
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
