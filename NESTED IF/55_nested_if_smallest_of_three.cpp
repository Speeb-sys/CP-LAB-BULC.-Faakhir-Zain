// Program 55: Smallest of three numbers
// Category: nested-if statement
#include <iostream>
using namespace std;

int main() {
    int a, b, c; cout << "Enter three numbers: "; cin >> a >> b >> c;
    if (a < b) {
        if (a < c) {
            cout << a << " is the smallest" << endl;
        } else {
            cout << c << " is the smallest" << endl;
        }
    } else {
        if (b < c) {
            cout << b << " is the smallest" << endl;
        } else {
            cout << c << " is the smallest" << endl;
        }
    }
    return 0;
}
