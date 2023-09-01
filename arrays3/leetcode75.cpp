#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int>& nums) {
        int n=nums.size();
        int z=0,o=0,t=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) z++;
            if(nums[i]==1) o++;
            if(nums[i]==2) t++;

        }
        cout<<z<<o<<t<<endl;
        for(int i=0;i<n;i++)
        {
            
            if(i<z) nums[i]=0;
            else if(i>=z && i<o+z) nums[i]=1;
            else  nums[i]=2;
        }
        
    }
    int main(){
    vector<int>v;
    int n,x;
    cin>>n;
    for (int i=0;i<n;i++){ 
        cin>>x;
        v.push_back(x);

    }
    sortColors(v);
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    }