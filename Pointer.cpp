#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    int **ptr3 = &ptr;
    cout<<&ptr<<" = "<<ptr3<<endl;
    return 0;
}