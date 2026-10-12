/*
  Q. Divisible by 5

  Read an integer and print a message if it is divisible by 5.

  Example input : 25
  Example output:
  Enter a number: 25 is divisible by 5.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 5 == 0) {
        cout << n << " is divisible by 5." << endl;
    }

    return 0;
}
