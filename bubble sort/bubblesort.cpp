#include <bits/stdc++.h>
using namespace std;
bool checksort(vector<int>v)
{
    bool check=true;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[i+1])
        {
            check=false;
            break;
        }

    }
    return check;
}
int main()
{
    int n=0;
    cout<<"SIZE OF ARRAY: ";
    cin>>n;
    vector<int>v(n);
    cout<<"ENTER THE ELEMENTS OF ARRAY: ";
    for(int i=0;i<n;i++)
    cin>>v[i];
    for(int i=0;i<n-1;i++)
    {
        if(checksort(v))
        break;
        else
        {
            for(int j=0;j<n-1-i;j++)
            {
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }


        }
        
    }
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    cout<<endl;

}