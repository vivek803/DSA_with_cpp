#include <iostream>
using namespace std;
int main(){
    int ar[]={5,6,7,8,10};
    int *ptr=ar;
    int size=sizeof(ar)/sizeof(ar[0]);
    for(int i=0;i<size;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
}