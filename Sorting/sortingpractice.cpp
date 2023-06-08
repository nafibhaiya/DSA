#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}
void selectionsort(int a[],int n){
int i,j,mini;
for(i=0;i<n-1;i++){
    mini=i;
    for(j=i+1;j<n;j++){
        if(a[j]<a[mini])
            mini=j;
    }
    if(mini!=i)
        swap(a[mini],a[i]);
}

}
void insertionsort(int a[],int n){
int i,j,key;
for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){

            a[j+1]=a[j];
            j--;}
        a[j+1]=key;

    }
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main(){
int N,a[12],i;
cout<<"Enter the size of the array :";
cin>>N;
cout<<"Enter the elements of the array : ";
for(i=0;i<N;i++){
    cin >>a[i];
}
cout<<"The array : "<<endl;
for(i=0;i<N;i++){
    cout<<a[i]<<" ";
}
insertionsort(a,N);
cout<<"\ninsertion :"<<endl;
printArray(a,N);
//selectionsort(a,N);
//cout<<"\nselection : "<<endl;
//printArray(a,N);
//bubblesort(a,N);
//cout<<"\nbubble : "<<endl;
//printArray(a,N);



}
