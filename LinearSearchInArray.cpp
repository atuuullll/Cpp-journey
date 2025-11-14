#include<iostream>
using namespace std;
int LinearSearch(int *arr, int n, int key){
    for(int i=0; i<n;i++){
        if(arr[i]==key){
            cout<<"Element found at index: ";
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]= {2,4,6,8,10,12,14,16};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    cout<< LinearSearch(arr,n,key);
    cout<<endl;
    return 0;
}