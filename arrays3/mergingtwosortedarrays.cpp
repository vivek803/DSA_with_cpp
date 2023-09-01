/*THIS IS MERGING TWO SORTED ARRAY SUCH A NEW ARRAY GETS FILLED IN SORTED ORDER*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    vector<int>v1;
    vector<int>v2;
    int n1,n2,x;
    cin>>n1>>n2;
    cout<<"ARRAY 1:";
    for (int i=0;i<n1;i++){ 
        cin>>x;
        v1.push_back(x);

    }
    cout<<"ARRAY 2:";
    for (int i=0;i<n2;i++){ 
        cin>>x;
        v2.push_back(x);
    }
    vector<int>v3(n1+n2);
    int i=0,j=0,k=0;
    
    while(i<n1 && j<n2)
    {
        if (v1[i]<v2[j]){
            v3[k]=v1[i];
            i++;
            
        }
        else if  (v1[i]>v2[j]){
            v3[k]=v2[j];
            j++;
        }
        else{
            v3[k]=v1[i];
            v3[k+1]=v2[j];
            i++;
            j++;
            k++;
        }
        k++;
    }
    if(i==n1)
    {
        for(;j<n2;j++)
        v3[k++]=v2[j];
    }
    else
    {
        for(;i<n1;i++)
        v3[k++]=v1[i];
    }
    cout<<"RESULTANT ARRAY: ";
    for(int i=0;i<n1+n2;i++)
    cout<<v3[i]<<" ";
}