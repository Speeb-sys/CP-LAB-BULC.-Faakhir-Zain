// Program 58: Exam pass with attendance
// Category: nested-if statement
#include <iostream>
using namespace std;

int main() {
    int marks, attendance;
    cout << "Enter marks and attendance %: "; cin >> marks >> attendance;
    if (attendance >= 75) {
        if (marks >= 40) {
            cout << "Pass" << endl;
        } else {
            cout << "Fail: low marks" << endl;
        }
    } else {
        cout << "Not allowed: low attendance" << endl;
    }
    return 0;
}
