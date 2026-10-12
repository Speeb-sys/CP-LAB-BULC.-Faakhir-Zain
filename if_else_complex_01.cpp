/*
  Q. Quadratic Equation Roots

  Read the coefficients a, b, c of ax^2 + bx + c = 0 and print its roots.
     - If a = 0, print that it is not a quadratic equation.
     - If the discriminant is zero or positive, print the real roots.
     - Otherwise print the complex roots in the form p + qi and p - qi.

  Example input : 1 2 5
  Example output:
  Enter a, b and c: Complex roots: -1 + 2i and -1 - 2i
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Not a quadratic equation (a cannot be 0)." << endl;
    } else {
        d = b * b - 4 * a * c;

        if (d >= 0) {
            double x1 = (-b + sqrt(d)) / (2 * a);
            double x2 = (-b - sqrt(d)) / (2 * a);
            if (d == 0) {
                cout << "Equal real roots: " << x1 << " and " << x2 << endl;
            } else {
                cout << "Distinct real roots: " << x1 << " and " << x2 << endl;
            }
        } else {
            double p = -b / (2 * a);
            double q = fabs(sqrt(-d) / (2 * a));
            cout << "Complex roots: " << p << " + " << q << "i and "
                 << p << " - " << q << "i" << endl;
        }
    }

    return 0;
}
