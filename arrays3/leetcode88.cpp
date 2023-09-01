#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n1,n2,x;
    cin>>n1>>n2;
    vector<int>v1(n1+n2);
    vector<int>v2(n2);
    cout<<"ARRAY 1:";
    for (int i=0;i<n1;i++){ 
        cin>>v1[i];

    }
    for (int i=0;i<(n1+n2);i++)
    cout<<v1[i]<<" ";
    cout<<endl;
    cout<<"ARRAY 2:";
    for (int i=0;i<n2;i++){ 
        cin>>v2[i];
    }
     for (int i=0;i<n2;i++)
    cout<<v2[i]<<" ";
    cout<<endl;
    int i=n1-1,j=n2-1,k=n1+n2-1;
    cout<<i<<j<<k<<endl;
    while(k>=0 && i>=0 && j>=0)
    {
        if(v1[i]<v2[j])
        {
            v1[k]=v2[j];
            j--;
            
        }
        else if(v1[i]>v2[j])
        {
            v1[k]=v2[i];
            i--;
        }
        else
        {
            v1[k--]=v1[i];
            v1[k]=v2[j];
            i--;
            j--;
        }
        cout<<v1[k]<<endl;

        k--;
    }
    if(j<0){
        for(;i>=0;i--)
        v1[k--]=v1[i];
    }
    else{
        for(;j>=0;j--)
        v1[k--]=v2[j];
    }
    for (int i=0;i<(n1+n2);i++)
    cout<<v1[i]<<" ";
    
}
