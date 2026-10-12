/*
  Q. Check Positive Number

  Write a program that reads an integer and prints a message only if the
  number is positive. (Nothing is printed for zero or negative numbers.)

  Example input : 5
  Example output:
  Enter a number: 5 is a positive number.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n > 0) {
        cout << n << " is a positive number." << endl;
    }

    return 0;
}
