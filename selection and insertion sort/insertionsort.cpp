#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    for(int i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(v[i]<v[j])
            swap(v[i],v[j]);
            else 
            break;
            
        }
    }
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
}