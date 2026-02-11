// C++ program to implement binary search algorithm
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the element to search: ";
    cin>>key;
    int start=0, end=n-1;
    while(start<=end){
        int mid = (start + end) /2;
        if(arr[mid]==key){
            cout<<"Element found at index: "<<mid<<endl;
            return 0;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}