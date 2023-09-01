#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, si=0,en=0,sum=0;;
    bool check=false;
    cin>>n;
    vector<int>height(n);
    for(int i=0;i<n;i++) 
    cin>>height[i];
    for(int i=0;i<n-1;i++)
    {
        if(height[i]>height[i+1])
        {
            si=i;
            break;
        }
    }
    for(int j=si+1;j<n;j++)
    {
        check=false;
        if(height[si]<=height[j])
        {
            en=j;
            for(int k=si+1;k<en;k++)
            {
                cout<<height[si]<<" - "<<height[k]<<endl;
                sum+=height[si]-height[k];
                cout<<"SUM: "<<sum<<endl;
            }
            si=en;
        }
        }
        if(en==si)
        {
            for(int i=n-1;i>en;i--)
            {
                if(height[i]>height[i-1])
                {
                    si=i;
                    break;
                }
            }
            for(int j=si-1;j>=en;j--)
            {
                if(height[si]<=height[j])
                {
                    en=j;
                    cout<<"START INDEX: "<<si<<"\tEND INDEX: "<<en<<endl;
                    for(int k=si-1;k>en;k--)
                    {
                        cout<<height[si]<<" - "<<height[k]<<endl;
                        sum+=height[si]-height[k];
                        cout<<"SUM: "<<sum<<endl;
                    }
                    si=en;
                }   
            }
        }
        
        return sum;
}

