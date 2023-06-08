#include<iostream>
using namespace std;

int main(){

int n, fib1=0, fib2=1, fibn;

cout<<"Enter the number of term : ";
cin>>n;
cout<<"Fibonacci Series : "<<fib1<<" "<<fib2<<" ";
for(int i=2;i<n;i++){
    fibn=fib1+fib2;
    cout<<fibn<<" ";
    fib1=fib2;
    fib2=fibn;
}
//cout<<endl;


}
