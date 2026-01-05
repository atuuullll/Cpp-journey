// #include<stdio.h>
// #include<iostream>
// using namespace std;
// int main(){
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

    // Print a hollow square pattern
    // cout<<"Enter the value of n: ";
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     cout<<" * ";
    //     for(int j=1; j<=n-1;j++){
    //         if(i==1 || i==n){
    //             cout<<" * ";
    //         }
    //         else {
    //             cout<<"   ";
    //         }
    //     }
    //     cout<<" * "<<endl;
    // }
    // return 0;

    // Print a right-aligned triangle pattern
    // cout<<"Enther the calue of n: ";
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1;j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int k=1; k<=i; k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    //Print a upper pyramid of diamond pattern
    // cout<<"Enter the value of n: ";
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=i; j<n; j++){
    //         cout<<" ";
    //     }
    //     for(int k=1; k<=(2*i-1); k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    // Print a lower pyramid of diamond pattern
    // cout<<"Enter the value of n: ";
    // int n;
    // cin>>n;
    // for(int i=n; i>=1; i--){
    //     for(int j=i; j<n; j++){
    //         cout<<" ";
    //     }
    //     for(int k=1; k<=2*i-1; k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    // Print a full diamond pattern
    // cout<<"Enter the value of n: ";
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=i; j<n; j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=2*i-1; k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=n-1; i>=1; i--){
    //     for(int j=i; j<n; j++){
    //         cout<<" ";
    //     }
    //     for(int k=1; k<=2*i-1; k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    // Print Pascal's triangle pattern
    // cout<<"Enter the value of n: ";
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     int coeff = 1;
    //     for(int j=0; j<n-i-1; j++){
    //         cout<<" ";
    //     }
    //     for(int k=0; k<=i; k++){
    //         cout<<coeff<<" ";
    //         coeff = coeff * (i - k) / (k + 1);
    //     }
    //     cout<<endl;
    // }
    // return 0;

    //binary to decimal conversion
    // int n, decimal = 0, base = 1, last_digit;
    // cout<<"Enter a binary number: ";
    // cin>>n;
    // while(n > 0){
    //     last_digit = n % 10;
    //     decimal = decimal + last_digit * base;
    //     n = n / 10;
    //     base = base * 2;                
    // }
    // cout<<"The decimal equivalent is: "<<decimal<<endl;
    // return 0;

    //decimal to binary conversion
    // int n, binary = 0, base = 1, remainder;
    // cout<<"Enter a decimal number: ";
    // cin>>n;
    // while(n > 0){
    //     remainder = n % 2;
    //     binary = binary + remainder * base;
    //     n = n / 2;
    //     base = base * 10;
    // }
    // cout<<"The binary equivalent is: "<<binary<<endl;
    // return 0;

    //array rotation
    // int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int k;
    // cout<<"Enter the number of rotations: ";
    // cin>>k;
    // k = k % n; // In case k is greater than n
    // cout<<"Original array: ";
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";  
    // }
    // cout<<endl;
    // Rotate the array
    // int temp[k];
    // for(int i = 0; i < k; i++){
    //     temp[i] = arr[i];
    // }
    // for(int i = k; i < n; i++){
    //     arr[i - k] = arr[i];
    // }
    // for(int i = 0; i < k; i++){
    //     arr[n - k + i] = temp[i];
    // }
    // cout<<"Rotated array: ";
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";  
    // }
    // cout<<endl;
    // return 0;

    // Rotate the array using reversal algorithm
    // Reverse function
    // auto reverse = [](int arr[], int start, int end) {
    //     while(start < end){
    //         swap(arr[start], arr[end]);
    //         start++;
    //         end--;
    //     }
    // };
    // Step 1: Reverse the first k elements
    // reverse(arr, 0, k - 1);
    // Step 2: Reverse the remaining n-k elements
    // reverse(arr, k, n - 1);
    // Step 3: Reverse the whole array
    // reverse(arr, 0, n - 1);
    // cout<<"Rotated array: ";
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // return 0;

    // temperature conversion
    // float celsius, fahrenheit;
    // cout<<"Enter temperature in Celsius: ";
    // cin>>celsius;
    // fahrenheit = (celsius * 9/5) + 32;
    // cout<<"Temperature in Fahrenheit: "<<fahrenheit<<endl;
    // return 0;

    // simple calculator
    // char op;
    // float num1, num2, result;
    // cout<<"Enter operator (+, -, *, /): ";
    // cin>>op;
    // cout<<"Enter two operands: ";
    // cin>>num1>>num2;
    // switch(op){
    //     case '+':
    //         result = num1 + num2;
    //         break;
    //     case '-':
    //         result = num1 - num2;
    //         break;
    //     case '*':
    //         result = num1 * num2;   
    //         break;
    //     case '/':
    //         if(num2 != 0){
    //             result = num1 / num2;
    //         } else {
    //             cout<<"Error: Division by zero!"<<endl;
    //             return 1;
    //         }
    //         break;
    //     default:
    //         cout<<"Error: Invalid operator!"<<endl;
    //         return 1;
    // }
    // cout<<"Result: "<<result<<endl;
    // return 0;

    // HCF and LCM calculation
    // int num1, num2, hcf, lcm;
    // cout<<"Enter two numbers: ";
    // cin>>num1>>num2;
    // // Calculate HCF
    // int a = num1, b = num2;
    // while(b != 0){
    //     int temp = b;
    //     b = a % b;
    //     a = temp;
    // }
    // hcf = a;
    // // Calculate LCM
    // lcm = (num1 * num2) / hcf;
    // cout<<"HCF of "<<num1<<" and "<<num2<<" is: "<<hcf<<endl;
    // cout<<"LCM of "<<num1<<" and "<<num2<<" is: "<<lcm<<endl;
    // return 0;

    // Swap two numbers without using a temporary variable
    // int a, b;
    // cout<<"Enter two numbers: ";
    // cin>>a>>b;
    // cout<<"Before swapping: a = "<<a<<", b = "<<b<<endl;
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // cout<<"After swapping: a = "<<a<<", b = "<<b<<endl;
    // return 0;

    // Check if a number is prime
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // for(int i=2;i<=n;i++){
    //     if(n%i==0){
    //         if(i==n){
    //             cout<<"The number is prime"<<endl;
    //         }
    //         else{
    //             cout<<"The number is not prime"<<endl;
    //             break;
    //         }
    //     }
    // }


    //print even and odd numbers in an array
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<"Even numbers: ";
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2==0){
    //         cout<<arr[i]<<" ";
    //     }
    // }
    // cout<<endl;
    // cout<<"Odd numbers: ";
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2!=0){
    //         cout<<arr[i]<<" ";
    //     }
    // }
    // cout<<endl;
    // return 0;


    // find GCD of two numbers
    // int a, b, gcd;
    // cout<<"Enter two numbers: ";
    // cin>>a>>b;
    // while(b != 0){
    //     int temp = b;
    //     b = a % b;
    //     a = temp;
    // }
    // gcd = a;
    // cout<<"GCD is: "<<gcd<<endl;
    // return 0;

    
    // find LCM of two numbers
    // int a, b, lcm;
    // cout<<"Enter two numbers: ";
    // cin>>a>>b;  
    // int gcd;
    // int x = a, y = b;
    // while(y != 0){  
    //     int temp = y;
    //     y = x % y;
    //     x = temp;
    // }
    // gcd = x;
    // lcm = (a * b) / gcd;
    // cout<<"LCM is: "<<lcm<<endl;
    // return 0;

//}

// linked list implementation    
// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int val) {
//         data = val;
//         next = nullptr;
//     }
// };
// class LinkedList {
// private:
//     Node* head;
// public:
//     LinkedList() {
//         head = nullptr;
//     }
//     void insert(int val) {
//         Node* newNode = new Node(val);
//         if (!head) {
//             head = newNode;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
//     void display() {
//         Node* temp = head;
//         while (temp) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "nullptr" << endl;
//     }
// };
// int main() {
//     LinkedList list;
//     list.insert(10);
//     list.insert(20);
//     list.insert(30);
//     list.display();
//     return 0;
// }

//function to check if a number is Armstrong number
// #include <iostream>
// #include <cmath>
// using namespace std;    
// bool isArmstrong(int num) {
//     int originalNum = num;
//     int sum = 0;
//     int digits = log10(num) + 1;
//     while (num > 0) {
//         int digit = num % 10;
//         sum += pow(digit, digits);
//         num /= 10;
//     }
//     return sum == originalNum;
// }
// int main() {
//     int number;
//     cout << "Enter a number: "; 
//     cin >> number;
//     if (isArmstrong(number)) {
//         cout << number << " is an Armstrong number." << endl;
//     } else {
//         cout << number << " is not an Armstrong number." << endl;
//     }
//     return 0;
// }

//function to find the sum of digits of a number
// #include <iostream>
// using namespace std;
// int sumOfDigits(int num) {
//     int sum = 0;
//     while (num > 0) {
//         sum += num % 10;
//         num /= 10;  
//     }
//     return sum;
// }
// int main() {
//     int number;
//     cout << "Enter a number: "; 
//     cin >> number;
//     int result = sumOfDigits(number);
//     cout << "The sum of digits of " << number << " is " << result << "." << endl;
//     return 0;
// }


//function to check if a number is perfect number
// #include <iostream>
// using namespace std;
// bool isPerfect(int num) {
//     int sum = 0;
//     for (int i = 1; i <= num / 2; i++) {
//         if (num % i == 0) {
//             sum += i;
//         }
//     }
//     return sum == num;
// }
// int main() {
//     int number;
//     cout << "Enter a number: "; 
//     cin >> number;
//     if (isPerfect(number)) {
//         cout << number << " is a perfect number." << endl;
//     } else {
//         cout << number << " is not a perfect number." << endl;
//     }
//     return 0;
// }


//function to find the sum of natural numbers up to n
// #include <iostream>
// using namespace std;
// int sumOfNaturalNumbers(int n) {
//     return n * (n + 1) / 2;
// }
// int main() {
//     int number;
//     cout << "Enter a number: "; 
//     cin >> number;
//     int result = sumOfNaturalNumbers(number);
//     cout << "The sum of natural numbers up to " << number << " is " << result << "." << endl;
//     return 0;
// }   

//function to find the factorial of a number
// #include <iostream>
// using namespace std;
// unsigned long long factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// int main() {
//     int number;
//     cout << "Enter a number: "; 
//     cin >> number;
//     unsigned long long result = factorial(number);
//     cout << "The factorial of " << number << " is " << result << "." << endl;
//     return 0;
// }


//pattern to print a square of numbers
// #include <iostream>
// using namespace std;
// int main() {
//     int n;  
//     cout << "Enter the value of n: "; 
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// } 

//pattern to print a right-angled triangle of numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//pattern to print a Floyd's triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n, num = 1;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<num++<<" ";
//         }       
//         cout<<endl;
//     }
//     return 0;
// }   


//pattern to print a hollow square
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         cout<<" * ";
//         for(int j=1; j<=n-1;j++){
//             if(i==1 || i==n){
//                 cout<<" * ";
//             }
//             else {
//                 cout<<"   ";
//             }
//         }
//         cout<<" * "<<endl;
//     }
//     return 0;
// }


// //pattern to print a right-aligned triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=n-i; j++){
//             cout<<" ";      
//         }
//         for(int k=1; k<=i; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
//}


//pattern to print a full diamond
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=i; j<n; j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=2*i-1; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1; i>=1; i--){
//         for(int j=i; j<n; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=2*i-1; k++){
//             cout<<"*";
//         }
//         cout<<endl; 
//     }
//     return 0;
// }


//pattern to print Pascal's triangle
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the value of n: "; 
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         int coeff = 1;
//         for (int j = 0; j < n - i - 1; j++) {
//             cout << " ";
//         }   
//         for (int k = 0; k <= i; k++) {
//             cout << coeff << " ";
//             coeff = coeff * (i - k) / (k + 1);
//         }
//         cout << endl;
//     }
//     return 0;
// }

//function to check if a number is prime
// #include<iostream>
// using namespace std;
// void checkPrime(int n){
//      for(int i=2; i<=n; i++){
//         if(n%i==0){
//             cout<<"The number is not prime"<<endl;
//             break;
//         }
//         else{
//             cout<<"The number is prime"<<endl;
//             break;
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     checkPrime(n);
//     return 0;   
// }


//function to print even and odd numbers in an array
// #include<iostream>
// using namespace std;
// void printEvenOdd(int arr[], int n){
//     cout<<"Even numbers: ";
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             cout<<arr[i]<<" ";
//         }
//     }
//     cout<<endl;
//     cout<<"Odd numbers: ";
//     for(int i=0; i<n; i++){
//         if(arr[i]%2!=0){
//             cout<<arr[i]<<" ";  
//         }
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printEvenOdd(arr, n);
//     return 0;
// }

//function to print even and odd numbers in an array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<"Even numbers: ";
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             cout<<arr[i]<<" ";
//         }
//     }
//     cout<<endl;
//     cout<<"Odd numbers: ";
//     for(int i=0;i<n;i++){
//         if(arr[i]%2!=0){
//             cout<<arr[i]<<" ";
//         }
//     }
//     cout<<endl;
//     return 0;
// }



//function to check if a number is prime
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

//array rotation using reversal algorithm
// #include <iostream>
// using namespace std;
// void reverse(int arr[], int start, int end) {
//     while(start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// void rotateArray(int arr[], int n, int k) {
//     k = k % n;
//     reverse(arr, 0, k - 1);
//     reverse(arr, k, n - 1);
//     reverse(arr, 0, n - 1);
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k;
//     cout<<"Enter the number of rotations: ";
//     cin>>k;
//     cout<<"Original array: ";
//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";  
//     }
//     cout<<endl;
//     rotateArray(arr, n, k);
//     cout<<"Rotated array: ";
//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";  
//     }
//     cout<<endl;
//     return 0;
// }


//check if a number is perfect number
#include <iostream>
using namespace std;
bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}
int main() {
    int number;
    cout << "Enter a number: "; 
    cin >> number;
    if (isPerfect(number)) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }
    return 0;
}