#include <stdio.h>
void merge(int arr[],int low,int mid,int high)
{
    int i=low;
    int j=mid+1;
    int k=low;
    int b[high+1];
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            b[k++]=arr[i++];
        }
        else
        {
            b[k++]=arr[j++];
        }
    }
    while(i<=mid)
    {
        b[k++]=arr[i++];
    }
    while(j<=high)
    {
        b[k++]=arr[j++];
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=b[i];
    }
}
void mergesort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\n");
}
void main()
{
    int arr[7]={50,30,80,20,10,15,90};
    printf("Initial array elements : ");
    printArray(arr,7);
    printf("After sorting : ");
    mergesort(arr,0,6);
    printArray(arr,7);
}