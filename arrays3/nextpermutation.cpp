#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int pi=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(v[i]<v[i+1])
        {
            pi=i;
            break;
        }
    }
    if(pi==-1)
    {
       reverse (v.begin(),v.end());
    }
    else
    {
        reverse(v.begin()+(pi+1),v.end());
        for(int i=pi+1;i<n;i++)
        {
            if(v[pi]<v[i])
            {
                v[i]=v[pi]+v[i];
                v[pi]=v[i]-v[pi];
                v[i]=v[i]-v[pi];
                break;
            }
        }

    }
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}