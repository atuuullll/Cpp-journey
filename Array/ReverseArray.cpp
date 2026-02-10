#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter elements: "<<endl;
        cin>>arr[i];
    }
    cout<<"Original array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Reversed array: "<<endl;
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}