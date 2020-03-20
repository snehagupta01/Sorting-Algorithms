#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,size);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void bubblesort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void swap(int *x,int *y)
{
 int t=*x;
 *x=*y;
 *y=t;
}
