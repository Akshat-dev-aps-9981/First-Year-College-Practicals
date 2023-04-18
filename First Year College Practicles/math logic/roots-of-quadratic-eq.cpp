/*
    Author:     Akshat Sharma.
    Problem:    To find the roots of a given quadratic equation (even if roots are imaginary).
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, discriminant, root1, root2;

    cout << "Enter the coefficients a, b and c: ";
    cin << a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and distinct." << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "The roots are real and equal." << endl;
        cout << "Root: " << root1 << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The roots are complex and conjugate." << endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << endl;
    }
    return 0;
}