#include<iostream>
using namespace std;
void Swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int Partition(int arr[],int l,int r)
{
    int pivot=arr[r];
    int i=l-1;
    for(int j=l; j<r; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            Swap(arr,i,j);
        }
    }
    Swap(arr,i+1,r);
    return i+1;
}
void quickSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi=Partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}
int main()
{
    int arr[]= {6,3,9,5,2,8,7};
    quickSort(arr,0,6);
    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
