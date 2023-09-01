#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m ,n;
    cout<<"ENTER THE ORDER OF ARRAY: ";
    cin>>m>>n;
    int ar1[m][n];
    int ar2[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar1[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            ar2[j][i]=ar1[i][j];
        }
    }
    cout<<"TRANSPOSE OF ARRAY\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ar2[i][j]<<" ";
        }
        cout<<endl;
    }
}