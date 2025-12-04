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
// #include<iostream>
// using namespace std;
// int main() {
//     int matrix[3][3] = {{1, 2, 3},
//                       {4, 5, 6},
//                       {7, 8, 9}};
//     cout<<"The original matrix is: "<<endl;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int transpose[3][3];
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             transpose[j][i] = matrix[i][j];
//         }
//     }
//     cout<<"The transposed matrix is: "<<endl;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<transpose[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;   
// }

//Transpose of a matrix using functions
// #include<iostream>
// using namespace std;
// void transposeMatrix(int matrix[3][3], int transposed[3][3]) {
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             transposed[j][i] = matrix[i][j];
//         }
//     }
// }   
// int main() {
//     int matrix[3][3] = {{1, 2, 3},
//                       {4, 5, 6},
//                       {7, 8, 9}};
//     cout<<"The original matrix is: "<<endl;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int transposed[3][3];
//     transposeMatrix(matrix, transposed);
//     cout<<"The transposed matrix is: "<<endl;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<transposed[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Matrix Addition
// #include<iostream>
// using namespace std;
// int main() {
//     int matrixA[2][2], matrixB[2][2], sumMatrix[2][2];  
//     cout << "Enter elements of Matrix A (2x2):\n";
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
//             cin >> matrixA[i][j];
//         }
//     }
//     cout << "Enter elements of Matrix B (2x2):\n";
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
//             cin >> matrixB[i][j];
//         }
//     }
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
//         }
//     }
//     cout << "Sum of Matrix A and Matrix B is:\n";
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             cout << sumMatrix[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//Matrix Multiplication
// #include<iostream>
// using namespace std;
// int main() {
//     int matrixA[2][2], matrixB[2][2], productMatrix[2][2] = {0};  
//     cout << "Enter elements of Matrix A (2x2):\n";
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
//             cin >> matrixA[i][j];
//         }
//     }
//     cout << "Enter elements of Matrix B (2x2):\n";
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
//             cin >> matrixB[i][j];
//         }
//     }   
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             for(int k=0; k<2; k++){
//                 productMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
//             }
//         }
//     }   
//     cout << "Product of Matrix A and Matrix B is:\n";
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             cout << productMatrix[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//Matrix Multiplication using functions
// #include<iostream>
// using namespace std;
// void multiplyMatrices(int matrixA[2][2], int matrixB[2][2], int productMatrix[2][2]) {
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             productMatrix[i][j] = 0;
//             for(int k=0; k<2; k++){
//                 productMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
//             }
//         }   
//     }
// }
// int main() {
//     int matrixA[2][2], matrixB[2][2], productMatrix[2][2];  
//     cout << "Enter elements of Matrix A (2x2):\n";
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
//             cin >> matrixA[i][j];
//         }
//     }
//     cout << "Enter elements of Matrix B (2x2):\n";
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
//             cin >> matrixB[i][j];
//         }
//     }   
//     multiplyMatrices(matrixA, matrixB, productMatrix);
//     cout << "Product of Matrix A and Matrix B is:\n";
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             cout << productMatrix[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//Matrix Saddle Point
#include<iostream>
using namespace std;
int main() {
    int matrix[10][10], n, saddlePoint = -1;    
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;   
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1
                    << "]: ";       
            cin >> matrix[i][j];
        }
    }    
    for (int i = 0; i < n; i++) {
        int minRow = matrix[i][0];
        int colIndex = 0;
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] < minRow) {
                minRow = matrix[i][j];
                colIndex = j;
            }
        }        
        bool isSaddlePoint = true;  
        for (int k = 0; k < n; k++) {
            if (matrix[k][colIndex] > minRow) {
                isSaddlePoint = false;
                break;
            }
        }        
        if (isSaddlePoint) {
            saddlePoint = minRow;
            break;
        }
    }    
    if (saddlePoint != -1) {
        cout << "Saddle Point is: " << saddlePoint << endl;
    } else {
        cout << "No Saddle Point found in the matrix." << endl;     
    }
    return 0;
}