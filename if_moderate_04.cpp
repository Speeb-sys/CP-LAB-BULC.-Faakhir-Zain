/*
  Q. Triangle Validity

  Read the three sides of a triangle and check whether they can form a
  valid triangle. A triangle is valid if all sides are positive and the sum
  of any two sides is greater than the third side. Use only 'if' statements.

  Example input : 3 4 5
  Example output:
  Enter three sides: The sides form a valid triangle.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, valid = 0;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        valid = 1;
    }

    if (valid == 1) {
        cout << "The sides form a valid triangle." << endl;
    }
    if (valid == 0) {
        cout << "The sides do NOT form a valid triangle." << endl;
    }

    return 0;
}
