/*
    Author: Akshat Sharma.
    Problem:    To check if given string is a palindrome or not.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int len;

    cout << "Enter a string: ";
    getline(cin, str);
    len = str.length();

    int left = 0, right = len - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            cout << "Not a palindrome," << endl;
            return 0;
        }
        left ++;
        right --;
    }

    cout << "Palindrome." << endl;
    return 0;
}