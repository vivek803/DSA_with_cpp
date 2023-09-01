#include <iostream>
#include <vector>
using namespace std;
void input(vector <int>&v){
    int n,x;
    cout<<"ARRAY SIZE: ";
    cin>>n; 
    cout<<"ARRAY ELEMENTS: ";
    for( int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    return;
        

}
void show(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
}


void reversepart(vector<int>&v,int i,int j){
    while(i<j){
        v[i]=v[i]+v[j];
        v[j]=v[i]-v[j];
        v[i]=v[i]-v[j];
        i++;
        j--;
    }
}
int main(){
    vector<int>v;
    input(v);
    cout<<"GIVEN ARRAY: ";
    show(v);
    int k;
    cout<<"Enter k: ";
    cin>>k;
    k=k%(v.size());
    reversepart(v,0,v.size()-1-k);
    reversepart(v,v.size()-k,v.size()-1);
    reversepart(v,0,v.size()-1);
    cout<<"ARRAY AFTER ROTATION: ";
    show(v);
}

