/*
  Q. Character Type Checker

  Read a single character and tell whether it is an uppercase letter,
  a lowercase letter, a digit or some other (special) character.
  Use only 'if' statements.

  Example input : g
  Example output:
  Enter a character: g is a lowercase letter.
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    int known = 0;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase letter." << endl;
        known = 1;
    }
    if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase letter." << endl;
        known = 1;
    }
    if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit." << endl;
        known = 1;
    }
    if (known == 0) {
        cout << ch << " is a special character." << endl;
    }

    return 0;
}
