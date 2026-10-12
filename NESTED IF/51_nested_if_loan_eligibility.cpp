// Program 51: Loan eligibility
// Category: nested-if statement
#include <iostream>
using namespace std;

int main() {
    int age; double salary;
    cout << "Enter age and monthly salary: "; cin >> age >> salary;
    if (age >= 21) {
        if (salary >= 30000) {
            cout << "Loan approved" << endl;
        } else {
            cout << "Salary too low" << endl;
        }
    } else {
        cout << "Age requirement not met" << endl;
    }
    return 0;
}
