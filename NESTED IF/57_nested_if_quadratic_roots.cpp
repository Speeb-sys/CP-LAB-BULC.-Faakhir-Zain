// Program 57: Nature of quadratic roots
// Category: nested-if statement
#include <iostream>
using namespace std;

int main() {
    double a, b, c; cout << "Enter a, b, c: "; cin >> a >> b >> c;
    if (a != 0) {
        double d = b * b - 4 * a * c;
        if (d > 0) {
            cout << "Two distinct real roots" << endl;
        } else {
            if (d == 0) {
                cout << "Two equal real roots" << endl;
            } else {
                cout << "Complex roots" << endl;
            }
        }
    } else {
        cout << "Not a quadratic equation" << endl;
    }
    return 0;
}
