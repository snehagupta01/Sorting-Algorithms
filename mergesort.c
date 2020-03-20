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
    mergesort(arr,0,size-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
void merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1];
    int R[n2];
    int i,j,k;
    for(i=0;i<n1;i++)
    {
        L[i]=arr[i+l];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
            {
                arr[k]=R[j];
                j++;
            }
    k++;
    }
    while(i< n1)
    {
        arr[k]=L[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        k++;
        j++;
    }
}
