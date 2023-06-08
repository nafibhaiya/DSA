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
    cout<<"\nSorting in ascending the Array : ";
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

    cout<<"\nDecending order : ";
     for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" " ;

    }
}

