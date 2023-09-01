#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    int n,x;
    cin>>n;
    for (int i=0;i<n;i++){ 
        cin>>x;
        v.push_back(x);

    }
    int i=0,j=n-1;
    while(i<j){

        if(v[i]==0) i++;
        if(v[j]==0) j--;
        else if(v[i]=1 && v[0]==0){
            v[i]=0;
            v[j]=1;
        }
        
        else if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
    for (int i=0;i<v.size();i++)
    cout<<v[0];
}