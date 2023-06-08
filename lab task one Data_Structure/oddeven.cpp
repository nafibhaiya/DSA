#include<iostream>
using namespace std;

int main()
{
   int arr[20],even[20],odd[20],i,j=0,k=0,size;
cout<<"Enter number of elements in the array :";
cin>>size;
cout<<"Enter "<<size<<" enter Elements in the array :"<<endl;
for(i=0;i<size;i++)
{
  cin>>arr[i];
}
  cout<<"\nStored Data in Array :";

  for(i=0;i<size;i++)
  {
  cout<<" "<<arr[i]<<" ";
  }

   for(i=0; i<size;i++)
   {
   if(arr[i]%2==0)
   {
    even[j]=arr[i];
    j++;
   }
   else
   {
   odd[k]=arr[i];
   k++;
   }
   }

  cout<<"\n\nEven Elements in Array are :: \n\n";

  for(i=0; i<j ;i++)
   {
     cout<<" "<<even[i]<<" ";
   }

  cout<<"\n\nOdd Elements in Array are :: \n\n";

  for(i=0; i<k; i++)
   {
    cout<<" "<<odd[i]<<" ";
   }


  return 0;

  }
