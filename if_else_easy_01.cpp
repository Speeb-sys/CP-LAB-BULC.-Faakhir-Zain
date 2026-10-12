/*
  Q. Even or Odd

  Read an integer and print whether it is even or odd.

  Example input : 7
  Example output:
  Enter a number: 7 is odd.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
    }

    return 0;
}
