#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }

    cout<<"New code"<<endl;
    cout<<"This is a Fibonacci series"<<endl;

    int a=0;
    int b=1;
    while(a<=10){
        cout<<a<<endl;
        int c=a+b;
        a=b;
        b=c;
    }
}

