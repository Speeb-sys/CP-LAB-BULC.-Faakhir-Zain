/*
  Q. Three-Digit Palindrome

  Read a three-digit number and check whether it is a palindrome (reads the
  same forwards and backwards, e.g. 121). If the number is not three digits,
  print an error message.

  Example input : 121
  Example output:
  Enter a three-digit number: 121 is a palindrome.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a three-digit number: ";
    cin >> n;

    if (n >= 100 && n <= 999) {
        int first = n / 100;
        int last = n % 10;

        if (first == last) {
            cout << n << " is a palindrome." << endl;
        } else {
            cout << n << " is not a palindrome." << endl;
        }
    } else {
        cout << "Error: please enter a three-digit number." << endl;
    }

    return 0;
}
