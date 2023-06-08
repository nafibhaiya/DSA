#include<iostream>
using namespace std;
int main()
{
   int a[20],b[20],d[60],i,n,o,l,m;

   cout<<"Enter the size of the first array : ";
   cin>>n;
   cout<<"Enter Elements in 1st Array: ";
   for(i=0;i<n;i++)
   {
   cin>>a[i];
   }
      cout<<"Enter the size of the 2nd array : "<<endl;
   cin>>o;
   cout<<"Enter Elements in 2nd Array: ";
   for(i=0;i<o;i++)
   {
   cin>>b[i];
   }
   l=n+o;
   cout<<"Elements of Array After Merge: ";
   for(i=0;i<o;i++)
   {
    d[i]=a[i];
    d[i+n]=b[i];
   }
   for(i=0;i<l;i++)
   {
   cout<<d[i]<<" ";
   }
   /*cout<<"\n array in reverse order : " ;
    for(i=l-1;i<l;i--)
   {
   cout<<d[i]<<" ";
   }*/
 }
