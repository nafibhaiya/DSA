#include<iostream >
using namespace std;
int main()
{
    int arr[100];
    int n,i,j;

    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : " << " " << endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i] ;
    }
    cout<<"--------------------------------------------"<<endl;
    cout<<"All the elements of the array : " <<endl ;
    for (i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"--------------------------------------------------------"<<endl;
    //for duplicate elements are
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
             
                cout<<"duplicate elements are : "<< arr[j]<<" " <<endl;
        }
    }
    return 0;
    }


