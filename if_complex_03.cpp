/*
  Q. Quadratic Equation Root Classifier

  Read the coefficients a, b, c of a quadratic equation ax^2 + bx + c = 0
  and print the nature and values of its roots using only 'if' statements:
     - a = 0            : not a quadratic equation
     - discriminant > 0 : two distinct real roots
     - discriminant = 0 : two equal real roots
     - discriminant < 0 : two complex roots

  Example input : 1 -3 2
  Example output:
  Enter a, b and c: Two distinct real roots: 2 and 1
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, x1, x2, realPart, imagPart;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Not a quadratic equation (a cannot be 0)." << endl;
    }

    d = b * b - 4 * a * c;

    if (a != 0 && d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Two distinct real roots: " << x1 << " and " << x2 << endl;
    }
    if (a != 0 && d == 0) {
        x1 = -b / (2 * a);
        cout << "Two equal real roots: " << x1 << " and " << x1 << endl;
    }
    if (a != 0 && d < 0) {
        realPart = -b / (2 * a);
        imagPart = fabs(sqrt(-d) / (2 * a));
        cout << "Two complex roots: " << realPart << " + " << imagPart << "i and "
             << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
