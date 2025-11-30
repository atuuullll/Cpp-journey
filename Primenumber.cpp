// #include<iostream>
// using namespace std;

// bool isPrime(int n){
//     if(n==1){
//         return false;
//     }
//     for(int i=2; i<=n-1; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     if(isPrime(num)){
//         cout<<num<<" is a prime number."<<endl;
//     }
//     else{
//         cout<<num<<" is not a prime number."<<endl;
//     }
//     return 0;
// }


//print all prime numbers up to n
#include <iostream>
using namespace std;    
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}   
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Prime numbers up to "<<n<<" are: "<<endl;
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
