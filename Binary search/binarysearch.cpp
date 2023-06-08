#include<iostream>
using namespace std;
int binarySearch(int arr[], int left, int right, int num)
{
    if (left <= right)
    {
        int mid = (left + right)/2;
        if (arr[mid] == num)
            return mid;
        if (arr[mid] > num)
            return binarySearch(arr, left, mid-1, num);
        if (arr[mid] < num)
            return binarySearch(arr, mid+1, right, num);
    }
    return -1;
}
int main(void)
{
    int arr[] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
    cout<<"The array is : ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    int n = sizeof(arr)/ sizeof(arr[0]);
    int num;
    cout << "\nEnter the number to search:";
    cin >> num;
    int index = binarySearch (arr, 0, 9, num);
    if(index == -1)
    {
        cout<< num <<" is not present in the array";
    }
    else
    {
        cout<< num <<" is present at index "<< index <<" in the array";
    }
    return 0;
}
