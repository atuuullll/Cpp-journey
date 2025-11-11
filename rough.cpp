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
    // int arr[] = {1, 2, 4, 5, 6};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int total = (n + 1) * (n + 2) / 2;
    // int sum = 0;
    // for(int i = 0; i < n; i++){
    //     sum += arr[i];  
    //     cout<<arr[i]<<" ";
    // }
    // int missing_number = total - sum;
    // cout<<endl;
    // cout<<"The missing number is: "<<missing_number<<endl;
    // return 0;

    // Reverse an array
    // int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<"Original array: ";
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";  
    // }
    // cout<<endl;
    // cout<<"Reversed array: ";
    // for(int i = n - 1; i >= 0; i--){
    //     cout<<arr[i]<<" ";  
    // }
    // cout<<endl;
    // return 0;

    // Count vowels and consonants in a string
    // string str;
    // int vowels = 0, consonants = 0;
    // cout<<"Enter a string: ";
    // getline(cin, str);
    // for(char c : str){
    //     if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
    //         c = tolower(c);
    //         if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
    //             vowels++;
    //         } else {
    //             consonants++;   
    //         }
    //     }
    // }
    // cout<<"Number of vowels: "<<vowels<<endl;
    // cout<<"Number of consonants: "<<consonants<<endl;
    // return 0;

    // Find the largest and smallest elements in an array
    // int arr[] = {34, -2, 45, 0, 11, -9};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int largest = arr[0];
    // int smallest = arr[0];
    // for(int i = 1; i < n; i++){
    //     if(arr[i] > largest){
    //         largest = arr[i];   
    //     }
    //     if(arr[i] < smallest){
    //         smallest = arr[i];   
    //     }
    //     else{
    //         continue;   
    //     }
    // }
    // cout<<"Largest element: "<<largest<<endl;
    // cout<<"Smallest element: "<<smallest<<endl;
    // return 0;

    // Print a pattern of numbers
    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    // Print a right-angled triangle pattern
    // cout<<"Enter the  value of n: ";
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    // Print a Floyd's triangle pattern
    // cout<<"Enter the value of n: ";
    // int n;
    // cin>>n;
    // int num=1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<num++<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    cout<<"Enter the value of n: ";
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<" * ";
        for(int j=1; j<=n-1;j++){
            if(i==1 || i==n){
                cout<<" * ";
            }
            else {
                cout<<"   ";
            }
        }
        cout<<" * "<<endl;
    }
    return 0;
}