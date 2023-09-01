#include <bits/stdc++.h>
using namespace std;
int main()
{
    int check=0;
    int n=0,t=0;
    cout<<"SIZE OF MATRIX ";
    cin>>n;
    vector<int>nums(n);
    cout<<"ENTER THE ELEMENTS: ";
    for(int i=0;i<n;i++)
    cin>>nums[i];
    int k=1;
    
    for(int i=1;i<nums.size();i++)
    { 
        if(nums[i]>nums[i-1])
        {
            nums[k++]=nums[i];
        }
        
    }
    cout<<"UNIQUE ELEMENTS: ";
    for(int j=0;j<k;j++)
    {
        cout<<nums[j]<<" ";
    }
    cout<<endl;
    
}