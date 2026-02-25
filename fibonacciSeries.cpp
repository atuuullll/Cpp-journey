// #include<iostream>
// using namespace std;
// void fibonacci(int n){
//     cout<<"Fibonacci series is: ";
//     int a=0;
//     cout<<a<<" ";
//     int b=1;
//     cout<<b<<" ";
//     int k=a+b;
//     while (k <= n) {
//         cout << k << " ";
//         a = b;
//         b = k;
//         k = a + b;
//     }
//     cout<<endl;
// }
// int main(){
//     int a;
//     cout<<"Enter a number: ";
//     cin>>a;
//     fibonacci(a);
//     return 0;
// }


// This program generates the Fibonacci series up to a given number 'n'.
#include <iostream>
using namespace std;    
void fibonacci(int n) {
    cout << "Fibonacci series is: ";
    int a = 0;
    cout << a << " "; // Print the first Fibonacci number
    int b = 1;
    cout << b << " "; // Print the second Fibonacci number
    int k = a + b; // Calculate the next Fibonacci number
    while (k <= n) { // Continue until the next number exceeds 'n'
        cout << k << " "; // Print the next Fibonacci number
        a = b; // Update 'a' to the previous 'b'
        b = k; // Update 'b' to the current 'k'
        k = a + b; // Calculate the next Fibonacci number
    }
    cout << endl; // Print a newline at the end of the series
}
int main() {    
    int a;
    cout << "Enter a number: ";
    cin >> a; // Read the input number 'n' from the user
    fibonacci(a); // Call the function to generate the Fibonacci series up to 'n'
    return 0; // Return 0 to indicate successful execution
}
