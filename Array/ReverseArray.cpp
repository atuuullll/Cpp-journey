//Reverse an array with extra space
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cout<<"Enter elements: "<<endl;
//         cin>>arr[i];
//     }
//     cout<<"Original array: "<<endl;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Reversed array: "<<endl;
//     for(int i=n-1; i>=0; i--){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


//Reverse an array without using extra space
#include<iostream>
using namespace std;
void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n= sizeof(arr)/sizeof(int);
    
    int start=0, end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
    printArr(arr,n);
    return 0;
}