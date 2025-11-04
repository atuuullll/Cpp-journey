// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=10){
//         cout<<i<<endl;
//         i++;
//     }

//     cout<<"New code"<<endl;
//     cout<<"This is a Fibonacci series"<<endl;

//     int a=0;
//     int b=1;
//     while(a<=10){
//         cout<<a<<endl;
//         int c=a+b;
//         a=b;
//         b=c;
//     }

//     cout<<"New code"<<endl;
//     cout<<"This is a multiplication table of 7"<<endl;

//     int n=7;
//     int j=1;
//     while(j<=10){
//         cout<<n*j<<endl;
//         j++;
//     }

//     cout<<"New code"<<endl;
//     cout<<"This is a series of odd numbers"<<endl;

//     int k=1;
//     while(k<=10){
//         cout<<k<<endl;
//         k=k+2;
//     }

//     cout<<"New code"<<endl;
//     cout<<"This is a series of even numbers"<<endl;

//     int x=0;
//     while(x<=10){
//         cout<<x<<endl;
//         x=x+2;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Matrix of 3x3"<<endl;
//     int i=1;
//     while(i<=3){
//         int j=1;
//         while(j<=3){
//             cout<<"* ";
//             j++;
//         }   
//         cout<<endl;
//         i++;
//     }
// }   

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hollow Matrix of 5x5"<<endl;
//     int i=1;    
//     while(i<=5){
//         int j=1;
//         while(j<=5){
//             if(i==1 || i==5 || j==1 || j==5){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    cout<<"Right Angled Triangle"<<endl;
    int i=1;
    while(i<=5){
        int j=1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
}