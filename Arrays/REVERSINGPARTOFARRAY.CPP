#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int>v;
    int n,x;
    cout<<"NUMBER OF ELEMENTS: ";
    cin>>n;
    cout<<"ENTER THE ARRAY ELEMENTS: ";
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int i=0,j;
    cout<<"ENTER THE INDICES IN WHICH YOU WANT TO REVERSE: ";
    cin>>i>>j;
    if(i>=0 && i<n && j>=0 && j<n){ 
    for(i,j ;i<j;i++,j--){
        v[i]=v[i]+v[j];
        v[j]=v[i]-v[j];
        v[i]=v[i]-v[j];

    } 
    cout<<"RESULTANT ARRAY: ";  
    for( int i=0;i<n;i++)
    cout<<v[i]<<" ";
    }
    else
    cout<<"INVALID INDICES";


}