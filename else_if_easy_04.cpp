/*
  Q. Compare Two Numbers

  Read two integers and print whether the first is greater than, smaller
  than, or equal to the second.

  Example input : 8 8
  Example output:
  Enter two numbers: 8 is equal to 8
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else if (a < b) {
        cout << a << " is smaller than " << b << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }

    return 0;
}
