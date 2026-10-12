// Program 60: Classify number range
// Category: nested-if statement
#include <iostream>
using namespace std;

int main() {
    int n; cout << "Enter a number: "; cin >> n;
    if (n >= 0) {
        if (n <= 9) {
            cout << "Single digit" << endl;
        } else {
            if (n <= 99) {
                cout << "Two digits" << endl;
            } else {
                cout << "Three or more digits" << endl;
            }
        }
    } else {
        cout << "Negative number" << endl;
    }
    return 0;
}
