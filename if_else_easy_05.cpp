/*
  Q. Divisible by 7

  Read an integer and print whether it is divisible by 7 or not.

  Example input : 49
  Example output:
  Enter a number: 49 is divisible by 7.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 7 == 0) {
        cout << n << " is divisible by 7." << endl;
    } else {
        cout << n << " is not divisible by 7." << endl;
    }

    return 0;
}
