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
// int nthPrime(int n){
//     int count=0,num=2;
//     while(true){
//         if(isPrime(num)){       
//             count++;
//             if(count==n){
//                 return num;
//             }
//         }
//         num++;  
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<n<<"th prime number is: "<<nthPrime(n)<<endl;
//     return 0;
// }


//Sieve of Eratosthenes to print all prime numbers up to n
// #include <iostream>
// #include <vector>
// using namespace std;
// void sieveOfEratosthenes(int n){
//     vector<bool> prime(n+1, true);
//     prime[0]=prime[1]=false;
//     for(int i=2; i*i<=n; i++){
//         if(prime[i]){
//             for(int j=i*i; j<=n; j+=i){
//                 prime[j]=false;
//             }
//         }
//     }
//     cout<<"Prime numbers up to "<<n<<" are: "<<endl;
//     for(int i=2; i<=n; i++){
//         if(prime[i]){
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     sieveOfEratosthenes(n);
//     return 0;
// }


//Count number of prime numbers up to n
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
// int countPrimes(int n){
//     int count=0;
//     for(int i=2; i<=n; i++){
//         if(isPrime(i)){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"Number of prime numbers up to "<<n<<" is: "<<countPrimes(n)<<endl;
//     return 0;
// }   


//Check if two numbers are coprime
// #include <iostream>
// using namespace std;        
// int gcd(int a, int b){
//     if(b==0){
//         return a;
//     }
//     return gcd(b, a%b);
// }   
// bool areCoprime(int a, int b){
//     return gcd(a, b)==1;
// }
// int main(){
//     int num1, num2;
//     cout<<"Enter two numbers: ";
//     cin>>num1>>num2;            
//     if(areCoprime(num1, num2)){
//         cout<<num1<<" and "<<num2<<" are coprime numbers."<<endl;
//     }
//     else{
//         cout<<num1<<" and "<<num2<<" are not coprime numbers."<<endl;
//     }
//     return 0;
// }   


//prime number check using recursion
// #include <iostream>
// using namespace std;
// bool isPrimeUtil(int n, int i){
//     if(n<=2){
//         return (n==2);
//     }
//     if(n%i==0){
//         return false;
//     }
//     if(i*i>n){
//         return true;
//     }
//     return isPrimeUtil(n, i+1);
// }
// bool isPrime(int n){
//     return isPrimeUtil(n, 2);
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


//Matrix Input and Output
// #include<iostream>
// using namespace std;
// int main() {
//     int matrix[10][10], n;  
//     cout << "Enter size of square matrix (n x n): ";
//     cin >> n;
//     cout << "Enter elements of the matrix:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
//             cin >> matrix[i][j];
//         }
//     }   
//     cout << "\nMatrix:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << matrix[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//Using Functions
#include<iostream>
using namespace std;
void multiplyMatrices(int matrixA[2][2], int matrixB[2][2], int productMatrix[2][2]){
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            productMatrix[i][j]=0;
            for(int k=0; k<2; k++){
                productMatrix[i][j]+=matrixA[i][k]*matrixB[k][j];
            }
        }   
    }
}
int main() {
    int matrixA[2][2], matrixB[2][2], productMatrix[2][2];  
    cout << "Enter elements of Matrix A (2x2):\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrixA[i][j];
        }
    }
    cout << "Enter elements of Matrix B (2x2):\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrixB[i][j];
        }
    }   
    multiplyMatrices(matrixA, matrixB, productMatrix);
    cout << "Product of Matrix A and Matrix B is:\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << productMatrix[i][j] << "\t";
        }   
        cout << endl;
    }
    return 0;
}