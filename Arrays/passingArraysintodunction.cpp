
#include <iostream>
using namespace std;
void show(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


int main(){
    cout<<"ENTER THE SIZE OF ARRAY: ";
    int n;

    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS OF ARRAY: ";
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"ARRAY BEFORE MAKING CHANGES:";
    show(arr,n);
    change(arr,n);
    cout<<"ARRAY AFTER MAKING CHANGES:";
    show(arr,n);


}
void change(int *arr, int size){
    arr[0]=5;
    arr[1]=10;
}
