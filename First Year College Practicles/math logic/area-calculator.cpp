/*
    Author:     Akshat Sharma.
    Problem:    To calculate the area of different shapes like circle, square and rectangle using switch-case.
*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    float area, length, breadth, radius;

    // Display the menu for the user to select shape.
    cout << "--------------- Area Calculator Menu ----------------" << endl;
    cout << "Calculate area of Circle." << endl;
    cout << "Calculate area of Rectangle." << endl;
    cout << "Calculate area of Square." << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    /* Perform the calculation based on the user's choice using switch case. */
    switch(choice) {
        case 1:
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "The area of the Circle is: " << area << " (unit^2)." << endl;
            break;

        case 2:
            cout << "Enter the length and breadth of the Rectangle: ";
            cin >> length >> breadth;
            area = length * breadth;
            cout >> "The area of the Rectangle is: " << area << " (unit^2)." << endl;
            break;

        case 3:
            cout << "Enter the length of one side of the Square: ";
            cin >> length;
            area = length * length;
            cout << "The area of the Square is: " << area << " (unit^2)." << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a number between 1 and 3 (including both 1 and 3)." << endl;
            break;
    }

    return 0;
}