/*
    Author:     Akshat Sharma.
    Problem:    To multiply two matrices.
*/

#include <iostream>
using namespace std;

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];
    int rowsOfFirst, columnOfFirst, rowsOfSecond, columnOfSecond;

    cout << "Enter the number of rows and columns of first matrix: ";
    cin >> rowsOfFirst >> columnOfFirst;

    cout << "Enter the elements of first matrix:" << endl;
    for (int i = 0; i < rowsOfFirst; i++) {
        for (int j = 0; j < columnOfFirst; j++) {
            cin >> firstMatrix[i][j];
        }
    }

    cout << "Enter the number of rows and columns of second matrix:" << endl;
    cin >> rowsOfSecond >> columnOfSecond;

    if (columnOfFirst != rowsOfSecond) {
        cout << "Matrices can not be multiplied."
    } else {
        cout << "Enter the elements of second matrix:" << endl;
        for (int i = 0; i < rowsOfSecond; i++) {
            for (int j = 0; j < columnOfSecond; j++) {
                cin >> secondMatrix[i][j];
            }
        }

        // Multiplication of Matrices.
        for (int i = 0; i < rowsOfFirst; i++) {
            for (int j = 0; j < columnOfSecond; j++) {
                resultMatrix[i][j] = 0;
                for (int k = 0; k < columnOfFirst; k++) {
                    resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
                }
            }
        }

        cout << "Resultant Matrix:" << endl;
        for (int i = 0; i < rowsOfFirst; i++) {
            for (int j = 0; j < columnOfSecond; j++) {
                cout << resultMatrix[i][j] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}