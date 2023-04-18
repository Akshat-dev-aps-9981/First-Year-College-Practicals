/*
    Author:     Akshat Sharma.
    Problem:    To Swap the values of two variables.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Before Swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After Swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}