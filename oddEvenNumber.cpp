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
#include <iostream>
using namespace std;
void oddEvenUpToN(int n){   
    cout<<"Odd numbers up to "<<n<<":"<<endl;
    for(int i=1; i<=n; i+=2){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Even numbers up to "<<n<<":"<<endl;
    for(int i=2; i<=n; i+=2){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    oddEvenUpToN(num);
    return 0;
}