#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
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
    // return 0;

    //palindrome number checking
    // int n,k,a,b;
    // cout<<"Enter a number: ";
    // cin>>n;
    // k=n;
    // a=0;
    // while(n>0){
    //     b=n%10;
    //     a=a*10+b;
    //     n=n/10; 
    // }
    // if(a==k){
    //     cout<<"The number is a palindrome number"<<endl;
    // }
    // else{
    //     cout<<"The number is not a palindrome number"<<endl;
    // }
    // return 0;

    //factorial of a number
    // int n,fact=1,i;
    // cout<<"Enter a number: ";
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     fact=fact*i;
    // }
    // cout<<"The factorial of "<<n<<" is "<<fact<<endl;
    // return 0;

    // Fibonacci series up to n terms
    // int n,a=0,b=1,c,i;
    // cout<<"Enter the number of terms: ";
    // cin>>n;
    // cout<<"Fibonacci series up to "<<n<<" terms is: "<<endl;
    // for(i=1;i<=n;i++){
    //     cout<<a<<" ";
    //     c=a+b;
    //     a=b;
    //     b=c;
    // }
    // return 0;

    // Print multiplication table of a number
    // int n,i;
    // cout<<"Enter a number: ";
    // cin>>n;
    // cout<<"Multiplication table of "<<n<<" is: "<<endl;
    // for(i=1;i<=10;i++){
    //     cout<<n<<" x "<<i<<" = "<<n*i<<endl;    
    // }
    // return 0;

    // Print all prime numbers up to n
    // int n,i,j,flag;
    // cout<<"Enter a number: ";
    // cin>>n;
    // cout<<"Prime numbers up to "<<n<<" are: "<<endl;
    // for(i=2;i<=n;i++){
    //     flag=0;
    //     for(j=2;j<=i/2;j++){
    //         if(i%j==0){
    //             flag=1;
    //             break;  
    //         }
    //     }
    //     if(flag==0){
    //         cout<<i<<" ";
    //     }   
    //}

    //missing number in an array
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int total = (n + 1) * (n + 2) / 2;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];  
        cout<<arr[i]<<" ";
    }
    int missing_number = total - sum;
    cout<<endl;
    cout<<"The missing number is: "<<missing_number<<endl;
    return 0;
}