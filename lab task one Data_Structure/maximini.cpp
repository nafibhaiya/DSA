#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,maxi,mini;
    cout<<"Enter the elements in this array : ";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    maxi=arr[0];
    mini=arr[0];
    for(i=1;i<5;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];


        }
        if(arr[i]<mini)
        {
            mini=arr[i];

        }
    }

    cout<<maxi<<" is the biggest element"<<endl;
    cout<<mini<<" is the smallest element"<<endl;

}
