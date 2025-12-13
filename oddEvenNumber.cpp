// #include<iostream>
// using namespace std;
// void oddEven(int n){
//     if(n%2==0){
//         cout<<n<<" is an even number."<<endl;
//     }
//     else{
//         cout<<n<<" is an odd number."<<endl;
//     }
// }
// int main(){
//     int a;
//     cout<<"Enter a number: ";
//     cin>>a;
//     oddEven(a);
//     return 0;
// }

//print odd and even numbers up to n
// #include <iostream>
// using namespace std;
// void oddEvenUpToN(int n){   
//     cout<<"Odd numbers up to "<<n<<":"<<endl;
//     for(int i=1; i<=n; i+=2){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"Even numbers up to "<<n<<":"<<endl;
//     for(int i=2; i<=n; i+=2){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     oddEvenUpToN(num);
//     return 0;
// }


//odd even checker for an array
// #include <iostream>
// using namespace std;
// void oddEvenArray(int arr[], int size){
//     cout<<"Odd numbers in the array:"<<endl;
//     for(int i=0; i<size; i++){
//         if(arr[i]%2!=0){
//             cout<<arr[i]<<" ";
//         }
//     }
//     cout<<endl;
//     cout<<"Even numbers in the array:"<<endl;
//     for(int i=0; i<size; i++){
//         if(arr[i]%2==0){
//             cout<<arr[i]<<" ";
//         }
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter "<<n<<" elements:"<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     oddEvenArray(arr, n);
//     return 0;
// }   


//odd even sum difference
#include <iostream>
using namespace std;
void oddEvenSumDifference(int arr[], int size){
    int oddSum = 0;
    int evenSum = 0;
    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            evenSum += arr[i];
        }
        else{
            oddSum += arr[i];
        }
    }
    int difference = oddSum - evenSum;
    cout<<"Sum of odd numbers: "<<oddSum<<endl;
    cout<<"Sum of even numbers: "<<evenSum<<endl;
    cout<<"Difference (Odd - Even): "<<difference<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements:"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    oddEvenSumDifference(arr, n);
    return 0;
}