/*
  Q. Divisible by 3 and 5

  Read an integer and print whether it is divisible by BOTH 3 and 5.

  Example input : 45
  Example output:
  Enter a number: 45 is divisible by both 3 and 5.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 3 == 0 && n % 5 == 0) {
        cout << n << " is divisible by both 3 and 5." << endl;
    } else {
        cout << n << " is not divisible by both 3 and 5." << endl;
    }

    return 0;
}
