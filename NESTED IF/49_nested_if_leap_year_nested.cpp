// Program 49: Leap year using nested if
// Category: nested-if statement
#include <iostream>
using namespace std;

int main() {
    int y; cout << "Enter year: "; cin >> y;
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) {
                cout << "Leap year" << endl;
            } else {
                cout << "Not a leap year" << endl;
            }
        } else {
            cout << "Leap year" << endl;
        }
    } else {
        cout << "Not a leap year" << endl;
    }
    return 0;
}
