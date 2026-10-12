/*
  Q. Triangle Classifier

  Read three sides of a triangle. First check that they form a valid
  triangle. If valid, print the type by sides (equilateral, isosceles or
  scalene) AND the type by angle (right-angled, acute-angled or obtuse-angled).

  Example input : 5 12 13
  Example output:
  Enter three sides: Type by sides : Scalene
  Type by angles: Right-angled
*/

#include <iostream>
using namespace std;

int main() {
    double a, b, c, big, s1, s2;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        cout << "These sides do not form a valid triangle." << endl;
    } else {
        // Classification by sides
        if (a == b && b == c) {
            cout << "Type by sides : Equilateral" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Type by sides : Isosceles" << endl;
        } else {
            cout << "Type by sides : Scalene" << endl;
        }

        // Find the longest side
        if (a >= b && a >= c) {
            big = a; s1 = b; s2 = c;
        } else if (b >= a && b >= c) {
            big = b; s1 = a; s2 = c;
        } else {
            big = c; s1 = a; s2 = b;
        }

        // Classification by angles (compare squares)
        if (big * big == s1 * s1 + s2 * s2) {
            cout << "Type by angles: Right-angled" << endl;
        } else if (big * big < s1 * s1 + s2 * s2) {
            cout << "Type by angles: Acute-angled" << endl;
        } else {
            cout << "Type by angles: Obtuse-angled" << endl;
        }
    }

    return 0;
}
