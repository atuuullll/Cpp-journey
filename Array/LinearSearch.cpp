#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            cout<<"Element found at index: ";
            return i;
        }
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the element to search: ";
    cin>>key;
    cout<<LinearSearch(arr,n,key);
    cout<<endl;
    return 0;
}