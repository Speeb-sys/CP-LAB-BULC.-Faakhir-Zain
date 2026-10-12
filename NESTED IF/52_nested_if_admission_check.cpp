// Program 52: College admission
// Category: nested-if statement
#include <iostream>
using namespace std;

int main() {
    int marks; char entry;
    cout << "Enter marks: "; cin >> marks;
    cout << "Passed entry test? (y/n): "; cin >> entry;
    if (marks >= 60) {
        if (entry == 'y') {
            cout << "Admission granted" << endl;
        } else {
            cout << "Entry test not passed" << endl;
        }
    } else {
        cout << "Marks are too low" << endl;
    }
    return 0;
}
