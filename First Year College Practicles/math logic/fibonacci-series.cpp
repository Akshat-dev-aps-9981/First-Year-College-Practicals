/*
    Author:     Akshat Sharma.
    Problem:    To generate fibonacci series till the given number.
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    // Accept number of terms to generate, from user.
    cout << "Enter the desired numbers of terms in Fibonacci Series: ";
    cin >> num;

    // Print Fibonacci Series.
    int a = 0, b = 1, c;
    cout << "Fibonacci Series: " << endl;

    for (int i = 1; i <= num; i++) {
        cout << a << ", ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}