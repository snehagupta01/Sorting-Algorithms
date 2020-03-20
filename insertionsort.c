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
    insertionsort(arr,size);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void insertionsort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
