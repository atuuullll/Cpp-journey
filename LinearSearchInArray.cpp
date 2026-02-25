// #include<iostream>
// using namespace std;
// int LinearSearch(int *arr, int n, int key){
//     for(int i=0; i<n;i++){
//         if(arr[i]==key){
//             cout<<"Element found at index: ";
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]= {2,4,6,8,10,12,14,16};
//     int n= sizeof(arr)/sizeof(int);
//     int key;
//     cout<<"Enter the element to be searched: ";
//     cin>>key;
//     cout<< LinearSearch(arr,n,key);
//     cout<<endl;
//     return 0;
// }


// This program implements a linear search algorithm to find the index of a specified key in an array of integers.
#include <iostream>
using namespace std;    
int LinearSearch(int *arr, int n, int key) {
    for (int i = 0; i < n; i++) { // Loop through each element in the array
        if (arr[i] == key) { // Check if the current element matches the key
            cout << "Element found at index: "; // Print a message indicating the element was found
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the key is not found in the array
}
int main() {    
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16}; // Initialize an array of integers
    int n = sizeof(arr) / sizeof(int); // Calculate the number of elements in the array
    int key; // Declare a variable to hold the key to be searched
    cout << "Enter the element to be searched: "; // Prompt the user to enter the key
    cin >> key; // Read the key from user input
    cout << LinearSearch(arr, n, key); // Call the LinearSearch function and print the result (index of the key or -1 if not found)
    cout << endl; // Print a newline at the end of the output
    return 0; // Return 0 to indicate successful execution
}