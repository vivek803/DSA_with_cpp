#include <bits/stdc++.h>
using namespace std;
void display(vector<vector<int>>v)
{
    int m=v.size();
    int n=v[0].size();
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}
void transpose(vector<vector<int>>&v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            v[i][j]=v[i][j]+v[j][i];
            v[j][i]=v[i][j]-v[j][i];
            v[i][j]=v[i][j]-v[j][i];
        }
    }
}
void rotate(vector<vector<int>>&v)
{
    int n=v[0].size();
    transpose(v);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            v[i][j]=v[i][j]+v[i][n-1-j];
            v[i][n-1-j]=v[i][j]-v[i][n-1-j];
            v[i][j]=v[i][j]-v[i][n-1-j];
        }
    }


}
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF ARRAY: ";
    cin>>n;
    vector<vector<int>>v1(n,vector<int>(n));
    vector<vector<int>>v2(n,vector<int>(n));
    cout<<"ELEMENTS OF FIRST MATRIX\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v1[i][j];
        }
    }
    cout<<"ELEMENTS OF SECOND MATRIX\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v2[i][j];
        }
    }
    bool check=0;
    for (int i=1;i<=3;i++)
    {
        rotate(v1);
        if(v1==v2)
        {
            check=1;
            display(v1);
            break;
        }
    }
    cout<<"RESULT: "<<check;
}
    