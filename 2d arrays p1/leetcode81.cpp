#include <bits/stdc++.h>
using namespace std;
int main()
{
    int check=0;
    int n=0,t=0;
    cout<<"SIZE OF MATRIX";
    cin>>n;
    vector<int>v(n);
    cout<<"ENTER THE ELEMENTS: ";
    for(int i=0;i<n;i++)
    cin>>v[i];
    cout<<"ENTER THE TARGET: ";
    cin>>t;
    int max=v[0],index=0;
    for(int i=0;i<n;i++)
    {
        if(max<v[i])
        {
            max=v[i];
            index=i;
            break;
        }
    }
    cout<<max<<"\tindex: "<<index;
    if(t==v[index])
    check=1;
    else if(t>=v[0] && t<v[index])
    {
        for(int i=1;i<index;i++)
        {
            check=1;
            break;
        }
    }
    else if(t<v[0]&& t<=v[n-1])
    {
        for(int i=n-1;i>index;i--)
        {
            check=1;
            break;
        }
    }
    cout<<check;


}