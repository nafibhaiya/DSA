#include<iostream>
using namespace std;
int main()
{
    int n, i, a[50], j, temp;
    cout<<"Enter the Size : ";
    cin>>n;
    cout<<"Enter "<<n<<" Numbers: ";
    for(i=0; i<n; i++)
        {
        cin>>a[i];
        }
    cout<<"\nSorting the Array : ";
   int pass, flag;
  for(pass=0;pass<n-1;pass++)
    {
		flag = 0;
		for(j=0;j<(n-pass-1);j++)
        {
      	if( a[j]>a[j+1] )
      	{
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
      	}
                flag = 1;

      }
		if (flag==0)
      break;
    }
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<a[1]<<" is the second smallest number"<<endl;
   cout<<a[n-2]<< " is the second biggest number"<<endl;
    cout<<endl;
    return 0;
    }



