/*
    Author:     Akshat Sharma.
    Problem:    To print table from 1 to 10 of a given number.
*/

#include <iostream>
using namespace std;

int main() {
    int num;

    // Accept input number from user.
    cout << "Enter a number: ";
    cin >> num;

    // Print table of input number from 1 to 10.
    for (int i = 1; i <= 10; i ++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}