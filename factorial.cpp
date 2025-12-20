// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact=fact*i;
//     }
//     cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
//     return fact;
// }

// int main(){
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     factorial(num);
//     return 0;
// }

//factorial using recursion
#include <iostream>
using namespace std;        
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}   
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result = factorial(number);
    cout << result << endl;
    return 0;
}