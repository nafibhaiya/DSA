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
    cout<<"unique elements are : "<<endl;
    //for unique elements
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if (arr[i] == arr[j])
               break;
        }
        if (i == j)
        cout << arr[i] << " ";
    }


}



