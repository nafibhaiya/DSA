#include<iostream>
using namespace std;
int main()
{
    int arr[100], i,n;
    cout<<"Enter  Array size: ";
    cin>>n;
    cout<<"Enter the elements of this array : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        }
    cout<<"\nEnter Element to Insert: ";
    n++;
    cin>>arr[n-1];

    cout<<"So the elements are :"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}
