#include<iostream>
using namespace std;
int partition(int a[],int start,int end);
void quick_sort(int a[],int start,int end)
{
    if(start<end)
    {
        int piv_pos=partition(a,start,end);
        quick_sort(a,start,piv_pos-1);
        quick_sort(a,piv_pos+1,end);
    }

}
int partition(int a[],int start,int end)
{
    int i=start+1;
    int piv=a[start];
    for(int j=0;j<=end;j++)
    {
        if(a[j]<piv)
        {
            swap(a[i],a[j]);
            i+=1;
        }
    }
    swap(a[start],a[i-1]);
    return i-1;
}

int main()
{

}
