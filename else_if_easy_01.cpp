/*
  Q. Positive, Negative or Zero

  Read an integer and print whether it is positive, negative or zero.

  Example input : -4
  Example output:
  Enter a number: -4 is negative.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n > 0) {
        cout << n << " is positive." << endl;
    } else if (n < 0) {
        cout << n << " is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
