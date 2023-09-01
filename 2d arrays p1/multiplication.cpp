#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m1,m2,n1,n2;
    cout<<"ORDER OF FIRST ARRAY:";
    cin>>m1>>n1;
    cout<<"ORDER OF SECOND ARRAY:";
    cin>>m2>>n2;
    if(n1==m2)
    {
        int arr1[m1][n1];
        int arr2[m2][n2];
        int arr3[m1*n2];
        int arr4[m1][n2];
        cout<<"ELEMENTS OF FIRST ARRAY:"<<endl;
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n1;j++)
            {
                cin>>arr1[i][j];
            }
        }
        cout<<"ELEMENTS OF SECOND ARRAY:"<<endl;
        for(int i=0;i<m2;i++)
        {
            for(int j=0;j<n2;j++)
            {
                cin>>arr2[i][j];
            }
        }
        int sum=0;
        int k=0;
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                sum=0;
                for(int k=0;k<m2;k++)
                {
                    sum+=arr2[k][j]*arr1[i][k];
                }
                arr3[k++]=sum;
            }
        }
        k=0;
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                arr4[i][j]=arr3[k++];
            }
        }
        cout<<"ELEMENTS OF MULTIPLIED ARRAY:"<<endl;
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                cout<<arr4[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    else
    cout<<"MULTIPLICATION NOT POSSIBLE";
}