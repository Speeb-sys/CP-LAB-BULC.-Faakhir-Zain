// Program 59: Car rental eligibility
// Category: nested-if statement
#include <iostream>
using namespace std;

int main() {
    int age; char license;
    cout << "Enter age: "; cin >> age;
    cout << "Do you have a license? (y/n): "; cin >> license;
    if (age >= 21) {
        if (license == 'y') {
            cout << "You can rent a car" << endl;
        } else {
            cout << "License required" << endl;
        }
    } else {
        cout << "Minimum age is 21" << endl;
    }
    return 0;
}
