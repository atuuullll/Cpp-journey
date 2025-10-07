#include<iostream>
using namespace std;

// void firstfunction(){
//     cout<<"This is my first function code"<<endl;
// }
// int main(){
//     firstfunction();
//     return 0;
// }

void secondfunction(int a, int b){
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of b is: "<<b<<endl;
    cout<<"The sum of a and b is: "<<a+b<<endl;
}
int main(){
    secondfunction(4,5);
    return 0;
}