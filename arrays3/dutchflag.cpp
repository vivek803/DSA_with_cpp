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
    int low=0,mid=0,high=n-1,temp=0;
    while(mid<=high){
        if(v[mid]==2) { 
            temp=v[mid];
            v[mid]=v[high];
            v[high]=temp;
            high--;
        }
        else if(v[mid]==0)
        { 
            temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;
            low++;
            mid++;

        }
        else
        {
            mid++;
        }
    }
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
}