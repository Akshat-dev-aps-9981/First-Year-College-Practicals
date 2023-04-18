/*
    Author:     Akshat Sharma.
    Problem:    To convert decimal (integer) number into equivalent binary number.
*/

#include <iostream>
using namespace std;

int main() {
    int decimalNum, binaryNum[32], i = 0;

    // Accept input decimal number from user.
    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    // Convert decimal to binary.
    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        decimalNum /= 2;
        i++;
    }

    // Print binary number.
    cout << "Binary equivalent: ";
    for (int j = i-1; j >= 0; j--) {
        cout << binaryNum[j];
    }

    cout << endl;

    return 0;
}