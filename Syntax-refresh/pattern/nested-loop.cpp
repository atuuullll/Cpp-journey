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

    // cout<<"Enter the number: ";
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //print alphabet pattern
    // int n=4;
    // char ch='A';
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<ch<<" ";
    //         ch++;   
    //     }
    //     cout<<endl;
    // }

    //print hollow rectangle
    // int row,col;
    // cout<<"Enter the number of rows: ";
    // cin>>row;
    // cout<<"Enter the number of columns: ";
    // cin>>col;
    // for(int i=1;i<=row;i++){
    //     for(int j=1;j<=col;j++){
    //         if(i==1 || i==row || j==1 || j==col){
    //             cout<<" *";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //print inverted and rotated half pyramid
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=4-i;j++){
    //         cout<<"  ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    int n=4;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }
}

