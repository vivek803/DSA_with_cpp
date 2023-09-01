#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m=0,n=0;
    cout<<"ENTER THE SIZE OF ARRAY: ";
    cin>>m>>n;
    vector<vector<int>>matrix(m,vector<int>(n));
    cout<<"ENTER THE ELEMENTS OF ARRAY: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    vector<int>v(m*n);
    int sir=0,sic=0,eir=m,eic=n,k=0;
    while(k<m*n)
    {
        int i=sir;
        int j=sic;
        cout<<"LOOP 1: ";
        
        for(j=sic;j<eic;) 
        {
            cout<<matrix[sir][j]<<" ";
            v[k++]=matrix[sir][j++];
        }
        cout<<" LOOP 2: ";
        for(i=sir+1;i<eir-1;)
        {
            cout<<matrix[i][eic-1]<<" ";
            v[k++]=matrix[i++][eic-1];

        }
        cout<<" LOOP 3: ";
        for(j=eic-1;j>sic;)
        {
            cout<<matrix[eir-1][j]<<" ";
            v[k++]=matrix[eir-1][j--];
        }
        cout<<" LOOP 4: ";
        j=sic;
        for(i=eir-1;i>sir;)
        {
            cout<<matrix[i][sic]<<" ";
            v[k++]=matrix[i--][sic];
        }
        sir++;sic++;
        eir--;eic--;
    }
    
    cout<<"\nSPIRAL ARRAY:";
    for(int i=0;i<v.capacity();i++)
    {
        cout<<v[i]<<" ";
    }
}
