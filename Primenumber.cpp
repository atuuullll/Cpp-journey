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
// #include <iostream>
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
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"Prime numbers up to "<<n<<" are: "<<endl;
//     for(int i=2; i<=n; i++){
//         if(isPrime(i)){
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
//     return 0;
// }


//print first n prime numbers
// #include <iostream>
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
//     int n,count=0,num=2;
//     cout<<"Enter the number of prime numbers to print: ";
//     cin>>n;
//     cout<<"First "<<n<<" prime numbers are: "<<endl;
//     while(count<n){
//         if(isPrime(num)){
//             cout<<num<<" ";
//             count++;
//         }
//         num++;
//     }
//     cout<<endl;
//     return 0;
// }


//prime factorization of a number
// #include <iostream>
// using namespace std;
// void primeFactorization(int n){
//     for(int i=2; i<=n; i++){
//         while(n%i==0){
//             cout<<i<<" ";
//             n=n/i;
//         }
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     cout<<"Prime factorization of "<<   num<<" is: "<<endl;
//     primeFactorization(num);
//     cout<<endl;
//     return 0;
// }


//return nth prime number
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
int nthPrime(int n){
    int count=0,num=2;
    while(true){
        if(isPrime(num)){       
            count++;
            if(count==n){
                return num;
            }
        }
        num++;  
    }
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<n<<"th prime number is: "<<nthPrime(n)<<endl;
    return 0;
}