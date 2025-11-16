// #include<iostream>
// using namespace std;
// int main() {
//     int matrix[10][10], n;

//     cout << "Enter size of square matrix (n x n): ";
//     cin >> n;

//     cout << "Enter elements of the matrix:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "\nMatrix:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << matrix[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//Using While Loop
// #include<iostream>
// using namespace std;
// int main() {
//     int matrix[10][10], n, i = 0, j = 0;

//     cout << "Enter size of square matrix (n x n): ";
//     cin >> n;

//     cout << "Enter elements of the matrix:\n";
//     while (i < n) {
//         j = 0;
//         while (j < n) {
//             cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
//             cin >> matrix[i][j];
//             j++;
//         }
//         i++;
//     }

//     cout << "\nMatrix:\n";
//     i = 0;
//     while (i < n) {
//         j = 0;
//         while (j < n) {
//             cout << matrix[i][j] << "\t";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

//Transpose of a matrix
#include<iostream>
using namespace std;
int main() {
    int matrix[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};
    cout<<"The original matrix is: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int transpose[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    cout<<"The transposed matrix is: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;   
}
