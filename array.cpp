#include<iostream>
using namespace std;
int main(){
    // int arr[5]={2,4,6,8,10};
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<endl;
    // }


    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // int arr[n]={2,4,6,8,10};
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }
    // return 0;

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The array elements are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}