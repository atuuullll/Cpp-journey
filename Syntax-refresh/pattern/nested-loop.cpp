#include<iostream>
using namespace std;
int main(){
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=4;j++){
    //         cout<<i<<" ";

    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    // int n=5;
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    cout<<"Enter the number: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

