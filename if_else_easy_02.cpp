/*
  Q. Larger of Two Numbers

  Read two integers and print the larger one. (If both are equal, print
  that value.)

  Example input : 15 9
  Example output:
  Enter two numbers: 15 is the larger number.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a >= b) {
        cout << a << " is the larger number." << endl;
    } else {
        cout << b << " is the larger number." << endl;
    }

    return 0;
}
