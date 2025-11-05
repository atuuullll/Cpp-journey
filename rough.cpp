#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int arr[] = {2, 4, 8, 12, 16};
    cout<<"The array elements are: "<<endl;
    int i;
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Fourth element: ";
    cout << arr[3] << " ";
    cout<<endl;
    cout<<"First element: ";
    cout << arr[0];
    cout<<endl;
    cout<<"Last element: ";
    cout << arr[sizeof(arr)/sizeof(arr[0]) - 1];
    cout<<endl;
    return 0;
}   