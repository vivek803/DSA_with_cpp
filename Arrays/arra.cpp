#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,q=0,k=0;
    cin>>n>>q;
    vector<vector<int>>v1;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        vector<int>v2;
        for(int j=0;j<k;j++)
        {
            int x=0;
            cin>>x;
            v2.push_back(x);
        }
        v1.push_back(v2);

    }
    
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v1[i].size();j++)
        cout<<v1[i][j]<<" ";
        cout<<endl;
    }
    int i[q],j[q];
    for(int x=1;x<=q;x++)
    cin>>i[x]>>j[x];
    for(int x=1;x<=q;x++)
    {
        cout<<v1[i[x]][j[x]];
        cout<<endl;


    }
    
    
   
    
}