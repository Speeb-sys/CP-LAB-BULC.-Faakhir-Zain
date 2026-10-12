/*
  Q. Largest of Three Numbers

  Read three integers and print the largest using an else-if ladder.

  Example input : 5 9 2
  Example output:
  Enter three numbers: 9 is the largest.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << a << " is the largest." << endl;
    } else if (b >= a && b >= c) {
        cout << b << " is the largest." << endl;
    } else {
        cout << c << " is the largest." << endl;
    }

    return 0;
}
