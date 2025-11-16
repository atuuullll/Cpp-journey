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

    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"The array elements are: "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }
    // return 0;

    // int arr[5]={2,4,6,8,10};
    // cout<<"The array elements are: "<<endl;
    // int i;
    // for(i=0;i<5;i++){
    //     cout<<arr[i]<<endl;
    // }
    // cout<<"The size of array is: "<<sizeof(arr)<<endl;
    // cout<<"The number of elements in array is: "<<sizeof(arr)/sizeof(arr[0])<<endl;
    // return 0;

    // int arr[] = {2, 4, 8, 12, 16};
    // cout<<"The array elements are: "<<endl;
    // int i;
    // for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"Fourth element: ";
    // cout << arr[3] << " ";
    // cout<<endl;
    // cout<<"First element: ";
    // cout << arr[0];
    // cout<<endl;
    // cout<<"Last element: ";
    // cout << arr[sizeof(arr)/sizeof(arr[0]) - 1];
    // cout<<endl;
    
    //return 0;

    //largest and smallest element in an array
    // int arr[] = {23,4,34,51,56};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<"The array elements are: "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // int largest = arr[0];
    // int smallest = arr[0];
    // for(int i = 1; i < n; i++){
    //     if(arr[i] > largest){
    //         largest = arr[i];
    //     }
    //     else
    //     smallest = arr[i];
    // }
    // cout<<"The largest element is: "<<largest<<endl;
    // cout<<"The smallest element is: "<<smallest<<endl;
    // return 0;

    // int arr[] = {2 ,4, 8, 12, 16};
    // cout<<"The array elements are: ";
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"The reversed array elements are: ";
    // for(int i=n; i>0; i--){
    //     cout<<arr[i-1]<<" ";
    // }
    // cout<<endl;
    // return 0;

    //reverse an array without using extra space
    // int arr[] = {2 ,4, 8, 12, 16};
    // cout<<"The array elements are: ";
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0; i<n/2; i++){
    //     int temp = arr[i];
    //     arr[i] = arr[n-i-1];
    //     arr[n-i-1] = temp;
    // }
    // cout<<"The reversed array elements are: ";
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // return 0;

    //reverse an array with using extra space
    // int arr[] = {2 ,4, 8, 12, 16};
    // cout<<"The array elements are: ";
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }   
    // cout<<endl;
    // int rev[n];
    // for(int i=0; i<n; i++){
    //     rev[i] = arr[n-i-1];  
    // }
    // cout<<"The reversed array elements are: ";
    // for(int i=0; i<n; i++){
    //     cout<<rev[i]<<" ";
    // }
    // cout<<endl;
    // return 0;

    //copy one array to another
    // int arr[] = {2 ,4, 8, 12, 16};
    // cout<<"The array elements are: ";
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // int copy[n];
    // for(int i=0; i<n; i++){
    //     copy[i] = arr[i];
    // }
    // cout<<"The copied array elements are: ";
    // for(int i=0; i<n; i++){
    //     cout<<copy[i]<<" ";
    // }
    // cout<<endl;
    // return 0;

    //sort an array in ascending order
    // int arr[] = {34, -2, 45, 0, 11, -9};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<"The array elements are: ";
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i] > arr[j]){
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    // cout<<"The sorted array elements in ascending order are: ";
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";  
    // }
    // cout<<endl;
    // return 0;

    //Descending order
    // int arr[] = {34, -2, 45, 0, 11, -9};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<"The array elements are: ";
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i] < arr[j]){
    //             int temp = arr[i];  
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    // cout<<"The sorted array elements in descending order are: ";
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    //return 0;

    //search an element in an array
    // int arr[] = {34, -2, 45, 0, 11, -9};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<"The array elements are: ";
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // int key;
    // cout<<"Enter the element to be searched: ";
    // cin>>key;
    // bool found = false;
    // for(int i=0; i<n; i++){
    //     if(arr[i] == key){
    //         found = true;
    //         break;
    //     }
    // }
    // if(found){
    //     cout<<"Element found in the array."<<endl;
    // }
    // else{
    //     cout<<"Element not found in the array."<<endl;
    // }
    // return 0;

    //merge two arrays
    int arr1[] = {2,4,6};
    int arr2[] = {1,3,5,7,9};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout<<"The first array elements are: ";
    for(int i=0; i<n1; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout<<"The second array elements are: ";
    for(int i=0; i<n2; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    int merged[n1+n2];
    for(int i=0; i<n1; i++){
        merged[i] = arr1[i];
    }
    for(int i=0; i<n2; i++){
        merged[n1+i] = arr2[i];
    }
    cout<<"The merged array elements are: ";
    for(int i=0; i<n1+n2; i++){
        cout<<merged[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n1+n2; i++){
        for(int j=i+1; j<n1+n2; j++){
            if(merged[i] > merged[j]){
                int temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }
    cout<<"The merged sorted array elements are: ";
    for(int i=0; i<n1+n2; i++){
        cout<<merged[i]<<" ";
    }
    cout<<endl;
    return 0;
}