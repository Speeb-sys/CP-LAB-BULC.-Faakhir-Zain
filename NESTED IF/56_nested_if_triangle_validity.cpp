// Program 56: Valid triangle then its type
// Category: nested-if statement
#include <iostream>
using namespace std;

int main() {
    int a, b, c; cout << "Enter three sides: "; cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Valid triangle" << endl;
        if (a == b && b == c) {
            cout << "It is equilateral" << endl;
        } else {
            cout << "It is not equilateral" << endl;
        }
    } else {
        cout << "Not a valid triangle" << endl;
    }
    return 0;
}
