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
    quicksort(arr,0,size-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void quicksort(int arr[],int l,int h)
{
    if(l<h)
    {
        int pi=partition(arr,l,h);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,h);
    }
}
int partition(int arr[],int l,int h)
{
    int i=l-1;
    int j;
    int pivot=arr[h];
    for(j=l;j<=(h-1);j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return (i+1);
}
void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}
