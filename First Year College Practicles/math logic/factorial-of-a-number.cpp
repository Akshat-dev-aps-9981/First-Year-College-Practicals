/*
    Author:     Akshat Sharma.
    Problem:    To find factorial of a given number.
*/

#include <iostream>
using namespace std;

int main() {
    int num, factorial;

    // Accept input number from user.
    cout << "Enter a number: ";
    cin >> num;

    // Calculate the factorial of input number.
    for (int i = num; i >= 1; i--) {
        factorial *= i;
    }

    // Print factorial of input number.
    cout << "Factorial of input number " << num << " is: " << factorial << "." << endl;

    return 0;
}