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
    cout<<"ENTER THE VALUE OF X: ";
    cin>>x;
    for (int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;;
            }

        }
    }
    
}