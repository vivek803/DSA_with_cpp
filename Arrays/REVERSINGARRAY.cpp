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
    for(int i=0;i<v.size();i++){
        int j=v.size()-1-i;
        if(i<j){ 
        v[i]=v[i]+v[j];
        v[j]=v[i]-v[j];
        v[i]=v[i]-v[j];
        }

    }
    cout<<"REVERSED ARRAY: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}