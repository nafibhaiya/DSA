#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void knapSack(int wt[], int p[], int n, int m)
{
    int i, w;

    int k[n+1][m+1];
    for(i=0; i<(n+1); i++)
    {
        for(w=0; w<(m+1); w++)
        {
            if(i == 0 || w == 0)
            {
                k[i][w] = 0;
            }
            else if(wt[i] <= w)
            {
                k[i][w] = max(k[i-1][w], k[i-1][w-wt[i]] + p[i]);
            }
            else
            {
                k[i][w] = k[i-1][w];
            }
        }
    }
    cout<<"\n\nThe Maximum profit Is: "<<k[n][m]<<endl;

    cout << "Chosen Items are: ";
    int j = m;
    for(int i=n; i>=1; i--)
    {
        if(k[i][j] != k[i-1][j])
        {
            cout << i << " ";
            j -= wt[i];
        }
    }
}

int main()
{
    int n,m;
    cout<<"How many items?: ";
    cin>>n;

    cout<<"\nInsert the amount of highest capacity: ";
    cin>>m;

    int p[n+1];
    int wt[n+1];

    cout<<"\n\nInsert the weight of each item: \n\n";
    for(int i=1; i<(n+1); i++)
    {
        cout<<"Weight of Item "<<i<<" is: ";
        cin>>wt[i];
    }
    cout<<"\n\nInsert the profit value for every item: \n\n";
    for(int i=1; i<(n+1); i++)
    {
        cout<<"Profit value for item "<<i<<" is: ";
        cin>>p[i];
    }
    knapSack(wt, p, n, m);
    return 0;
}

